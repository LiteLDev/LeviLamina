#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ActorEventListener;
class HashedString;
class NetworkIdentifier;
struct ActorDefinitionTriggeredEvent;
// clang-format on

class DebugInfoComponent : public ::EventListenerDispatcher<::ActorEventListener> {
public:
    // DebugInfoComponent inner types declare
    // clang-format off
    struct Listener;
    // clang-format on

    // DebugInfoComponent inner types define
    struct Listener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48>  mUnk31d0b2;
        ::ll::UntypedStorage<8, 160> mUnk26c4f6;
        ::ll::UntypedStorage<1, 1>   mUnk7f0325;
        // NOLINTEND

    public:
        // prevent constructor by default
        Listener& operator=(Listener const&);
        Listener(Listener const&);
        Listener();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Listener();
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
    ::ll::UntypedStorage<8, 24> mUnke06071;
    ::ll::UntypedStorage<8, 64> mUnk7fafc0;
    ::ll::UntypedStorage<8, 40> mUnka34b10;
    ::ll::UntypedStorage<1, 1>  mUnk69b71c;
    ::ll::UntypedStorage<8, 8>  mUnk9cfb9b;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugInfoComponent& operator=(DebugInfoComponent const&);
    DebugInfoComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 37
    virtual ::EventResult onEvent(::ActorDefinitionTriggeredEvent const& actorDefinitionEvent) /*override*/;

    // vIndex: 0
    virtual ~DebugInfoComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DebugInfoComponent(::DebugInfoComponent&&);

    MCAPI DebugInfoComponent(::DebugInfoComponent const&);

    MCAPI void addListener(::HashedString const& messageType, ::NetworkIdentifier source, ::SubClientId subClientId);

    MCAPI bool listenersEmpty() const;

    MCAPI ::DebugInfoComponent& operator=(::DebugInfoComponent&&);

    MCAPI void removeListener(::HashedString const&, ::NetworkIdentifier networkIdentifier, ::SubClientId subClientId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DebugInfoComponent&&);

    MCAPI void* $ctor(::DebugInfoComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorDefinitionTriggeredEvent const& actorDefinitionEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
