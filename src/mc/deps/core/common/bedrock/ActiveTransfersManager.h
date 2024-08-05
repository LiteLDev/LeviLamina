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
        MCAPI void onAckReceived(uint64 acked);

        MCAPI ~TransferTracker();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ActiveTransfersManager& operator=(ActiveTransfersManager const&);
    ActiveTransfersManager(ActiveTransfersManager const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActiveTransfersManager();

    MCAPI ActiveTransfersManager();

    MCAPI void collectTrackingData() const;

    MCAPI std::shared_ptr<class ClientBlobCache::Server::Blob>
          dropBlobFor(class NetworkIdentifier const& client, uint64 id);

    MCAPI void enableCacheFor(class NetworkIdentifier const& client);

    MCAPI bool isCacheEnabledFor(class NetworkIdentifier const& client) const;

    MCAPI void onPeerDisconnected(class NetworkIdentifier const& client);

    MCAPI class ClientBlobCache::Server::TransferBuilder startTransfer(class NetworkIdentifier const& client) const;

    MCAPI class ClientBlobCache::Server::TransferBuilder tryStartTransfer(class NetworkIdentifier const& client) const;

    MCAPI void updateNetworkConditions(class ServerNetworkSystem&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<class ClientBlobCache::Server::Blob> rememberBlob(uint64 id, std::string& data, bool);

    // NOLINTEND
};

}; // namespace ClientBlobCache::Server
