#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
struct PressurePlatePushEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePushAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                           mPos;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mSource;
    ::ll::TypedStorage<4, 4, int>                                                         mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int>                                                         mRedstonePower;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPressurePlatePushAfterEventIntermediateData&
    operator=(ScriptPressurePlatePushAfterEventIntermediateData const&);
    ScriptPressurePlatePushAfterEventIntermediateData(ScriptPressurePlatePushAfterEventIntermediateData const&);
    ScriptPressurePlatePushAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptPressurePlatePushAfterEventIntermediateData(::PressurePlatePushEvent const& eventData, ::Actor const* source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PressurePlatePushEvent const& eventData, ::Actor const* source);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
