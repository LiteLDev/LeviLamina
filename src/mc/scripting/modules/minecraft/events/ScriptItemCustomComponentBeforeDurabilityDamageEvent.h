#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentBeforeEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentBeforeDurabilityDamageEvent
: public ::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeEvent<int&, ::ItemStack&, ::Actor&, ::Mob&> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke129c5;
    ::ll::UntypedStorage<8, 40> mUnk250afe;
    ::ll::UntypedStorage<8, 32> mUnk2bc6c4;
    ::ll::UntypedStorage<8, 32> mUnk38cd6b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentBeforeDurabilityDamageEvent&
    operator=(ScriptItemCustomComponentBeforeDurabilityDamageEvent const&);
    ScriptItemCustomComponentBeforeDurabilityDamageEvent(ScriptItemCustomComponentBeforeDurabilityDamageEvent const&);
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
    MCAPI ::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent&
    operator=(::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
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

    MCAPI bool $shouldCancel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
