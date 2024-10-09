#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class TransferBuilder {
public:
    // prevent constructor by default
    TransferBuilder& operator=(TransferBuilder const&);
    TransferBuilder(TransferBuilder const&);
    TransferBuilder();

public:
    // NOLINTBEGIN
    MCAPI void add(uint64 id, std::string& blob, bool isChunkInTickRange);

    MCAPI ~TransferBuilder();

    // NOLINTEND
};

}; // namespace ClientBlobCache::Server
