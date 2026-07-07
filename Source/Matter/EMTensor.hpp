/* GRTresna
 * Copyright 2024 The GRTL Collaboration.
 * Please refer to LICENSE in GRTresna's root directory.
 */

#ifndef EMTENSOR_HPP_
#define EMTENSOR_HPP_

#include "REAL.H"
#include "Tensor.hpp"

//! A structure for the decomposed elements of the Energy Momentum Tensor in
//! 3+1D
struct emtensor_t
{
    Tensor<1, Real> Si; //!< S_i = T_ia_n^a
    Real rho;           //!< rho = T_ab n^a n^b

    Real rho_grad;
    Real rho_kin;
    
    Real rho_theta;   // canonical kinetic term for Horndeski 
    Real rho_theta_g2;  // kinetic with g2
    Real rho_theta_g3;  // g3 term (without K)
};

#endif /* EMTENSOR_HPP_ */
