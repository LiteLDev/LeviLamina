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
class TransactionContext;
struct EduPurchaseDetails;
struct Purchase;
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
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _isIOS() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ActiveDirectoryAuthenticationState $getAuthenticationState() const;

    MCNAPI ::std::optional<::ActiveDirectoryPopup> $getPopup() const;

    MCNAPI ::std::string $getTrialPopupId() const;

    MCNAPI ::AuthenticationUIState $getSignInUIState() const;

    MCNAPI bool $shouldShowPurchaseDialog() const;

    MCNAPI bool $shouldAllowExitGame() const;

    MCNAPI bool $shouldShowTrialPurchaseLink() const;

    MCNAPI ::AuthenticationUIState $initializeActiveDirectorySignIn(bool displaySignIn);

    MCNAPI void $setActiveDirectoryAuthenticationOfferPurchase();

    MCNAPI bool $purchaseEduLicense(::std::unique_ptr<::TransactionContext> context);

    MCNAPI bool $getUnfulfilledEduPurchase(::EduPurchaseDetails& details) const;

    MCNAPI bool
    $fulfillPriorEduPurchase(::std::weak_ptr<::Purchase> purchase, ::std::unique_ptr<::TransactionContext> context);

    MCNAPI ::AuthenticationUIState $doSignIn(::AuthenticationUIState currentState);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
