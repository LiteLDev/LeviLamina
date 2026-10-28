#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace EntityAttack {

struct TargetedActorInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor*> mSelectedTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>  mHitPosition;
    // NOLINTEND
};

} // namespace EntityAttack
