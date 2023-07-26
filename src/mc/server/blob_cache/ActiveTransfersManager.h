#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class NetworkSystem;
namespace ClientBlobCache::Server { class Blob; }
namespace ClientBlobCache::Server { class TransferBuilder; }
// clang-format on

namespace ClientBlobCache::Server {

class ActiveTransfersManager {
public:
    // ActiveTransfersManager inner types declare
    // clang-format off
    class TransferTracker;
    // clang-format on

    // ActiveTransfersManager inner types define
    class TransferTracker {

    public:
        // prevent constructor by default
        TransferTracker& operator=(TransferTracker const&) = delete;
        TransferTracker(TransferTracker const&)            = delete;
        TransferTracker()                                  = delete;

    public:
        /**
         * @symbol ?onAckReceived\@TransferTracker\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAAX_K\@Z
         */
        MCAPI void onAckReceived(unsigned __int64); // NOLINT
        /**
         * @symbol ??1TransferTracker\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAA\@XZ
         */
        MCAPI ~TransferTracker(); // NOLINT
    };

public:
    // prevent constructor by default
    ActiveTransfersManager& operator=(ActiveTransfersManager const&) = delete;
    ActiveTransfersManager(ActiveTransfersManager const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTBLOBCACHE_SERVER_ACTIVETRANSFERSMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActiveTransfersManager(); // NOLINT
#endif
    /**
     * @symbol ??0ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAA\@XZ
     */
    MCAPI ActiveTransfersManager(); // NOLINT
    /**
     * @symbol ?collectTrackingData\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEBAXXZ
     */
    MCAPI void collectTrackingData() const; // NOLINT
    /**
     * @symbol
     * ?dropBlobFor\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAA?AV?$shared_ptr\@VBlob\@Server\@ClientBlobCache\@\@\@std\@\@AEBVNetworkIdentifier\@\@_K\@Z
     */
    MCAPI class std::shared_ptr<class ClientBlobCache::Server::Blob>
    dropBlobFor(class NetworkIdentifier const&, unsigned __int64); // NOLINT
    /**
     * @symbol ?enableCacheFor\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void enableCacheFor(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?isCacheEnabledFor\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEBA_NAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI bool isCacheEnabledFor(class NetworkIdentifier const&) const; // NOLINT
    /**
     * @symbol ?onPeerDisconnected\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void onPeerDisconnected(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol
     * ?startTransfer\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEBA?AVTransferBuilder\@23\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class ClientBlobCache::Server::TransferBuilder startTransfer(class NetworkIdentifier const&) const; // NOLINT
    /**
     * @symbol
     * ?tryStartTransfer\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEBA?AVTransferBuilder\@23\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class ClientBlobCache::Server::TransferBuilder
    tryStartTransfer(class NetworkIdentifier const&) const; // NOLINT
    /**
     * @symbol
     * ?updateNetworkConditions\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAAXAEAVNetworkSystem\@\@\@Z
     */
    MCAPI void updateNetworkConditions(class NetworkSystem&); // NOLINT

    // private:
    /**
     * @symbol
     * ?rememberBlob\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@AEAA?AV?$shared_ptr\@VBlob\@Server\@ClientBlobCache\@\@\@std\@\@_KAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@5\@_N\@Z
     */
    MCAPI class std::shared_ptr<class ClientBlobCache::Server::Blob>
    rememberBlob(unsigned __int64, std::string&, bool); // NOLINT

private:
};

}; // namespace ClientBlobCache::Server
