/* GRTresna
 * Copyright 2024 The GRTL Collaboration.
 * Please refer to LICENSE in GRTresna's root directory.
 */

#include "ScalarField.hpp"

Real ScalarField::my_potential_function(const Real &phi_here) const
{
    return 0.5 * pow(m_matter_params.scalar_mass * phi_here, 2.0);
}

Real ScalarField::my_phi_function(const RealVect &loc) const
{
    Real rr = sqrt(loc[0] * loc[0] + loc[1] * loc[1] + loc[2] * loc[2]);
    return m_matter_params.amp * exp(-pow(rr - m_matter_params.centre, 2.0) / (2.0*pow(m_matter_params.width, 2.0)));
}

Real ScalarField::my_Pi_function(const RealVect &loc) const
{

    Real rr = sqrt(loc[0] * loc[0] + loc[1] * loc[1] + loc[2] * loc[2]);
    return -m_matter_params.amp * m_matter_params.vel * (rr - m_matter_params.centre) * exp(-pow(rr - m_matter_params.centre, 2.0) / (2.0*pow(m_matter_params.width, 2.0)))/pow(m_matter_params.width, 2.0);
}


Real ScalarField::my_phi2_function(const RealVect &loc) const
{
    return 0.0;
}

Real ScalarField::my_Pi2_function(const RealVect &loc) const
{
   
    return m_matter_params.pi2_0;
}