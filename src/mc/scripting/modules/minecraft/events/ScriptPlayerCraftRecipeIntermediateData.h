#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerCraftRecipeIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack>                             mItem;
    ::ll::TypedStorage<8, 16, ::WeakRef<::Dimension>>                   mDimension;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>              mBlockPos;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
