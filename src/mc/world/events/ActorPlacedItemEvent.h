#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorPlacedItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk693f4e;
    ::ll::UntypedStorage<8, 128> mUnkadf52f;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorPlacedItemEvent& operator=(ActorPlacedItemEvent const&);
    ActorPlacedItemEvent(ActorPlacedItemEvent const&);
    ActorPlacedItemEvent();
};
