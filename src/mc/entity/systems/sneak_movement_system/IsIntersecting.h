#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on

namespace SneakMovementSystem {

struct IsIntersecting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AABB const&> mAABB;
    // NOLINTEND

public:
    // prevent constructor by default
    IsIntersecting& operator=(IsIntersecting const&);
    IsIntersecting(IsIntersecting const&);
    IsIntersecting();
};

} // namespace SneakMovementSystem
