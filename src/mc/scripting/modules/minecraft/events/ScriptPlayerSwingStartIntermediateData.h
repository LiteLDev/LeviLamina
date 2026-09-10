#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/item/ItemStack.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerSwingStartIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack>                             mItemStack;
    ::ll::TypedStorage<1, 1, ::ActorSwingSource>                        mSwingSource;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
