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
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentUseEvent : public ::ScriptModuleMinecraft::ScriptItemCustomComponentAfterEvent {
public:
    // ScriptItemCustomComponentUseEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptItemCustomComponentUseEvent inner types define
    using EventConnectorsType =
        ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<void(bool&, ::ItemStack&, ::Player&)>;

    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack const>    mItemStack;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mPlayer;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~IntermediateStorage();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentUseEvent& operator=(ScriptItemCustomComponentUseEvent const&);
    ScriptItemCustomComponentUseEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemCustomComponentUseEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemCustomComponentUseEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent const&);

    MCAPI ScriptItemCustomComponentUseEvent(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                  scope
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
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent const&);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                  scope
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
