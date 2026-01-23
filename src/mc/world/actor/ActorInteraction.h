#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorInteraction {
public:
    // ActorInteraction inner types define
    using OnInteraction = ::std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mInteractText;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mInteraction;
    ::ll::TypedStorage<1, 1, bool>                     mNoCapture;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInteraction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorInteraction(bool noCapture);

    MCFOLD void capture(::std::function<void()> interactFunc);

    MCFOLD void setInteractText(::std::string const& text);

    MCAPI ~ActorInteraction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool noCapture);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
