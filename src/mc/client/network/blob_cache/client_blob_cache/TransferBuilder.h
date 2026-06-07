#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class TransferBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 248> mUnkd248eb;
    // NOLINTEND

public:
    // prevent constructor by default
    TransferBuilder& operator=(TransferBuilder const&);
    TransferBuilder(TransferBuilder const&);
    TransferBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(uint64 id, ::std::string& blob, bool isChunkInTickRange);

    MCNAPI ~TransferBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
