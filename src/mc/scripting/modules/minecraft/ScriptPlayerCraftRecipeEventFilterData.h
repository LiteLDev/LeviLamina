#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptPlayerCraftRecipeEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>           mScope;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayerActorData;
    ::ll::TypedStorage<8, 8, ::Block const*>                            mBlock;
    ::ll::TypedStorage<8, 152, ::ItemStack>                             mItemStack;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptPlayerCraftRecipeEventFilterData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
