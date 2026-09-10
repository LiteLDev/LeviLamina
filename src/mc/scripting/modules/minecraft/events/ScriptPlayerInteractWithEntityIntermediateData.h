#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemStack.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack>                             mBeforeItemStack;
    ::ll::TypedStorage<8, 152, ::ItemStack>                             mAfterItemStack;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mTarget;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
