#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ActiveDirectoryAuthenticationInterface.h"
#include "mc/client/gui/screens/controllers/AuthenticationUIState.h"
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryPopup;
class MinecraftScreenModel;
struct EduPurchaseDetails;
struct Purchase;
struct TransactionContext;
// clang-format on

class MinecraftActiveDirectoryAuthentication : public ::ActiveDirectoryAuthenticationInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MinecraftScreenModel>> mMinecraftScreenModel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftActiveDirectoryAuthentication() /*override*/ = default;

    virtual ::ActiveDirectoryAuthenticationState getAuthenticationState() const /*override*/;

    virtual ::std::optional<::ActiveDirectoryPopup> getPopup() const /*override*/;

    virtual ::std::string getTrialPopupId() const /*override*/;

    virtual ::AuthenticationUIState getSignInUIState() const /*override*/;

    virtual bool shouldShowPurchaseDialog() const /*override*/;

    virtual bool shouldAllowExitGame() const /*override*/;

    virtual bool shouldShowTrialPurchaseLink() const /*override*/;

    virtual ::AuthenticationUIState initializeActiveDirectorySignIn(bool displaySignIn) /*override*/;

    virtual void setActiveDirectoryAuthenticationOfferPurchase() /*override*/;

    virtual bool purchaseEduLicense(::std::unique_ptr<::TransactionContext> context) /*override*/;

    virtual bool getUnfulfilledEduPurchase(::EduPurchaseDetails& details) const /*override*/;

    virtual bool fulfillPriorEduPurchase(
        ::std::weak_ptr<::Purchase>             purchase,
        ::std::unique_ptr<::TransactionContext> context
    ) /*override*/;

    virtual ::AuthenticationUIState doSignIn(::AuthenticationUIState currentState) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ActiveDirectoryAuthenticationState $getAuthenticationState() const;

    MCAPI ::std::optional<::ActiveDirectoryPopup> $getPopup() const;

    MCAPI ::std::string $getTrialPopupId() const;

    MCAPI ::AuthenticationUIState $getSignInUIState() const;

    MCAPI bool $shouldShowPurchaseDialog() const;

    MCFOLD bool $shouldAllowExitGame() const;

    MCFOLD bool $shouldShowTrialPurchaseLink() const;

    MCAPI ::AuthenticationUIState $initializeActiveDirectorySignIn(bool displaySignIn);

    MCAPI void $setActiveDirectoryAuthenticationOfferPurchase();

    MCAPI bool $purchaseEduLicense(::std::unique_ptr<::TransactionContext> context);

    MCAPI bool $getUnfulfilledEduPurchase(::EduPurchaseDetails& details) const;

    MCAPI bool
    $fulfillPriorEduPurchase(::std::weak_ptr<::Purchase> purchase, ::std::unique_ptr<::TransactionContext> context);

    MCAPI ::AuthenticationUIState $doSignIn(::AuthenticationUIState currentState);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
