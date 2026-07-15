#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/store/iap/RealmsOfferPeriod.h"
#include "mc/client/store/iap/RealmsOfferTier.h"
#include "mc/client/store/iap/RealmsOfferType.h"
#include "mc/client/store/iap/RealmsPurchaseIntent.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class MainMenuScreenModel;
class RealmsCreateParams;
namespace Json { class Value; }
// clang-format on

class RealmsCreateScreenController : public ::MainMenuScreenController {
public:
    // RealmsCreateScreenController inner types define
    enum class State : int {
        Initial    = 0,
        Processing = 1,
        Fail       = 2,
        Success    = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                  mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                  mCheckedTOS;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsValidRealmName;
    ::ll::TypedStorage<1, 1, bool>                                                  mCheckUnfulfilledPurchase;
    ::ll::TypedStorage<1, 1, bool>                                                  mOverridePurchaseIntent;
    ::ll::TypedStorage<1, 1, bool>                                                  mPurchaseInProgress;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mRealmsPurchaseCorrelationId;
    ::ll::TypedStorage<1, 1, bool const>                                            mIsSubController;
    ::ll::TypedStorage<4, 4, ::RealmsPurchaseIntent const>                          mPurchaseIntent;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mWorldName;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mSubscriptionId;
    ::ll::TypedStorage<4, 4, ::RealmsOfferType const>                               mOfferType;
    ::ll::TypedStorage<4, 4, ::RealmsOfferPeriod>                                   mOfferPeriod;
    ::ll::TypedStorage<4, 4, ::RealmsOfferTier>                                     mOfferTier;
    ::ll::TypedStorage<1, 1, bool>                                                  mPurchaseDisabledDueToStoreVersion;
    ::ll::TypedStorage<1, 1, bool const>                                            mTrialAvailable;
    ::ll::TypedStorage<1, 1, bool const>                                            mHasClub;
    ::ll::TypedStorage<1, 1, bool const>                                            mIsFromRealmsPDP;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                              mActionAfterCreate;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>> mEntitlementManager;
    ::ll::TypedStorage<8, 656, ::Realms::World>                                     mNewWorld;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Realms::World&)>>              mRealmCreatedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsCreateScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsCreateScreenController() /*override*/ = default;

    virtual void onCreation() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onLeave() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsCreateScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        ::RealmsCreateParams const&                          createParams,
        bool                                                 isSubController,
        ::ScreenExitBehavior                                 exitBehavior
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        ::RealmsCreateParams const&                          createParams,
        bool                                                 isSubController,
        ::ScreenExitBehavior                                 exitBehavior
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
