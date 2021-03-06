// Copyright (c) 2019, NVIDIA CORPORATION. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef DALI_KERNELS_IMGPROC_WARP_GPU_H_
#define DALI_KERNELS_IMGPROC_WARP_GPU_H_

#ifdef __CUDACC__
#include "dali/kernels/imgproc/warp_gpu.cuh"
#else

namespace dali {
namespace kernels {

template <typename _Mapping, int _spatial_ndim, typename _OutputType, typename _InputType,
          typename _BorderType>
class WarpGPU;

}  // namespace kernels
}  // namespace dali

#endif

#endif  // DALI_KERNELS_IMGPROC_WARP_GPU_H_
