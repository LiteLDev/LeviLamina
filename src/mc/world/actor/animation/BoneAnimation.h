#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/animation/BoneAnimationRelativeMode.h"

// auto generated forward declare list
// clang-format off
class BoneAnimationChannel;
// clang-format on

class BoneAnimation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                        mBoneName;
    ::ll::TypedStorage<8, 24, ::std::vector<::BoneAnimationChannel>> mAnimationChannels;
    ::ll::TypedStorage<1, 1, ::BoneAnimationRelativeMode>            mRotationRelativeMode;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneAnimation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BoneAnimation(::std::string const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name);
    // NOLINTEND
};
