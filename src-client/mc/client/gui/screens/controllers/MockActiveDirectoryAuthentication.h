#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/client/gui/screens/controllers/ActiveDirectoryAuthenticationInterface.h"
#include "mc/client/gui/screens/controllers/AuthenticationUIState.h"
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryPopup;
struct EduPurchaseDetails;
struct Purchase;
struct TransactionContext;
// clang-format on

class MockActiveDirectoryAuthentication : public ::ActiveDirectoryAuthenticationInterface {
public:
    // MockActiveDirectoryAuthentication inner types define
    enum class UIState : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ActiveDirectoryAuthenticationState>                       mState;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::optional<::ActiveDirectoryPopup>>> mPopup;
    ::ll::TypedStorage<4, 4, ::AuthenticationUIState>                                    mUIState;
    ::ll::TypedStorage<1, 1, bool>                                                       mShowLoginOnOpen;
    ::ll::TypedStorage<1, 1, bool>                                                       mAllowExitGame;
    ::ll::TypedStorage<1, 1, bool>                                                       mShouldShowTrialPurchaseLink;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsIOS;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsFirstTimeLogin;
    ::ll::TypedStorage<1, 1, ::edu::Role>                                                mRole;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MockActiveDirectoryAuthentication() /*override*/ = default;

    virtual ::ActiveDirectoryAuthenticationState getAuthenticationState() const /*override*/;

    virtual ::std::optional<::ActiveDirectoryPopup> getPopup() const /*override*/;

    virtual ::std::string getTrialPopupId() const /*override*/;

    virtual ::AuthenticationUIState getSignInUIState() const /*override*/;

    virtual bool shouldShowPurchaseDialog() const /*override*/;

    virtual bool shouldAllowExitGame() const /*override*/;

    virtual bool shouldShowTrialPurchaseLink() const /*override*/;

    virtual ::AuthenticationUIState initializeActiveDirectorySignIn(bool) /*override*/;

    virtual void setActiveDirectoryAuthenticationOfferPurchase() /*override*/;

    virtual bool purchaseEduLicense(::std::unique_ptr<::TransactionContext>) /*override*/;

    virtual bool getUnfulfilledEduPurchase(::EduPurchaseDetails&) const /*override*/;

    virtual bool
        fulfillPriorEduPurchase(::std::weak_ptr<::Purchase>, ::std::unique_ptr<::TransactionContext>) /*override*/;

    virtual ::AuthenticationUIState doSignIn(::AuthenticationUIState) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
