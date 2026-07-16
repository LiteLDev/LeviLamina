#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/controllers/PurchaseEnabledScreenController.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/client/store/sidebar/Type.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CatalogCollection;
class IEntitlementManager;
class MainMenuScreenModel;
namespace Json { class Value; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetailsGroup; }
namespace SDL { struct ScreenLayoutQuery; }
namespace SDL { struct SubscriptionInfo; }
namespace sidebar { class NavigationModel; }
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
    virtual ~MarketplacePassPDPScreenController() /*override*/ = default;

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
