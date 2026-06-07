#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemActor;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorItemDropAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData>                mActor;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptActorData>> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemDropAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorItemDropAfterEventIntermediateData(::Actor const& actor, ::ItemActor const& item);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor, ::ItemActor const& item);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
