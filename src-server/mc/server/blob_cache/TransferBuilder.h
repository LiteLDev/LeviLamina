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
    ::ll::UntypedStorage<8, 248> mUnkd248eb;
    // NOLINTEND

public:
    // prevent constructor by default
    TransferBuilder& operator=(TransferBuilder const&);
    TransferBuilder(TransferBuilder const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransferBuilder();

    MCNAPI TransferBuilder(::ClientBlobCache::Server::ActiveTransfersManager& cache, ::NetworkIdentifier const& client);

    MCNAPI void add(uint64 id, ::std::string& blob, bool isChunkInTickRange);

    MCNAPI ~TransferBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ClientBlobCache::Server::ActiveTransfersManager& cache, ::NetworkIdentifier const& client);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
