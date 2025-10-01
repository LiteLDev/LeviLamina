#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
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
        ::ll::UntypedStorage<8, 8>   mUnkc08afa;
        ::ll::UntypedStorage<8, 176> mUnk5f7bcd;
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
        MCNAPI void onAckReceived(uint64 acked);
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
    ActiveTransfersManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActiveTransfersManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ClientBlobCache::Server::Blob> dropBlobFor(::NetworkIdentifier const& client, uint64 id);

    MCAPI bool isCacheEnabledFor(::NetworkIdentifier const& client) const;

    MCAPI ::std::shared_ptr<::ClientBlobCache::Server::Blob>
    rememberBlob(uint64 id, ::std::string& data, bool isChunkInTickRange);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
