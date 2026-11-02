#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class MarketplacePassUpsellScreenController : public ::MainMenuScreenController {
public:
    // prevent constructor by default
    MarketplacePassUpsellScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassUpsellScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MarketplacePassUpsellScreenController(::std::shared_ptr<::MainMenuScreenModel> model);

    MCNAPI bool _isMarketplacePassTrialAvailableAndReady() const;

    MCNAPI bool _isPlanPickerTryFreeTreatmentEnabled() const;

    MCNAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
