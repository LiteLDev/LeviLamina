#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
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
namespace Safety { class SafetyConfigService; }
namespace Social { class User; }
// clang-format on

namespace OreUI {

class UserAccountFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::UserAccountFacet> {
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
    ::ll::TypedStorage<1, 1, bool>                                                 mIsMarketplaceDisabled;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mCurrentXuid;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mCurrentPlatformId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>>            mMainMenuScreenModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::User>>                   mUser;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Safety::SafetyConfigService>> mSafetyConfigService;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>>               mUnlinkAccountTask;
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
    virtual ~UserAccountFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UserAccountFacet(
        ::std::shared_ptr<::MainMenuScreenModel>                  model,
        ::std::shared_ptr<::Social::User>                         user,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>      entitlementManager,
        ::Bedrock::NonOwnerPointer<::Safety::SafetyConfigService> safetyConfigService
    );

    MCNAPI bool _isMarketplacePassSubscriptionActive() const;

    MCNAPI bool _isRealmsPlusSubscriptionActive() const;

    MCNAPI void _onEntitlementsInventoryRefreshed();

    MCNAPI void clearAccountUnlinkState();

    MCNAPI ::OreUI::FacetTaskState getAccountUnlinkState();

    MCNAPI ::std::string const& getBanExpiration() const;

    MCNAPI ::std::string const& getBanReason() const;

    MCNAPI ::std::string const& getCurrentPlatformId() const;

    MCNAPI ::std::string const& getCurrentXuid() const;

    MCNAPI ::std::string getMarketplaceDisabledReason() const;

    MCNAPI ::std::optional<::Social::UserPlatformConnectionResult> const& getSignInToPlatformNetworkResult() const;

    MCNAPI ::OreUI::FacetTaskState getSignInToPlatformNetworkState();

    MCNAPI ::OreUI::UserPermissionsFEWrapper const& getUserPermissions() const;

    MCNAPI bool hasPremiumNetworkAccess() const;

    MCNAPI bool hasValidCrossPlatformSkin() const;

    MCNAPI bool isBanned() const;

    MCNAPI bool isLoggedInWithMicrosoftAccount() const;

    MCNAPI bool isMarketplaceDisabled() const;

    MCNAPI bool isMarketplacePassSubscriptionActive() const;

    MCNAPI bool isRealmsPlusSubscriptionActive() const;

    MCNAPI bool isSignInInProgress() const;

    MCNAPI bool isSignedInPlatformNetwork() const;

    MCNAPI void resetSignInToPlatformNetwork();

    MCNAPI void showPremiumNetworkUpsellModal();

    MCNAPI void signInToPlatformNetwork(bool isUserInitiated);

    MCNAPI void signOutOfMicrosoftAccount();

    MCNAPI void unlinkMicrosoftAccount();

    MCNAPI void updateMultiplayerPrivilegeUsingSystemModal();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>                  model,
        ::std::shared_ptr<::Social::User>                         user,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>      entitlementManager,
        ::Bedrock::NonOwnerPointer<::Safety::SafetyConfigService> safetyConfigService
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
