#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorItemDropEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>           mScope;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>               mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemDropEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorItemDropEventFilterData(
        ::Scripting::WeakLifetimeScope           scope,
        ::ScriptModuleMinecraft::ScriptActorData actorData,
        ::std::vector<::ItemStack>               items
    );

    MCAPI ~ScriptActorItemDropEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemDropEventFilterData create(
        ::Scripting::WeakLifetimeScope                          scope,
        ::ScriptModuleMinecraft::ScriptActorData                actorData,
        ::std::vector<::ScriptModuleMinecraft::ScriptActorData> items
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(
        ::Scripting::WeakLifetimeScope           scope,
        ::ScriptModuleMinecraft::ScriptActorData actorData,
        ::std::vector<::ItemStack>               items
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
