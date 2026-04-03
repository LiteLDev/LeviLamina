#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorItemPickupEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>           mScope;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>               mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemPickupEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorItemPickupEventFilterData(
        ::Scripting::WeakLifetimeScope           scope,
        ::ScriptModuleMinecraft::ScriptActorData actorData,
        ::std::vector<::ItemStack>               items
    );

    MCAPI ~ScriptActorItemPickupEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData create(
        ::Scripting::WeakLifetimeScope           scope,
        ::ScriptModuleMinecraft::ScriptActorData actorData,
        ::Actor const&                           item
    );

    MCAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData create(
        ::Scripting::WeakLifetimeScope           scope,
        ::ScriptModuleMinecraft::ScriptActorData actorData,
        ::std::vector<::ItemStack>               items
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
