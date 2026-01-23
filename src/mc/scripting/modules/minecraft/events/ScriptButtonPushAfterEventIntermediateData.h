#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
struct ButtonPushEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptButtonPushAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                 mPos;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptButtonPushAfterEventIntermediateData& operator=(ScriptButtonPushAfterEventIntermediateData const&);
    ScriptButtonPushAfterEventIntermediateData(ScriptButtonPushAfterEventIntermediateData const&);
    ScriptButtonPushAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptButtonPushAfterEventIntermediateData(::ButtonPushEvent const& eventData, ::Actor const* source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ButtonPushEvent const& eventData, ::Actor const* source);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
