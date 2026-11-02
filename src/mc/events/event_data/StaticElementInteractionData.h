#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct StaticElementInteractionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk81d4db;
    ::ll::UntypedStorage<4, 4>  mUnkd5f3cf;
    ::ll::UntypedStorage<8, 8>  mUnk73bcf5;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticElementInteractionData& operator=(StaticElementInteractionData const&);
    StaticElementInteractionData(StaticElementInteractionData const&);
    StaticElementInteractionData();
};

} // namespace Social::Events
