//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//
// Metal/MTLPixelFormat.hpp
//
// Copyright 2020-2023 Apple Inc.
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
//
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

#pragma once

#include <Foundation/Foundation.hpp>
#include "MTLDefines.hpp"

namespace MTL {
    _MTL_ENUM(NS::UInteger, AutoResizingMask){NotSizable = 0, MinXMargin = 1, WidthSizable = 2,
                                              MaxXMargin = 4, MinYMargin = 8, HeightSizable = 16,
                                              MaxYMargin = 32};
}
