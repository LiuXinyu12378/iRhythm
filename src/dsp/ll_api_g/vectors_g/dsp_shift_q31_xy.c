/*
//
//CONFIDENTIAL AND PROPRIETARY INFORMATION
//
//Copyright (c) 2015 Synopsys, Inc. All rights reserved.
//This software and documentation contain confidential and
//proprietary information that is the property of
//Synopsys, Inc. The software and documentation are
//furnished under a license agreement and may be used
//or copied only in accordance with the terms of the license
//agreement. No part of the software and documentation
//may be reproduced, transmitted, or translated, in any
//form or by any means, electronic, mechanical, manual,
//optical, or otherwise, without prior written permission
//of Synopsys, Inc., or as expressly provided by the license agreement.
//Reverse engineering is prohibited, and reproduction,
//disclosure or use without specific written authorization
//of Synopsys Inc. is strictly forbidden.
//
//
*/

#include "dsplib_primitives.h"
#if defined(_ARC_AS210_nomac)

// Produce instance with: MAC32x32; pIn0 - X; pOut - X; 

#pragma Code("dsplib_dsp_shift_q31_XtoX")

/**
 * Shifts the elements of a Q31 vector by a specified
 * number of bits. The algorithm used is:
 * offs_Dst[n] = offs_Src[n] << shift,   0 <= n < nSamples. 
 *
 * \param[in] offs_Src - XY memory offset to input vector. Vector length: nSamples
 * \param[out] offs_Dst - XY memory offset to output vector. Vector length: nSamples
 * \param shiftBits
 * \param nSamples - number of samples to be processed
 */

void dsp_shift_q31_XtoX(int32_t offs_Src, int8_t shiftBits, int32_t offs_Dst, uint32_t nSamples) 
{
    int32_t sample;

    _set_ax0(offs_Src);
    _set_mx00(1);
    _set_ax1(offs_Dst);
    _set_mx10(1);
    for (sample = 0; sample < (int32_t)nSamples>>1; sample++)
    {
        _set_x1_u0( dspfx_asl_q31(_x0_u0(), shiftBits));
        _set_x1_u0( dspfx_asl_q31(_x0_u0(), shiftBits));
    }
    if (nSamples & 1)
        _set_x1_u0( dspfx_asl_q31(_x0_u0(), shiftBits));
}
// Produce instance with: MAC32x32; pOut - X; pIn0 - Y; 

#pragma Code("dsplib_dsp_shift_q31_YtoX")

/**
 * Shifts the elements of a Q31 vector by a specified
 * number of bits. The algorithm used is:
 * offs_Dst[n] = offs_Src[n] << shift,   0 <= n < nSamples. 
 *
 * \param[in] offs_Src - XY memory offset to input vector. Vector length: nSamples
 * \param[out] offs_Dst - XY memory offset to output vector. Vector length: nSamples
 * \param shiftBits
 * \param nSamples - number of samples to be processed
 */

void dsp_shift_q31_YtoX(int32_t offs_Src, int8_t shiftBits, int32_t offs_Dst, uint32_t nSamples) 
{
    int32_t sample;

    _set_ay0(offs_Src);
    _set_my00(1);
    _set_ax0(offs_Dst);
    _set_mx00(1);
    for (sample = 0; sample < (int32_t)nSamples>>1; sample++)
    {
        _set_x0_u0( dspfx_asl_q31(_y0_u0(), shiftBits));
        _set_x0_u0( dspfx_asl_q31(_y0_u0(), shiftBits));
    }
    if (nSamples & 1)
        _set_x0_u0( dspfx_asl_q31(_y0_u0(), shiftBits));
}
// Produce instance with: MAC32x32; pOut - Y; pIn0 - X; 

#pragma Code("dsplib_dsp_shift_q31_XtoY")

/**
 * Shifts the elements of a Q31 vector by a specified
 * number of bits. The algorithm used is:
 * offs_Dst[n] = offs_Src[n] << shift,   0 <= n < nSamples. 
 *
 * \param[in] offs_Src - XY memory offset to input vector. Vector length: nSamples
 * \param[out] offs_Dst - XY memory offset to output vector. Vector length: nSamples
 * \param shiftBits
 * \param nSamples - number of samples to be processed
 */

void dsp_shift_q31_XtoY(int32_t offs_Src, int8_t shiftBits, int32_t offs_Dst, uint32_t nSamples) 
{
    int32_t sample;

    _set_ax0(offs_Src);
    _set_mx00(1);
    _set_ay0(offs_Dst);
    _set_my00(1);
    for (sample = 0; sample < (int32_t)nSamples>>1; sample++)
    {
        _set_y0_u0( dspfx_asl_q31(_x0_u0(), shiftBits));
        _set_y0_u0( dspfx_asl_q31(_x0_u0(), shiftBits));
    }
    if (nSamples & 1)
        _set_y0_u0( dspfx_asl_q31(_x0_u0(), shiftBits));
}
// Produce instance with: MAC32x32; pIn0 - Y; pOut - Y; 

#pragma Code("dsplib_dsp_shift_q31_YtoY")

/**
 * Shifts the elements of a Q31 vector by a specified
 * number of bits. The algorithm used is:
 * offs_Dst[n] = offs_Src[n] << shift,   0 <= n < nSamples. 
 *
 * \param[in] offs_Src - XY memory offset to input vector. Vector length: nSamples
 * \param[out] offs_Dst - XY memory offset to output vector. Vector length: nSamples
 * \param shiftBits
 * \param nSamples - number of samples to be processed
 */

void dsp_shift_q31_YtoY(int32_t offs_Src, int8_t shiftBits, int32_t offs_Dst, uint32_t nSamples) 
{
    int32_t sample;

    _set_ay0(offs_Src);
    _set_my00(1);
    _set_ay1(offs_Dst);
    _set_my10(1);
    for (sample = 0; sample < (int32_t)nSamples>>1; sample++)
    {
        _set_y1_u0( dspfx_asl_q31(_y0_u0(), shiftBits));
        _set_y1_u0( dspfx_asl_q31(_y0_u0(), shiftBits));
    }
    if (nSamples & 1)
        _set_y1_u0( dspfx_asl_q31(_y0_u0(), shiftBits));
}

#endif
