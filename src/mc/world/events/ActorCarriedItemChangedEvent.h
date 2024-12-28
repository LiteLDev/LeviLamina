#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorCarriedItemChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk76ac39;
    ::ll::UntypedStorage<8, 128> mUnkf73fc4;
    ::ll::UntypedStorage<8, 128> mUnkc73ab0;
    ::ll::UntypedStorage<4, 4>   mUnkb53b90;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorCarriedItemChangedEvent& operator=(ActorCarriedItemChangedEvent const&);
    ActorCarriedItemChangedEvent(ActorCarriedItemChangedEvent const&);
    ActorCarriedItemChangedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorCarriedItemChangedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
