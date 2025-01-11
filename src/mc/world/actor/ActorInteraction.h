#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorInteraction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdceb93;
    ::ll::UntypedStorage<8, 64> mUnk45ae3b;
    ::ll::UntypedStorage<1, 1>  mUnke06505;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInteraction& operator=(ActorInteraction const&);
    ActorInteraction(ActorInteraction const&);
    ActorInteraction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorInteraction(bool noCapture);

    MCFOLD void capture(::std::function<void()> interactFunc);

    MCFOLD ::std::string const& getInteractText() const;

    MCAPI void interact();

    MCFOLD void setInteractText(::std::string const& text);

    MCAPI bool shouldCapture() const;

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
