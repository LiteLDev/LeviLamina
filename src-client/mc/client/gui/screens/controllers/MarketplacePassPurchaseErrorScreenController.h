#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/deps/core/http/Status.h"

class MarketplacePassPurchaseErrorScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TransactionStatus>      mTransactionStatus;
    ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status> mResponseStatus;
    ::ll::TypedStorage<8, 32, ::std::string>           mCorrelationID;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassPurchaseErrorScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
