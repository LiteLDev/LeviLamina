#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/PurchasePath.h"

// auto generated forward declare list
// clang-format off
struct ProductSku;
// clang-format on

struct PurchaseInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd0a255;
    ::ll::UntypedStorage<8, 32> mUnk58cc32;
    ::ll::UntypedStorage<8, 32> mUnke5fea4;
    ::ll::UntypedStorage<8, 32> mUnk51e353;
    ::ll::UntypedStorage<4, 4>  mUnk959cb5;
    ::ll::UntypedStorage<1, 1>  mUnk628941;
    ::ll::UntypedStorage<1, 1>  mUnkc3821f;
    ::ll::UntypedStorage<1, 1>  mUnkd80a73;
    // NOLINTEND

public:
    // prevent constructor by default
    PurchaseInfo(PurchaseInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C PurchaseInfo();

    MCNAPI_C PurchaseInfo(
        ::ProductSku         productSku,
        ::std::string        platformPurchaseId,
        ::std::string        receipt,
        bool                 active,
        ::PurchasePath       path,
        bool                 renewal,
        ::std::string const& correlationId,
        bool                 passSubscription
    );

    MCNAPI_C ::PurchaseInfo& operator=(::PurchaseInfo const&);

    MCNAPI_C ~PurchaseInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(
        ::ProductSku         productSku,
        ::std::string        platformPurchaseId,
        ::std::string        receipt,
        bool                 active,
        ::PurchasePath       path,
        bool                 renewal,
        ::std::string const& correlationId,
        bool                 passSubscription
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
