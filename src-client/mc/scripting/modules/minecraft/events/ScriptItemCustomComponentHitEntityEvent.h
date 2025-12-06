#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentIntermediateStorage.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptItemStack; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentHitEntityEvent : public ::ScriptModuleMinecraft::ScriptItemCustomComponentAfterEvent {
public:
    // ScriptItemCustomComponentHitEntityEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptItemCustomComponentHitEntityEvent inner types define
    using EventConnectorsType =
        ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<void(::ItemStack&, ::Actor&, ::Mob&), bool>;

    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack const>    mItemStack;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mHitEntity;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mAttackingEntity;
        ::ll::TypedStorage<1, 1, bool const>             mHadEffect;
        // NOLINTEND

    public:
        // prevent constructor by default
        IntermediateStorage();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI IntermediateStorage(::ItemStack& item, ::Actor& hitEntity, ::Mob& attackingEntity, bool hadEffect);

        MCAPI ~IntermediateStorage();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::ItemStack& item, ::Actor& hitEntity, ::Mob& attackingEntity, bool hadEffect);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
                                                                                                          mScriptItem;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mHitEntity;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
                                   mAttackingEntity;
    ::ll::TypedStorage<1, 1, bool> mHadEffect;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentHitEntityEvent& operator=(ScriptItemCustomComponentHitEntityEvent const&);
    ScriptItemCustomComponentHitEntityEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemCustomComponentHitEntityEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptItemCustomComponentHitEntityEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent const&);

    MCAPI ScriptItemCustomComponentHitEntityEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent&&);

    MCAPI ScriptItemCustomComponentHitEntityEvent(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                        scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent const&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent&&);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                        scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
