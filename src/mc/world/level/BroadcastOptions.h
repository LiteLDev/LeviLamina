#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BroadcastOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb81260;
    ::ll::UntypedStorage<4, 4>  mUnk8209c5;
    ::ll::UntypedStorage<4, 4>  mUnka105a6;
    ::ll::UntypedStorage<4, 4>  mUnke7dc0e;
    ::ll::UntypedStorage<4, 8>  mUnk27f488;
    ::ll::UntypedStorage<8, 24> mUnkfdd9e8;
    ::ll::UntypedStorage<8, 16> mUnkd667a5;
    // NOLINTEND

public:
    // prevent constructor by default
    BroadcastOptions& operator=(BroadcastOptions const&);
    BroadcastOptions(BroadcastOptions const&);
    BroadcastOptions();
};
