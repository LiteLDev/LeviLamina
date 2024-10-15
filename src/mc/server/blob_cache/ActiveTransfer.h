#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
// clang-format on

namespace ClientBlobCache::Server {

class ActiveTransfer {
public:
    // prevent constructor by default
    ActiveTransfer& operator=(ActiveTransfer const&);
    ActiveTransfer(ActiveTransfer const&);

public:
    // NOLINTBEGIN
    MCAPI ActiveTransfer();

    MCAPI
    ActiveTransfer(class ClientBlobCache::Server::ActiveTransfersManager& cache, class NetworkIdentifier const& client);

    MCAPI bool isDone() const;

    MCAPI void onAckReceived(uint64 acked);

    MCAPI bool shouldBeSent() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void*
    ctor$(class ClientBlobCache::Server::ActiveTransfersManager& cache, class NetworkIdentifier const& client);

    // NOLINTEND
};

}; // namespace ClientBlobCache::Server
