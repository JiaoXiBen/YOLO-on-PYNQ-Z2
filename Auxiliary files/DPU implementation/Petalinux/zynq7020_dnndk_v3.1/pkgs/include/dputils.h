<<<<<<< HEAD
version https://git-lfs.github.com/spec/v1
oid sha256:ed000376f1986c209f9764720fef050529a8f15cf0e0d2774b8376eeed67dfbf
size 2906
=======
/*
-- (c) Copyright 2019 Xilinx, Inc. All rights reserved.
--
-- This file contains confidential and proprietary information
-- of Xilinx, Inc. and is protected under U.S. and
-- international copyright and other intellectual property
-- laws.
--
-- DISCLAIMER
-- This disclaimer is not a license and does not grant any
-- rights to the materials distributed herewith. Except as
-- otherwise provided in a valid license issued to you by
-- Xilinx, and to the maximum extent permitted by applicable
-- law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
-- WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
-- AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
-- BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
-- INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
-- (2) Xilinx shall not be liable (whether in contract or tort,
-- including negligence, or under any other theory of
-- liability) for any loss or damage of any kind or nature
-- related to, arising under or in connection with these
-- materials, including for any direct, or any indirect,
-- special, incidental, or consequential loss or damage
-- (including loss of data, profits, goodwill, or any type of
-- loss or damage suffered as a result of any action brought
-- by a third party) even if such damage or loss was
-- reasonably foreseeable or Xilinx had been advised of the
-- possibility of the same.
--
-- CRITICAL APPLICATIONS
-- Xilinx products are not designed or intended to be fail-
-- safe, or for use in any application requiring fail-safe
-- performance, such as life-support or safety devices or
-- systems, Class III medical devices, nuclear facilities,
-- applications related to the deployment of airbags, or any
-- other applications that could lead to death, personal
-- injury, or severe property or environmental damage
-- (individually and collectively, "Critical
-- Applications"). Customer assumes the sole risk and
-- liability of any use of Xilinx products in Critical
-- Applications, subject only to applicable laws and
-- regulations governing limitations on product liability.
--
-- THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
-- PART OF THIS FILE AT ALL TIMES.
*/

#ifndef _DPUTILS_H_
#define _DPUTILS_H_

#include <opencv2/opencv.hpp>

struct  dpu_task;
typedef struct dpu_task   DPUTask;


/* Set image into DPU Task's input Tensor */
int dpuSetInputImage(DPUTask *task, const char *nodeName,
    const cv::Mat &image, float *mean, int idx = 0);

/* Set image into DPU Task's input Tensor with a specified scale parameter */
int dpuSetInputImageWithScale(DPUTask *task, const char *nodeName,
    const cv::Mat &image, float *mean, float scale, int idx = 0);

/* Set image into DPU Task's input Tensor (mean values automatically processed by N2Cube) */
int dpuSetInputImage2(DPUTask *task, const char *nodeName, const cv::Mat &image, int idx = 0);

#endif
>>>>>>> origin/main