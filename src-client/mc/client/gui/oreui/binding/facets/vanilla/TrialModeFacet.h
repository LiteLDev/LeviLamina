#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/PurchaseGameError.h"
#include "mc/client/store/iap/TrialUpgradePurchaseTier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class TrialManager;
// clang-format on

namespace OreUI {

class TrialModeFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::TrialModeFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::TrialManager>> mTrialManager;
    ::ll::TypedStorage<4, 8, ::std::optional<::OreUI::PurchaseGameError>>    mPurchaseGameError;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialModeFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TrialModeFacet(::Bedrock::NotNullNonOwnerPtr<::TrialManager> trialManager);

    MCNAPI ::std::optional<::OreUI::PurchaseGameError> const& getPurchaseGameError() const;

    MCNAPI void purchaseGame(::TrialUpgradePurchaseTier tier);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::TrialManager> trialManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
