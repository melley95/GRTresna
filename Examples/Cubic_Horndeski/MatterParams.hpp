/* GRTresna
 * Copyright 2024 The GRTL Collaboration.
 * Please refer to LICENSE in GRTresna's root directory.
 */

#ifndef MATTERPARAMS_HPP_
#define MATTERPARAMS_HPP_

#include "GRParmParse.hpp"
#include "REAL.H"

namespace MatterParams
{

struct params_t
{
    Real amp;
    Real width;
    Real centre;
    Real scalar_mass;

    Real pi_theta_0; // Initial Horndeski field velocity
    Real vel; // Velocity of ingoing gaussian
};

inline void read_params(GRParmParse &pp, params_t &matter_params)
{
    pp.get("amp", matter_params.amp);
    pp.get("centre", matter_params.centre);
    pp.get("width", matter_params.width);
    pp.get("scalar_mass", matter_params.scalar_mass);

    pp.get("pi_theta_0", matter_params.pi_theta_0);
    pp.get("vel_0", matter_params.vel);
}

}; // namespace MatterParams

#endif
