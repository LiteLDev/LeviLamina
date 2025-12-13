#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class HashedString;
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
        ::ll::UntypedStorage<8, 176> mUnk26c4f6;
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
        MCNAPI ~Listener();
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
    ::ll::TypedStorage<8, 24, ::std::vector<::DebugInfoComponent::Listener>> mListeners;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint64>>  mPacketHashes;
    ::ll::TypedStorage<8, 40, ::std::deque<::std::string>>                   mSentEvents;
    ::ll::TypedStorage<1, 1, bool>                                           mEventListenerRegistered;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mMobUniqueId;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugInfoComponent& operator=(DebugInfoComponent const&);
    DebugInfoComponent(DebugInfoComponent const&);
    DebugInfoComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::ActorDefinitionTriggeredEvent const& actorDefinitionEvent) /*override*/;

    virtual ~DebugInfoComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebugInfoComponent(::DebugInfoComponent&&);

    MCNAPI ::DebugInfoComponent& operator=(::DebugInfoComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DebugInfoComponent&&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ActorDefinitionTriggeredEvent const& actorDefinitionEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
