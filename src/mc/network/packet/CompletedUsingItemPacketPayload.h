#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CompletedUsingItemPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkf9525a;
    ::ll::UntypedStorage<4, 4> mUnk70cc83;
    // NOLINTEND

public:
    // prevent constructor by default
    CompletedUsingItemPacketPayload& operator=(CompletedUsingItemPacketPayload const&);
    CompletedUsingItemPacketPayload(CompletedUsingItemPacketPayload const&);
    CompletedUsingItemPacketPayload();
};
