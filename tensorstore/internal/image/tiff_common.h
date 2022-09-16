// Copyright 2022 The TensorStore Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef TENSORSTORE_INTERNAL_IMAGE_TIFF_COMMON_H_
#define TENSORSTORE_INTERNAL_IMAGE_TIFF_COMMON_H_

#include <string>
#include <vector>

#include "absl/status/status.h"

namespace tensorstore {
namespace internal_image {

/// Base class for handling libtiff errors.
struct LibTiffErrorBase {
  LibTiffErrorBase();
  ~LibTiffErrorBase();

  absl::Status error_;
};

}  // namespace internal_image
}  // namespace tensorstore

#endif  // TENSORSTORE_INTERNAL_IMAGE_TIFF_COMMON_H_