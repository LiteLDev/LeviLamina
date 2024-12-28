#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class ServerNetworkSystem;
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnkc08afa;
        ::ll::UntypedStorage<8, 160> mUnk5f7bcd;
        ::ll::UntypedStorage<8, 24>  mUnkc52da5;
        ::ll::UntypedStorage<4, 4>   mUnk38be62;
        // NOLINTEND

    public:
        // prevent constructor by default
        TransferTracker& operator=(TransferTracker const&);
        TransferTracker(TransferTracker const&);
        TransferTracker();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~TransferTracker();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkd2bbe6;
    ::ll::UntypedStorage<8, 16> mUnk63af4d;
    ::ll::UntypedStorage<8, 8>  mUnk4953ed;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveTransfersManager& operator=(ActiveTransfersManager const&);
    ActiveTransfersManager(ActiveTransfersManager const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActiveTransfersManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActiveTransfersManager();

    MCAPI void collectTrackingData() const;

    MCAPI ::std::shared_ptr<::ClientBlobCache::Server::Blob> dropBlobFor(::NetworkIdentifier const& client, uint64 id);

    MCAPI void enableCacheFor(::NetworkIdentifier const& client);

    MCAPI ::ClientBlobCache::Server::ActiveTransfersManager::TransferTracker*
    getTrackerFor(::NetworkIdentifier const& client) const;

    MCAPI bool isCacheEnabledFor(::NetworkIdentifier const& client) const;

    MCAPI void onPeerDisconnected(::NetworkIdentifier const& client);

    MCAPI ::std::shared_ptr<::ClientBlobCache::Server::Blob>
    rememberBlob(uint64 id, ::std::string& data, bool isChunkInTickRange);

    MCAPI ::ClientBlobCache::Server::TransferBuilder startTransfer(::NetworkIdentifier const& client) const;

    MCAPI ::ClientBlobCache::Server::TransferBuilder tryStartTransfer(::NetworkIdentifier const& client) const;

    MCAPI void updateNetworkConditions(::ServerNetworkSystem& handler);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
