#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBLOBCACHE_SERVER_ACTIVETRANSFERSMANAGER_TRANSFERTRACKER
    public:
        TransferTracker& operator=(TransferTracker const&) = delete;
        TransferTracker(TransferTracker const&)            = delete;
        TransferTracker()                                  = delete;
#endif

    public:
        /**
         * @symbol ?onAckReceived\@TransferTracker\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAAX_K\@Z
         */
        MCAPI void onAckReceived(unsigned __int64);
        /**
         * @symbol ??1TransferTracker\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAA\@XZ
         */
        MCAPI ~TransferTracker();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBLOBCACHE_SERVER_ACTIVETRANSFERSMANAGER
public:
    ActiveTransfersManager& operator=(ActiveTransfersManager const&) = delete;
    ActiveTransfersManager(ActiveTransfersManager const&)            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTBLOBCACHE_SERVER_ACTIVETRANSFERSMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActiveTransfersManager();
#endif
    /**
     * @symbol ??0ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAA\@XZ
     */
    MCAPI ActiveTransfersManager();
    /**
     * @symbol ?collectTrackingData\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEBAXXZ
     */
    MCAPI void collectTrackingData() const;
    /**
     * @symbol
     * ?dropBlobFor\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAA?AV?$shared_ptr\@VBlob\@Server\@ClientBlobCache\@\@\@std\@\@AEBVNetworkIdentifier\@\@_K\@Z
     */
    MCAPI class std::shared_ptr<class ClientBlobCache::Server::Blob>
    dropBlobFor(class NetworkIdentifier const&, unsigned __int64);
    /**
     * @symbol ?enableCacheFor\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void enableCacheFor(class NetworkIdentifier const&);
    /**
     * @symbol ?isCacheEnabledFor\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEBA_NAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI bool isCacheEnabledFor(class NetworkIdentifier const&) const;
    /**
     * @symbol ?onPeerDisconnected\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void onPeerDisconnected(class NetworkIdentifier const&);
    /**
     * @symbol
     * ?startTransfer\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEBA?AVTransferBuilder\@23\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class ClientBlobCache::Server::TransferBuilder startTransfer(class NetworkIdentifier const&) const;
    /**
     * @symbol
     * ?tryStartTransfer\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEBA?AVTransferBuilder\@23\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class ClientBlobCache::Server::TransferBuilder tryStartTransfer(class NetworkIdentifier const&) const;
    /**
     * @symbol
     * ?updateNetworkConditions\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@QEAAXAEAVNetworkSystem\@\@\@Z
     */
    MCAPI void updateNetworkConditions(class NetworkSystem&);

    // private:
    /**
     * @symbol
     * ?rememberBlob\@ActiveTransfersManager\@Server\@ClientBlobCache\@\@AEAA?AV?$shared_ptr\@VBlob\@Server\@ClientBlobCache\@\@\@std\@\@_KAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@5\@_N\@Z
     */
    MCAPI class std::shared_ptr<class ClientBlobCache::Server::Blob> rememberBlob(unsigned __int64, std::string&, bool);

private:
};

}; // namespace ClientBlobCache::Server
