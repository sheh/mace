// Copyright 2018 Xiaomi, Inc.  All rights reserved.
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

#ifndef MACE_OPS_QUANTIZATION_UTIL_H_
#define MACE_OPS_QUANTIZATION_UTIL_H_

#include <vector>

#include "mace/core/tensor.h"

namespace mace {
namespace ops {

const int32_t *GetBiasData(const Tensor *bias,
                           const float input_scale,
                           const float filter_scale,
                           const index_t channels,
                           std::vector<int32_t> *bias_vec);
}  // namespace ops
}  // namespace mace

#endif  // MACE_OPS_QUANTIZATION_UTIL_H_
