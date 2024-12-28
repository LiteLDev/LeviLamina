#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorChunkTransferEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3a409d;
    ::ll::UntypedStorage<8, 8> mUnk45f558;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorChunkTransferEntry& operator=(ActorChunkTransferEntry const&);
    ActorChunkTransferEntry(ActorChunkTransferEntry const&);
    ActorChunkTransferEntry();
};
