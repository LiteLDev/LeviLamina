#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorInteraction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdceb93;
    ::ll::UntypedStorage<8, 64> mUnk45ae3b;
    ::ll::UntypedStorage<1, 1> mUnke06505;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInteraction& operator=(ActorInteraction const&);
    ActorInteraction(ActorInteraction const&);
    ActorInteraction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorInteraction(bool noCapture);

    MCNAPI void capture(::std::function<void()> interactFunc);

    MCNAPI ~ActorInteraction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool noCapture);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
