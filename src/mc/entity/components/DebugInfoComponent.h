#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ActorEventListener;
class HashedString;
struct ActorDefinitionTriggeredEvent;
struct ActorUniqueID;
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
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DebugInfoComponent::Listener>> mListeners;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint64>>  mPacketHashes;
    ::ll::TypedStorage<8, 40, ::std::deque<::std::string>>                   mSentEvents;
    ::ll::TypedStorage<1, 1, bool>                                           mEventListenerRegistered;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mMobUniqueId;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugInfoComponent& operator=(DebugInfoComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 37
    virtual ::EventResult onEvent(::ActorDefinitionTriggeredEvent const& actorDefinitionEvent) /*override*/;

    // vIndex: 0
    virtual ~DebugInfoComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DebugInfoComponent(::DebugInfoComponent&&);

    MCAPI DebugInfoComponent(::DebugInfoComponent const&);

    MCAPI ::DebugInfoComponent& operator=(::DebugInfoComponent&&);
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
