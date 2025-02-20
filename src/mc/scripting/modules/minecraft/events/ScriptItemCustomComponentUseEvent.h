#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentIntermediateStorage.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
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
    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 152> mUnkd8137d;
        ::ll::UntypedStorage<8, 24>  mUnkd4dd60;
        // NOLINTEND

    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();

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
    ::ll::UntypedStorage<8, 40> mUnk3c4259;
    ::ll::UntypedStorage<8, 32> mUnkf132a4;
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
