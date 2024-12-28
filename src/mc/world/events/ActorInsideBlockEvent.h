#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorInsideBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfbd055;
    ::ll::UntypedStorage<8, 8>  mUnk8a8b53;
    ::ll::UntypedStorage<4, 12> mUnk5e4484;
    ::ll::UntypedStorage<8, 16> mUnk971f3c;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInsideBlockEvent& operator=(ActorInsideBlockEvent const&);
    ActorInsideBlockEvent(ActorInsideBlockEvent const&);
    ActorInsideBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorInsideBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
