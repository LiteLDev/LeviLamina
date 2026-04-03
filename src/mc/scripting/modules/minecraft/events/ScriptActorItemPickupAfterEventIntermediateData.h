#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorItemPickupAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mActor;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>               mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemPickupAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorItemPickupAfterEventIntermediateData(::Actor const& actor, ::ItemStack item);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor, ::ItemStack item);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
