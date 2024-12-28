#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
// clang-format on

namespace ClientBlobCache::Server {

class TransferBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 232> mUnkd248eb;
    // NOLINTEND

public:
    // prevent constructor by default
    TransferBuilder& operator=(TransferBuilder const&);
    TransferBuilder(TransferBuilder const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TransferBuilder();

    MCAPI TransferBuilder(::ClientBlobCache::Server::ActiveTransfersManager& cache, ::NetworkIdentifier const& client);

    MCAPI void add(uint64 id, ::std::string& blob, bool isChunkInTickRange);

    MCAPI ~TransferBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ClientBlobCache::Server::ActiveTransfersManager& cache, ::NetworkIdentifier const& client);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
