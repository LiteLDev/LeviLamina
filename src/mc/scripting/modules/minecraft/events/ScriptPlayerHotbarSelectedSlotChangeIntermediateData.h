#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemStack.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerHotbarSelectedSlotChangeIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<4, 4, int>                                       mPreviousSlotSelected;
    ::ll::TypedStorage<4, 4, int>                                       mNewSlotSelected;
    ::ll::TypedStorage<8, 152, ::ItemStack>                             mItemStack;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
