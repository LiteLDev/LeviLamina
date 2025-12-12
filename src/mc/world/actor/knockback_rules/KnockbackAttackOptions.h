#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

namespace KnockbackRules {

struct KnockbackAttackOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>        mSelf;
    ::ll::TypedStorage<8, 8, ::Mob&>        mTarget;
    ::ll::TypedStorage<4, 12, ::Vec3 const> mDirection;
    ::ll::TypedStorage<4, 4, float const>   mForce;
    ::ll::TypedStorage<4, 4, float const>   mHeightCap;
    ::ll::TypedStorage<1, 1, bool const>    mSlowdownSelf;
    // NOLINTEND

public:
    // prevent constructor by default
    KnockbackAttackOptions& operator=(KnockbackAttackOptions const&);
    KnockbackAttackOptions(KnockbackAttackOptions const&);
    KnockbackAttackOptions();
};

} // namespace KnockbackRules
