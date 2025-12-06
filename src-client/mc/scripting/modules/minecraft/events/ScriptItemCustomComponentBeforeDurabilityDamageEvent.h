#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentBeforeEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptItemStack; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentBeforeDurabilityDamageEvent
: public ::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeEvent<int&, ::ItemStack&, ::Actor&, ::Mob&> {
public:
    // ScriptItemCustomComponentBeforeDurabilityDamageEvent inner types define
    using EventConnectorsType =
        ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<void(int&, ::ItemStack&, ::Actor&, ::Mob&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mDurabilityDamage;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
                                                                                                          mScriptItem;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mHitEntity;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
        mAttackingEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentBeforeDurabilityDamageEvent&
    operator=(ScriptItemCustomComponentBeforeDurabilityDamageEvent const&);
    ScriptItemCustomComponentBeforeDurabilityDamageEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void updateEngineEvent(int& durabilityDamage, ::ItemStack& item, ::Actor&, ::Mob&) const /*override*/;

    // vIndex: 2
    virtual bool shouldCancel() const /*override*/;

    // vIndex: 0
    virtual ~ScriptItemCustomComponentBeforeDurabilityDamageEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemCustomComponentBeforeDurabilityDamageEvent(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent&&
    );

    MCAPI ScriptItemCustomComponentBeforeDurabilityDamageEvent(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent const&
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
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $updateEngineEvent(int& durabilityDamage, ::ItemStack& item, ::Actor&, ::Mob&) const;

    MCFOLD bool $shouldCancel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
