#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentIntermediateStorage.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentHitEntityEvent : public ::ScriptModuleMinecraft::ScriptItemCustomComponentAfterEvent {
public:
    // ScriptItemCustomComponentHitEntityEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptItemCustomComponentHitEntityEvent inner types define
    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 152> mUnk64ebca;
        ::ll::UntypedStorage<8, 24>  mUnk27c880;
        ::ll::UntypedStorage<8, 24>  mUnk1032c9;
        ::ll::UntypedStorage<1, 1>   mUnk94310b;
        // NOLINTEND

    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI IntermediateStorage(::ItemStack& item, ::Actor& hitEntity, ::Mob& attackingEntity, bool hadEffect);

        MCNAPI ~IntermediateStorage();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ItemStack& item, ::Actor& hitEntity, ::Mob& attackingEntity, bool hadEffect);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk49e435;
    ::ll::UntypedStorage<8, 32> mUnkea70aa;
    ::ll::UntypedStorage<8, 32> mUnk293f53;
    ::ll::UntypedStorage<1, 1>  mUnk8323ae;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentHitEntityEvent& operator=(ScriptItemCustomComponentHitEntityEvent const&);
    ScriptItemCustomComponentHitEntityEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemCustomComponentHitEntityEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemCustomComponentHitEntityEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent&&);

    MCNAPI
    ScriptItemCustomComponentHitEntityEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent const&);

    MCNAPI ScriptItemCustomComponentHitEntityEvent(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                        scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent const&);

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                        scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
