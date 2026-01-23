#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/NetworkIdentifier.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfer; }
namespace ClientBlobCache::Server { class Blob; }
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
        ::ll::TypedStorage<8, 8, ::ClientBlobCache::Server::ActiveTransfersManager&>        mCache;
        ::ll::TypedStorage<8, 176, ::NetworkIdentifier const>                               mOwner;
        ::ll::TypedStorage<8, 24, ::std::vector<::ClientBlobCache::Server::ActiveTransfer>> mTransfers;
        ::ll::TypedStorage<4, 4, uint>                                                      mMaxConcurrentTransfers;
        // NOLINTEND

    public:
        // prevent constructor by default
        TransferTracker& operator=(TransferTracker const&);
        TransferTracker(TransferTracker const&);
        TransferTracker();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void onAckReceived(uint64 acked);
        // NOLINTEND
    };

    using CacheMap = ::std::map<uint64, ::std::weak_ptr<::ClientBlobCache::Server::Blob>>;

    using CacheMapIterator = ::std::_Tree_iterator<::std::_Tree_val<
        ::std::_Tree_simple_types<::std::pair<uint64 const, ::std::weak_ptr<::ClientBlobCache::Server::Blob>>>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::NetworkIdentifier,
            ::std::unique_ptr<::ClientBlobCache::Server::ActiveTransfersManager::TransferTracker>>>
                                                                                                    mTransferTrackerMap;
    ::ll::TypedStorage<8, 16, ::std::map<uint64, ::std::weak_ptr<::ClientBlobCache::Server::Blob>>> mSentBlobs;
    ::ll::TypedStorage<8, 8, uint64>                                                                mCacheSizeBytes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveTransfersManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ClientBlobCache::Server::Blob> dropBlobFor(::NetworkIdentifier const& client, uint64 id);

    MCAPI void enableCacheFor(::NetworkIdentifier const& client);

    MCAPI bool isCacheEnabledFor(::NetworkIdentifier const& client) const;

    MCAPI ::std::shared_ptr<::ClientBlobCache::Server::Blob>
    rememberBlob(uint64 id, ::std::string& data, bool isChunkInTickRange);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
