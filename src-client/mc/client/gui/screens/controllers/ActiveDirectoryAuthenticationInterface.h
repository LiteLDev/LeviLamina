#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/AuthenticationUIState.h"
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryPopup;
struct EduPurchaseDetails;
struct Purchase;
struct TransactionContext;
// clang-format on

class ActiveDirectoryAuthenticationInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveDirectoryAuthenticationInterface() = default;

    virtual ::ActiveDirectoryAuthenticationState getAuthenticationState() const = 0;

    virtual ::std::optional<::ActiveDirectoryPopup> getPopup() const = 0;

    virtual ::std::string getTrialPopupId() const = 0;

    virtual ::AuthenticationUIState getSignInUIState() const = 0;

    virtual bool shouldShowPurchaseDialog() const = 0;

    virtual bool shouldAllowExitGame() const = 0;

    virtual bool shouldShowTrialPurchaseLink() const = 0;

    virtual ::AuthenticationUIState initializeActiveDirectorySignIn(bool) = 0;

    virtual void setActiveDirectoryAuthenticationOfferPurchase() = 0;

    virtual bool purchaseEduLicense(::std::unique_ptr<::TransactionContext>) = 0;

    virtual bool getUnfulfilledEduPurchase(::EduPurchaseDetails&) const = 0;

    virtual bool fulfillPriorEduPurchase(::std::weak_ptr<::Purchase>, ::std::unique_ptr<::TransactionContext>) = 0;

    virtual ::AuthenticationUIState doSignIn(::AuthenticationUIState) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
