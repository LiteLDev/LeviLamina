#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class Block;
// clang-format on

class InsideBlockEventMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnkbf08b6;
    ::ll::UntypedStorage<8, 104> mUnke62994;
    ::ll::UntypedStorage<8, 8>   mUnk394bad;
    ::ll::UntypedStorage<1, 1>   mUnk994dee;
    ::ll::UntypedStorage<1, 1>   mUnk3a3526;
    ::ll::UntypedStorage<1, 1>   mUnk3e56c6;
    ::ll::UntypedStorage<1, 1>   mUnk527ce9;
    ::ll::UntypedStorage<1, 1>   mUnkaeffb6;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBlockEventMap& operator=(InsideBlockEventMap const&);
    InsideBlockEventMap();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InsideBlockEventMap(::InsideBlockEventMap const&);

    MCAPI InsideBlockEventMap(
        ::Block const&                  block,
        bool                            watchEnter,
        bool                            watchExit,
        bool                            ignoreStates,
        ::ActorDefinitionTrigger const& enteredEvent,
        ::ActorDefinitionTrigger const& exitedEvent
    );

    MCAPI ::gsl::not_null<::Block const*> getBlock() const;

    MCAPI ::ActorDefinitionTrigger const& getEnteredEvent() const;

    MCAPI ::ActorDefinitionTrigger const& getExitedEvent() const;

    MCAPI bool isActorCurrentlyInside() const;

    MCAPI bool isIgnoringStates() const;

    MCAPI bool isWatchingIfActorEnters() const;

    MCAPI bool isWatchingIfActorExits() const;

    MCAPI void setCurrentlyInside(bool isInside);

    MCAPI void setWasInside(bool wasInside);

    MCAPI bool wasActorInsideLastTick() const;

    MCAPI ~InsideBlockEventMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::InsideBlockEventMap const&);

    MCAPI void* $ctor(
        ::Block const&                  block,
        bool                            watchEnter,
        bool                            watchExit,
        bool                            ignoreStates,
        ::ActorDefinitionTrigger const& enteredEvent,
        ::ActorDefinitionTrigger const& exitedEvent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
