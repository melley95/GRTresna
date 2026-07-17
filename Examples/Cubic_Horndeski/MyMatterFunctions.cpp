/* GRTresna
 * Copyright 2024 The GRTL Collaboration.
 * Please refer to LICENSE in GRTresna's root directory.
 */

#include "ScalarField.hpp"

Real ScalarField::my_potential_function(const Real &phi_here) const
{
    return 0.0;
}

Real ScalarField::my_phi_function(const RealVect &loc) const
{
    Real rr = sqrt(loc[0] * loc[0] + loc[1] * loc[1] + loc[2] * loc[2]);
    Real A = m_matter_params.amp;
    Real sigma = m_matter_params.width;
    Real r0 = m_matter_params.centre;

    return A * pow(rr, 2.0) * exp(-pow(rr - r0, 2.0) / (2.0*pow(sigma, 2.0)))/ pow(r0, 2.0);
}

Real ScalarField::my_Pi_function(const RealVect &loc) const
{

    Real rr = sqrt(loc[0] * loc[0] + loc[1] * loc[1] + loc[2] * loc[2]);
    Real A = m_matter_params.amp;
    Real sigma = m_matter_params.width;
    Real r0 = m_matter_params.centre;


    return A * rr * (3.0 -  rr * (rr - r0)/pow(sigma, 2.0)) * exp(-pow(rr - r0, 2.0) / (2.0 * pow(sigma, 2.0)))/ pow(r0, 2.0);
}


Real ScalarField::my_phi2_function(const RealVect &loc) const
{
    return 0.0;
}

Real ScalarField::my_Pi2_function(const RealVect &loc) const
{
   
    return m_matter_params.pi2_0;
}