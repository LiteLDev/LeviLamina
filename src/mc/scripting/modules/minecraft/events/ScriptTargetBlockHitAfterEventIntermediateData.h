#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
struct TargetBlockHitEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTargetBlockHitAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                           mPos;
    ::ll::TypedStorage<4, 4, int>                                                         mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int>                                                         mRedstonePower;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                     mHitVector;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTargetBlockHitAfterEventIntermediateData& operator=(ScriptTargetBlockHitAfterEventIntermediateData const&);
    ScriptTargetBlockHitAfterEventIntermediateData(ScriptTargetBlockHitAfterEventIntermediateData const&);
    ScriptTargetBlockHitAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptTargetBlockHitAfterEventIntermediateData(::TargetBlockHitEvent const& eventData, ::Actor const* source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TargetBlockHitEvent const& eventData, ::Actor const* source);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
