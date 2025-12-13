#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

struct ClientBlobCacheTrackingData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ClientBlobCacheTrackingData inner types declare
    // clang-format off
    struct ActiveTransfersData;
    // clang-format on

    // ClientBlobCacheTrackingData inner types define
    struct ActiveTransfersData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk38b07f;
        ::ll::UntypedStorage<8, 8> mUnk472690;
        ::ll::UntypedStorage<8, 8> mUnkf1fa49;
        ::ll::UntypedStorage<8, 8> mUnkd9c84f;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActiveTransfersData& operator=(ActiveTransfersData const&);
        ActiveTransfersData(ActiveTransfersData const&);
        ActiveTransfersData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6ee1a9;
    ::ll::UntypedStorage<8, 24> mUnk102d0f;
    ::ll::UntypedStorage<8, 24> mUnke41abf;
    ::ll::UntypedStorage<8, 24> mUnk62113c;
    ::ll::UntypedStorage<8, 24> mUnkae67e7;
    ::ll::UntypedStorage<8, 8>  mUnkfe5227;
    ::ll::UntypedStorage<8, 8>  mUnk35da5f;
    ::ll::UntypedStorage<8, 8>  mUnke8a897;
    ::ll::UntypedStorage<8, 8>  mUnk27a0d0;
    ::ll::UntypedStorage<8, 8>  mUnk56b9ad;
    ::ll::UntypedStorage<8, 8>  mUnke7db40;
    ::ll::UntypedStorage<1, 1>  mUnkb9bb34;
    ::ll::UntypedStorage<8, 8>  mUnk71ec37;
    ::ll::UntypedStorage<8, 8>  mUnkce78ed;
    ::ll::UntypedStorage<8, 16> mUnk1289fc;
    ::ll::UntypedStorage<1, 1>  mUnk6bc893;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBlobCacheTrackingData& operator=(ClientBlobCacheTrackingData const&);
    ClientBlobCacheTrackingData(ClientBlobCacheTrackingData const&);
    ClientBlobCacheTrackingData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientBlobCacheTrackingData() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
