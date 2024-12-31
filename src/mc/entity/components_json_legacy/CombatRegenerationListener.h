#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ActorNotificationEvent;
// clang-format on

class CombatRegenerationListener : public ::ActorEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk50a1aa;
    ::ll::UntypedStorage<8, 8> mUnkd6d85a;
    ::ll::UntypedStorage<8, 8> mUnkafeee1;
    ::ll::UntypedStorage<1, 1> mUnke981c0;
    // NOLINTEND

public:
    // prevent constructor by default
    CombatRegenerationListener& operator=(CombatRegenerationListener const&);
    CombatRegenerationListener(CombatRegenerationListener const&);
    CombatRegenerationListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CombatRegenerationListener() /*override*/ = default;

    // vIndex: 1
    virtual ::EventResult onEvent(::ActorNotificationEvent const& event) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorNotificationEvent const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
