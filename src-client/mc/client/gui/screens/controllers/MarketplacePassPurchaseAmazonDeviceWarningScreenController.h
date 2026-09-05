#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class MarketplacePassPurchaseAmazonDeviceWarningScreenController : public ::MainMenuScreenController {
public:
    // prevent constructor by default
    MarketplacePassPurchaseAmazonDeviceWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassPurchaseAmazonDeviceWarningScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MarketplacePassPurchaseAmazonDeviceWarningScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
