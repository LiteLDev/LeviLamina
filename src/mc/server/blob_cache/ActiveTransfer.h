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
    // symbol: ??0ActiveTransfer@Server@ClientBlobCache@@QEAA@XZ
    MCAPI ActiveTransfer();

    // symbol: ??0ActiveTransfer@Server@ClientBlobCache@@QEAA@AEAVActiveTransfersManager@12@AEBVNetworkIdentifier@@@Z
    MCAPI
    ActiveTransfer(class ClientBlobCache::Server::ActiveTransfersManager& cache, class NetworkIdentifier const& client);

    // symbol: ?isDone@ActiveTransfer@Server@ClientBlobCache@@QEBA_NXZ
    MCAPI bool isDone() const;

    // symbol: ?onAckReceived@ActiveTransfer@Server@ClientBlobCache@@QEAAX_K@Z
    MCAPI void onAckReceived(uint64 acked);

    // symbol: ?shouldBeSent@ActiveTransfer@Server@ClientBlobCache@@QEBA_NXZ
    MCAPI bool shouldBeSent() const;

    // NOLINTEND
};

}; // namespace ClientBlobCache::Server
