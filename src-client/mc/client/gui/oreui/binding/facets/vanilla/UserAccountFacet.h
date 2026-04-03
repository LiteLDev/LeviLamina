#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/UserPermissions.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/UserPermissionsFEWrapper.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GenericEntitlementChangeListener;
class IEntitlementManager;
class MainMenuScreenModel;
class PlatformMultiplayerRestrictions;
namespace Social { class User; }
// clang-format on

namespace OreUI {

class UserAccountFacet : public ::OreUI::FacetBase<::OreUI::UserAccountFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                 mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsTrialAccount;
    ::ll::TypedStorage<1, 1, bool>                                                 mHasPremiumNetworkAccess;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsSignInInProgress;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsLoggedInWithMicrosoftAccount;
    ::ll::TypedStorage<1, 1, bool>                                                 mCanLogInWithMicrosoftAccount;
    ::ll::TypedStorage<1, 1, bool>                                                 mHasValidCrossPlatformSkin;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsBanned;
    ::ll::TypedStorage<4, 12, ::OreUI::UserPermissions>                            mUserPermissions;
    ::ll::TypedStorage<8, 96, ::OreUI::UserPermissionsFEWrapper>                   mUserPermissionsFEWrapper;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mBanReason;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mBanExpiration;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsSignedInPlatformNetwork;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsRealmsPlusSubscriptionActive;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsMarketplacePassSubscriptionActive;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mCurrentXuid;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mCurrentPlatformId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>>            mMainMenuScreenModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::User>>                   mUser;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>>         mUnlinkAccountTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::Social::UserPlatformConnectionResult>>
                                                                                     mSignInToPlatformNetworkTask;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                          mTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>  mEntitlementManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GenericEntitlementChangeListener>> mEntitlementChangeListener;
    // NOLINTEND

public:
    // prevent constructor by default
    UserAccountFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UserAccountFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UserAccountFacet(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::std::shared_ptr<::Social::User>                    user,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager
    );

    MCAPI bool _isMarketplacePassSubscriptionActive() const;

    MCAPI bool _isRealmsPlusSubscriptionActive() const;

    MCAPI void _onEntitlementsInventoryRefreshed();

    MCAPI bool _updatePermissions();

    MCAPI void clearAccountUnlinkState();

    MCAPI ::OreUI::FacetTaskState getAccountUnlinkState();

    MCFOLD ::std::string const& getBanExpiration() const;

    MCFOLD ::std::string const& getBanReason() const;

    MCFOLD ::std::string const& getCurrentPlatformId() const;

    MCFOLD ::std::string const& getCurrentXuid() const;

    MCAPI ::std::optional<::Social::UserPlatformConnectionResult> const& getSignInToPlatformNetworkResult() const;

    MCAPI ::OreUI::FacetTaskState getSignInToPlatformNetworkState();

    MCFOLD ::OreUI::UserPermissionsFEWrapper const& getUserPermissions() const;

    MCFOLD bool hasPremiumNetworkAccess() const;

    MCAPI bool hasValidCrossPlatformSkin() const;

    MCAPI bool isBanned() const;

    MCFOLD bool isLoggedInWithMicrosoftAccount() const;

    MCAPI bool isMarketplacePassSubscriptionActive() const;

    MCAPI bool isRealmsPlusSubscriptionActive() const;

    MCAPI bool isSignInInProgress() const;

    MCFOLD bool isSignedInPlatformNetwork() const;

    MCAPI void manageMicrosoftAccount();

    MCAPI void resetSignInToPlatformNetwork();

    MCAPI void showPremiumNetworkUpsellModal();

    MCAPI void signInToPlatformNetwork(bool isUserInitiated);

    MCAPI void signOutOfMicrosoftAccount();

    MCAPI void unlinkMicrosoftAccount();

    MCAPI void updateMultiplayerPrivilegeUsingSystemModal();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::std::shared_ptr<::Social::User>                    user,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
