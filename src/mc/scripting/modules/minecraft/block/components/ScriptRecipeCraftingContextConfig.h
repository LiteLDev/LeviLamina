#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/block/components/ScriptRecipeMapping.h"
#include "mc/world/actor/player/PlayerUISlot.h"

namespace ScriptModuleMinecraft {

struct ScriptRecipeCraftingContextConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PlayerUISlot>>                                 mInputsMappings;
    ::ll::TypedStorage<8, 64, ::std::optional<::ScriptModuleMinecraft::ScriptRecipeMapping>> mRecipeMapping;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
