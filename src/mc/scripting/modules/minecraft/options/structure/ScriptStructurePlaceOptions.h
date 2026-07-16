#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptStructurePlaceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<::Mirror>>        mMirror;
    ::ll::TypedStorage<1, 2, ::std::optional<::Rotation>>      mRotation;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>            mIncludeEntities;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>            mIncludeBlocks;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>            mWaterlogged;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>           mIntegrity;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>  mIntegritySeed;
    ::ll::TypedStorage<1, 2, ::std::optional<::AnimationMode>> mAnimationMode;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>           mAnimationSeconds;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
