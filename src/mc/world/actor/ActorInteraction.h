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
    // member functions
    // NOLINTBEGIN
    MCAPI void capture(::brstd::move_only_function<void()> interactFunc);

    MCFOLD void setInteractText(::std::string text);

    MCAPI ~ActorInteraction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
