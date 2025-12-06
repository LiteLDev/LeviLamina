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
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptItemStack; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentConsumeEvent : public ::ScriptModuleMinecraft::ScriptItemCustomComponentAfterEvent {
public:
    // ScriptItemCustomComponentConsumeEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptItemCustomComponentConsumeEvent inner types define
    using EventConnectorsType = ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<
        void(::ItemStack const&, ::ItemStack&, ::Actor&)>;

    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack const>    mItemStack;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mEntity;
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
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
                                                                                                          mScriptItem;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentConsumeEvent& operator=(ScriptItemCustomComponentConsumeEvent const&);
    ScriptItemCustomComponentConsumeEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemCustomComponentConsumeEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemCustomComponentConsumeEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent const&);

    MCAPI ScriptItemCustomComponentConsumeEvent(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                      scope
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
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent const&);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                      scope
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
