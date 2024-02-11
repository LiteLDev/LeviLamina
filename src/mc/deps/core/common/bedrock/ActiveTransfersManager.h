#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class ServerNetworkSystem;
namespace Bedrock { class EnableNonOwnerReferences; }
namespace ClientBlobCache::Server { class Blob; }
namespace ClientBlobCache::Server { class TransferBuilder; }
// clang-format on

namespace ClientBlobCache::Server {

class ActiveTransfersManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ActiveTransfersManager inner types declare
    // clang-format off
    class TransferTracker;
    // clang-format on

    // ActiveTransfersManager inner types define
    class TransferTracker {
    public:
        // prevent constructor by default
        TransferTracker& operator=(TransferTracker const&);
        TransferTracker(TransferTracker const&);
        TransferTracker();

    public:
        // NOLINTBEGIN
        // symbol: ?onAckReceived@TransferTracker@ActiveTransfersManager@Server@ClientBlobCache@@QEAAX_K@Z
        MCAPI void onAckReceived(uint64 acked);

        // symbol: ??1TransferTracker@ActiveTransfersManager@Server@ClientBlobCache@@QEAA@XZ
        MCAPI ~TransferTracker();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ActiveTransfersManager& operator=(ActiveTransfersManager const&);
    ActiveTransfersManager(ActiveTransfersManager const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActiveTransfersManager@Server@ClientBlobCache@@UEAA@XZ
    virtual ~ActiveTransfersManager();

    // symbol: ??0ActiveTransfersManager@Server@ClientBlobCache@@QEAA@XZ
    MCAPI ActiveTransfersManager();

    // symbol: ?collectTrackingData@ActiveTransfersManager@Server@ClientBlobCache@@QEBAXXZ
    MCAPI void collectTrackingData() const;

    // symbol:
    // ?dropBlobFor@ActiveTransfersManager@Server@ClientBlobCache@@QEAA?AV?$shared_ptr@VBlob@Server@ClientBlobCache@@@std@@AEBVNetworkIdentifier@@_K@Z
    MCAPI std::shared_ptr<class ClientBlobCache::Server::Blob>
          dropBlobFor(class NetworkIdentifier const& client, uint64 id);

    // symbol: ?enableCacheFor@ActiveTransfersManager@Server@ClientBlobCache@@QEAAXAEBVNetworkIdentifier@@@Z
    MCAPI void enableCacheFor(class NetworkIdentifier const& client);

    // symbol: ?isCacheEnabledFor@ActiveTransfersManager@Server@ClientBlobCache@@QEBA_NAEBVNetworkIdentifier@@@Z
    MCAPI bool isCacheEnabledFor(class NetworkIdentifier const& client) const;

    // symbol: ?onPeerDisconnected@ActiveTransfersManager@Server@ClientBlobCache@@QEAAXAEBVNetworkIdentifier@@@Z
    MCAPI void onPeerDisconnected(class NetworkIdentifier const& client);

    // symbol:
    // ?startTransfer@ActiveTransfersManager@Server@ClientBlobCache@@QEBA?AVTransferBuilder@23@AEBVNetworkIdentifier@@@Z
    MCAPI class ClientBlobCache::Server::TransferBuilder startTransfer(class NetworkIdentifier const& client) const;

    // symbol: ?updateNetworkConditions@ActiveTransfersManager@Server@ClientBlobCache@@QEAAXAEAVServerNetworkSystem@@@Z
    MCAPI void updateNetworkConditions(class ServerNetworkSystem&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?rememberBlob@ActiveTransfersManager@Server@ClientBlobCache@@AEAA?AV?$shared_ptr@VBlob@Server@ClientBlobCache@@@std@@_KAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@_N@Z
    MCAPI std::shared_ptr<class ClientBlobCache::Server::Blob> rememberBlob(uint64 id, std::string& data, bool);

    // NOLINTEND
};

}; // namespace ClientBlobCache::Server
