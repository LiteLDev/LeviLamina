#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemInstance.h"

namespace ScriptModuleMinecraft {

struct ScriptItemUseIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance const>                          mItemInstance;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData const> mPlayer;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
