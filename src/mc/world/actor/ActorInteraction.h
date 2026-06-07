#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

class ActorInteraction {
public:
    // ActorInteraction inner types define
    using OnInteraction = ::brstd::move_only_function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                       mInteractText;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mInteraction;
    ::ll::TypedStorage<1, 1, bool>                                 mNoCapture;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInteraction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorInteraction(bool noCapture);

    MCAPI void capture(::brstd::move_only_function<void()> interactFunc);

    MCFOLD ::std::string const& getInteractText() const;

    MCAPI void interact();

    MCFOLD void setInteractText(::std::string text);

    MCFOLD bool shouldCapture() const;

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
    MCAPI void $dtor();
    // NOLINTEND
};
