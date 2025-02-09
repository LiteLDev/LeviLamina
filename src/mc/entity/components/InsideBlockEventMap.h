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
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>      mOnEnteredBlock;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>      mOnExitedBlock;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mBlock;
    ::ll::TypedStorage<1, 1, bool>                            mWatchEnter;
    ::ll::TypedStorage<1, 1, bool>                            mWatchExit;
    ::ll::TypedStorage<1, 1, bool>                            mCurrentlyInside;
    ::ll::TypedStorage<1, 1, bool>                            mWasInside;
    ::ll::TypedStorage<1, 1, bool>                            mIgnoreStates;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBlockEventMap& operator=(InsideBlockEventMap const&);

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

    MCFOLD ::ActorDefinitionTrigger const& getEnteredEvent() const;

    MCFOLD ::ActorDefinitionTrigger const& getExitedEvent() const;

    MCAPI bool isActorCurrentlyInside() const;

    MCFOLD bool isIgnoringStates() const;

    MCFOLD bool isWatchingIfActorEnters() const;

    MCAPI bool isWatchingIfActorExits() const;

    MCFOLD void setCurrentlyInside(bool isInside);

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
