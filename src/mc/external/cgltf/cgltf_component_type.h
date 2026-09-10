#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class cgltf_component_type : int {
    Invalid = 0,
    R8      = 1,
    R8u     = 2,
    R16     = 3,
    R16u    = 4,
    R32u    = 5,
    R32f    = 6,
    MaxEnum = 7,
};
