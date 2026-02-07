#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/controllers/PurchaseEnabledScreenController.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/client/store/sidebar/Type.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CatalogCollection;
class MainMenuScreenModel;
struct IEntitlementManager;
namespace Json { class Value; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetailsGroup; }
namespace SDL { struct ScreenLayoutQuery; }
namespace SDL { struct SubscriptionInfo; }
namespace sidebar { struct NavigationModel; }
// clang-format on

class MarketplacePassPDPScreenController : public ::PurchaseEnabledScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MarketplacePassTabIndex>                             mInitialTab;
    ::ll::TypedStorage<4, 4, ::MarketplacePassTabIndex>                             mCurrentTab;
    ::ll::TypedStorage<4, 4, ::StoreNavigationOrigin>                               mOrigin;
    ::ll::TypedStorage<1, 1, bool>                                                  mInitialTabSelected;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mCurrentFocus;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                         mToggleSectionNames;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CatalogCollection>>               mPopularPacksCollection;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SDL::ScreenLayoutQuery>>          mMarketplacePassLayoutQuery;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>> mEntitlementManager;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mPacksLabel;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mMarketplacePassPrice;
    ::ll::TypedStorage<1, 1, bool>                                                  mCheckedTOS;
    ::ll::TypedStorage<1, 1, bool>                                                  mDirty;
    ::ll::TypedStorage<8, 8, ::SDL::SubscriptionInfo const&>                        mSubscriptionInfo;
    ::ll::TypedStorage<4, 4, ::TransactionStatus>                                   mCurrentTransactionStatus;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::sidebar::NavigationModel>>        mNavigationModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RealmsScreenUtils::RealmsWorldLoadingDetailsGroup>>
        mRealmsWorldLoadingDetailsGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplacePassPDPScreenController& operator=(MarketplacePassPDPScreenController const&);
    MarketplacePassPDPScreenController(MarketplacePassPDPScreenController const&);
    MarketplacePassPDPScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassPDPScreenController() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onCreation() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onEntered() /*override*/;

    virtual void onLeave() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::sidebar::navigationLayout::Type getSidebarLayoutType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MarketplacePassPDPScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        ::MarketplacePassTabIndex                            marketplacePassTabIndex,
        ::StoreNavigationOrigin                              origin,
        ::sidebar::navigationLayout::Type                    sidebarLayoutType
    );

    MCAPI ::ui::ViewRequest _changeTabTo(::MarketplacePassTabIndex tabIndex);

    MCAPI ::std::string const _getMarketplacePassOfferPrice();

    MCAPI ::std::string const _getMarketplacePassOfferString(::std::string const& locKey);

    MCAPI void _getMarketplacePassVisualStyle();

    MCFOLD bool _isCsbSubscribed() const;

    MCAPI bool _isRealmsPlusSubscriptionActive() const;

    MCFOLD void _openPurchaseInProgress();

    MCAPI void _registerBindings();

    MCAPI void _registerCollection();

    MCAPI void _registerContentSectionBindings();

    MCAPI void _registerEvents();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        ::MarketplacePassTabIndex                            marketplacePassTabIndex,
        ::StoreNavigationOrigin                              origin,
        ::sidebar::navigationLayout::Type                    sidebarLayoutType
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
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onCreation();

    MCAPI void $onOpen();

    MCAPI void $onEntered();

    MCFOLD void $onLeave();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI ::sidebar::navigationLayout::Type $getSidebarLayoutType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftable();
    // NOLINTEND
};
