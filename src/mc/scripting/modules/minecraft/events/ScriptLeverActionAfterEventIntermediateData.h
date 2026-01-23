#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Player;
struct LeverActionEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLeverActionAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                 mPos;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mPlayer;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsPowered;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLeverActionAfterEventIntermediateData& operator=(ScriptLeverActionAfterEventIntermediateData const&);
    ScriptLeverActionAfterEventIntermediateData(ScriptLeverActionAfterEventIntermediateData const&);
    ScriptLeverActionAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptLeverActionAfterEventIntermediateData(::LeverActionEvent const& eventData, ::Player const* player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LeverActionEvent const& eventData, ::Player const* player);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
