#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/StoreOfferNavigationResult.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/controllers/SlotSelectedAction.h"
#include "mc/client/gui/screens/models/IMainMenuScreenModel.h"
#include "mc/client/gui/screens/models/InstantiationResult.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/network/NetworkFilter.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/store/iap/PurchasePath.h"
#include "mc/client/store/sidebar/Type.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/identity/IdentityType.h"
#include "mc/options/FeedbackType.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/DownloadError.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
class AnnouncementSurface;
class CatalogCollection;
class CloudSaveLevelInfo;
class DlcChecker;
class DlcId;
class DlcUIWrapper;
class EduServersScreenController;
class IContentAccessibilityProvider;
class IMinecraftEventing;
class IStoreCatalogItem;
class LegacyWorldConverter;
class LessonItem;
class LibraryCollection;
class LibraryCollectionConfig;
class LibraryItem;
class MainMenuScreenController;
class MinecoinCatalogModel;
class OfferCollectionComponent;
class PackManifest;
class PlatformOfferModel;
class PlatformOfferTransactionContext;
class PlayScreenModel;
class ProgressHandler;
class RealmsTransactionContext;
class ResourceLocation;
class ResourcePackFileUploadManager;
class SearchQuery;
class SkinPackCollectionModel;
class StoreCatalogItem;
class StoreCatalogRepository;
class StoreSearchQuery;
class TransactionContext;
class WorldFileDownloadManager;
class WorldFileUploadManager;
class WorldSeedCatalogModel;
class WorldTemplateManager;
struct EduLibraryCategory;
struct ExperienceJoinRequestInfo;
struct ExperiencePromotion;
struct LevelSummary;
struct LinksToStyle;
struct MinecraftScreenModelContext;
struct PackContentItem;
struct PackSettingsInfo;
struct PlatformOfferPurchaseDetails;
struct Purchase;
struct RealmsPurchaseDetails;
struct StoreDataDrivenScreenParams;
struct SubmitItemRatingResult;
struct WorldTemplateInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class Path; }
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Realms { class RealmsWorldContext; }
namespace Realms { struct World; }
namespace Realms::Stories { class FacetStateManager; }
namespace ResourcePackPathLifetimeHelpers { class ResourcePackPathCache; }
namespace Safety { struct TextScanResult; }
namespace Social { class User; }
namespace Social { struct EduDedicatedServerDetails; }
namespace mce { class UUID; }
// clang-format on

class MainMenuScreenModel : public ::MinecraftScreenModel, public ::IMainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                               mTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecoinCatalogModel>>                   mMinecoinCatalogModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorldSeedCatalogModel>>                  mWorldSeedCatalogModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::WorldFileDownloadManager>>              mFileDownloadManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                              mFileUploadTaskGroup;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>>> mPreviousUpload;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackPathLifetimeHelpers::ResourcePackPathCache>>
                                                                                     mResourcePackPathCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>> mWorldTemplateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::AnnouncementSurface>>     mLoginAnnouncementSurface;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::AnnouncementSurface>>     mMarketplaceAnnouncementSurface;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcChecker>>                        mDlcChecker;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LegacyWorldConverter>>             mLegacyWorldConverter;
    // NOLINTEND

public:
    // prevent constructor by default
    MainMenuScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MainMenuScreenModel() /*override*/;

    virtual void navigateToDlcProgressScreen(
        ::std::vector<::DlcId> const&     dlcIds,
        ::std::function<void(bool, bool)> callback,
        bool                              showCloseButton,
        bool                              processingUpdates,
        bool                              requireCancelToExit
    ) /*override*/;

    virtual ::std::string const& getLastPoppedScreenName() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() const /*override*/;

    virtual bool doesPlatformSupportRealms() const /*override*/;

    virtual bool isSelectedSkinInitialized() const /*override*/;

    virtual void repopulateWorldTemplates() /*override*/;

    virtual ::WorldTemplateInfo const* findWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs) const
        /*override*/;

    virtual bool isPackIdInRealmsPlus(::std::string const& packId) const /*override*/;

    virtual float getStoreNetworkFailureTimeout() const /*override*/;

    virtual bool isInGame() const /*override*/;

    virtual ::IMinecraftEventing& getMinecraftEventing() const;

    virtual bool isAdhocEnabled() const /*override*/;

    virtual bool isNetworkEnabled(::NetworkFilter withFilter) const /*override*/;

    virtual bool platformTTSExists() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MainMenuScreenModel(::MinecraftScreenModelContext context);

    MCNAPI ::std::string _pushPurchaseOfferScreen(::IStoreCatalogItem const& item, ::StoreNavigationOrigin origin);

    MCNAPI void _showAnnouncementIfAvailable(::Bedrock::NonOwnerPointer<::AnnouncementSurface> surface);

    MCNAPI bool canDisableRecipeUnlockingAsDefault() const;

    MCNAPI void cancelCreateRealmsWorld();

    MCNAPI bool checkStoreForAvailableUpdates() const;

    MCNAPI void clearAllUserCache();

    MCNAPI void clearLayoutCache();

    MCNAPI void clearScreenshotsCache();

    MCNAPI ::std::shared_ptr<::CatalogCollection>
    createCatalogCollection(::std::vector<::std::shared_ptr<::SearchQuery>> const& queries, int maxVisibleOffers);

    MCNAPI ::std::shared_ptr<::CatalogCollection>
    createCatalogCollection(::StoreSearchQuery const& query, int maxVisibleOffers);

    MCNAPI ::std::vector<::EduLibraryCategory> createLibraryCategoryPage(::std::vector<::std::string> const& pages);

    MCNAPI ::std::shared_ptr<::LibraryCollection>
    createLibraryCollection(::std::shared_ptr<::LibraryCollectionConfig> config);

    MCNAPI ::std::shared_ptr<::WorldFileDownloadManager> createLibraryWorldFileDownloadManager();

    MCNAPI ::std::shared_ptr<::ResourcePackFileUploadManager> createResourcePackFileUploadManager();

    MCNAPI ::std::shared_ptr<::WorldFileUploadManager> createWorldFileUploadManager();

    MCNAPI void dismissNewPlayerFlow();

    MCNAPI void fetchContentInRealmsPlus(::std::function<void()> callback);

    MCNAPI void fetchLibraryWorldSize(::std::shared_ptr<::LessonItem> lessonItem);

    MCNAPI void forcePersonaServiceSync() const;

    MCNAPI bool fulfillPriorPlatformOfferPurchase(
        ::std::weak_ptr<::Purchase>                          purchase,
        ::std::unique_ptr<::PlatformOfferTransactionContext> context
    );

    MCNAPI bool fulfillPriorRealmsPurchase(
        ::std::weak_ptr<::Purchase>                   purchase,
        ::std::unique_ptr<::RealmsTransactionContext> context
    );

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider const> getAccessibilityProvider() const;

    MCNAPI ::EduLibraryCategory* getLibraryCategory(::std::string const& name);

    MCNAPI ::MinecoinCatalogModel& getMinecoinCatalogModel();

    MCNAPI ::std::string_view getNewPlayerFlowTargetRoute() const;

    MCNAPI ::std::shared_ptr<::Social::User> getPrimaryUser() const;

    MCNAPI ::std::shared_ptr<::Realms::Stories::FacetStateManager> const getRealmsStoriesFacetStateManager() const;

    MCNAPI ::std::shared_ptr<::Realms::RealmsWorldContext> const getRealmsWorldContext() const;

    MCNAPI ::SkinPackCollectionModel& getSkinPackCollection();

    MCNAPI ::StoreCatalogItem& getStoreCatalogItemByProductId(::std::string const& productId);

    MCNAPI bool getStoreRequiresRestoreButton() const;

    MCNAPI bool getStoreShouldHideUpdateRow() const;

    MCNAPI bool getStoreSupportsSubscriptions() const;

    MCNAPI ::std::string getSunsettingText();

    MCNAPI bool getUnfulfilledPlatformOfferPurchase(::PlatformOfferPurchaseDetails& details);

    MCNAPI bool getUnfulfilledRealmsPurchase(::RealmsPurchaseDetails& details);

    MCNAPI int getUserCoinBalance() const;

    MCNAPI ::std::string getUserCoinBalanceAsString() const;

    MCNAPI ::WorldFileDownloadManager& getWorldFileDownloadManager();

    MCNAPI ::WorldSeedCatalogModel& getWorldSeedCatalogModel();

    MCNAPI bool hasDismissedNewPlayerFlow() const;

    MCNAPI bool hasSeenSonyTokensPopup() const;

    MCNAPI void instantiateTemplate(
        ::PackManifest const&                                         manifest,
        ::std::function<void(::LevelSummary*, ::InstantiationResult)> callback
    );

    MCNAPI bool isAbleToFetch(bool signInFailed) const;

    MCNAPI bool isAppStoreReady() const;

    MCNAPI bool isMarketplacePassTrialAvailable() const;

    MCNAPI bool isNewPlayerPathV3ABCTest() const;

    MCNAPI bool isPlatformServiceMultiplayerConnected() const;

    MCNAPI bool isRealmsCachedTrialAvailable() const;

    MCNAPI bool isServiceMultiplayerAvailableAndConnected(::Social::MultiplayerServiceIdentifier service) const;

    MCNAPI bool isSidebarNavigationLayoutActive(::sidebar::navigationLayout::Type layoutType) const;

    MCNAPI void joinExperienceWorld(::ExperienceJoinRequestInfo const& connectionData);

    MCNAPI void launchSunsettingUri();

    MCNAPI void navigateToApplyResourcePacksScreen(::std::function<void(::MinecraftScreenModel&)> applyPacks);

    MCNAPI void navigateToBundleWarningScreen(
        ::IStoreCatalogItem const&        catalogItem,
        ::OfferCollectionComponent const& bundle,
        ::std::function<void()>           onPurchaseCallback
    );

    MCNAPI void navigateToChooseRealmScreen(
        ::std::function<void(::Realms::World)> callback,
        ::SlotSelectedAction                   action,
        ::std::function<void()>                onCancelCallback
    );

    MCNAPI void navigateToCoinPurchaseScreen(
        ::std::string const&             coinPurchaseScreenPageId,
        int                              coinsNeeded,
        ::std::function<void(bool, int)> callback
    );

    MCNAPI void navigateToCreateWorldUpsellScreen(bool firstTimeShown, ::std::string const& additionalScreenInfo);

    MCNAPI void navigateToEduFetchProgressHandler(::std::shared_ptr<::PlayScreenModel> model);

    MCNAPI void navigateToEduFetchServersProgressHandler(
        ::Bedrock::NonOwnerPointer<::EduServersScreenController> eduServersScreenController
    );

    MCNAPI void navigateToEduLibraryRoot();

    MCNAPI void navigateToEduServerResolvingProgressHandler(
        ::Social::EduDedicatedServerDetails const& details,
        ::std::string const&                       passcode,
        ::std::shared_ptr<::PlayScreenModel>       model,
        ::brstd::move_only_function<void()>&       reopenPasscodeEntry
    );

    MCNAPI void navigateToEduServersScreen();

    MCNAPI void navigateToEduUploadProgressHandler(
        ::std::string const&                                        levelId,
        ::std::string const&                                        levelName,
        ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> eduCloudSaveSystem,
        ::std::optional<::CloudSaveLevelInfo>                       cloudSaveInfo
    );

    MCNAPI void navigateToFeaturedWorld();

    MCNAPI void navigateToFileDownloadScreenAsync(
        uint64                      estimatedDiskWriteSize,
        ::std::string const&        realmID,
        int                         slotIndex,
        ::std::string const&        realmName,
        ::std::string const&        realmVersion,
        ::std::string const&        realmVersionName,
        ::std::function<void(bool)> callback
    );

    MCNAPI void navigateToLibraryItemScreen(::std::shared_ptr<::LibraryItem> item);

    MCNAPI void navigateToLibraryItemScreen(::std::string itemId);

    MCNAPI void navigateToLibrarySearchScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string const&                   libraryTitle,
        ::std::string const&                   libraryIcon
    );

    MCNAPI void navigateToLibraryTagScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string const&                   libraryTitle,
        ::std::string const&                   libraryIcon,
        ::std::string const&                   libraryPageDescription
    );

    MCNAPI void navigateToLibraryWorldScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string const&                   libraryTitle,
        ::std::string const&                   libraryIcon,
        ::std::string const&                   libraryPageDescription,
        ::std::string const&                   categoryTitle
    );

    MCNAPI void navigateToLocalWorldPickerScreen(
        ::std::string const&                                  realmID,
        int                                                   slotIndex,
        ::std::function<void(::UploadState, ::Realms::World)> callback
    );

    MCNAPI void navigateToManifestValidationScreen(
        ::ResourceLocation const&                         resourceLocation,
        ::std::shared_ptr<::PackContentItem const> const& contentItem
    );

    MCNAPI void navigateToMarketplacePassPDPScreen(
        ::MarketplacePassTabIndex         tabIndex,
        ::sidebar::navigationLayout::Type sidebarLayoutType
    );

    MCNAPI void navigateToMarketplacePassPDPViewAllPacksScreen();

    MCNAPI void navigateToOreUIChooseRealmSubscriptionScreen();

    MCNAPI void navigateToOreUIRealmsCreatePreviewWithOnlyOneSubscriptionScreen();

    MCNAPI void navigateToPackSettingsScreen(::PackSettingsInfo packSettingsInfo);

    MCNAPI void navigateToPlayScreen(::PlayScreenDefaultTab tab);

    MCNAPI void navigateToPromotionAction(::ExperiencePromotion const& promotion);

    MCNAPI void navigateToPurchaseOfferScreen(::IStoreCatalogItem const& item, ::StoreNavigationOrigin origin);

    MCNAPI void
    navigateToPurchaseOfferScreen(::std::string const& productId, ::StoreNavigationOrigin origin, ::std::string const&);

    MCNAPI void navigateToPurchaseOfferScreen(
        ::mce::UUID const&                                  uuid,
        ::StoreNavigationOrigin                             origin,
        ::std::string const&                                contentType,
        ::std::function<void(::StoreOfferNavigationResult)> onNavigationComplete
    );

    MCNAPI void
    navigateToRealmsAllowListScreen(::Realms::World const& world, ::std::function<void()> followUpActionAfterCreation);

    MCNAPI bool navigateToRealmsOffers(::StoreDataDrivenScreenParams const& params);

    MCNAPI void navigateToRealmsPDPViewAllPacksScreen();

    MCNAPI void navigateToRealmsPlusPurchaseWarningScreen(::std::function<void()> callback);

    MCNAPI void navigateToRealmsWorldProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        ::std::function<void()>              onlineSafetyCancelledCallback
    );

    MCNAPI void navigateToRedeem5x5Screen();

    MCNAPI void navigateToStoreInventoryScreen();

    MCNAPI void navigateToStoreSearchScreen(::std::string const& searchText, ::std::string const& mPackTypeFilter);

    MCNAPI void navigateToStoreSearchScreen(
        ::LinksToStyle const& linksToStyle,
        ::std::string const&  searchText,
        ::std::string const&  packTypeFilter
    );

    MCNAPI void navigateToSubmitFeedbackScreen(::FeedbackType feedbackType, ::std::string const& identifier);

    MCNAPI void navigateToSunsettingScreen(::std::string title);

    MCNAPI void navigateToUGCViewerScreen(
        ::std::function<void(::std::string const&, ::std::string const&, ::Core::Path const&)> closeCallback
    );

    MCNAPI void navigateToUploadPackFileProgressScreen(
        ::std::string const&                                  realmID,
        ::Core::Path const&                                   path,
        int                                                   slotIndex,
        bool                                                  archiveNeeded,
        ::std::function<void(::UploadState, ::Realms::World)> uploadPackCallback
    );

    MCNAPI void
    navigateToWorldConversionCompleteScreen(::std::string const& levelId, ::std::function<void()> cancelCallback);

    MCNAPI ::std::unique_ptr<::DlcUIWrapper> newDlcUIWrapper(::MainMenuScreenController& controller);

    MCNAPI ::Bedrock::Threading::Async<::Safety::TextScanResult>
    performPlayerSafetyScanRequest(::std::string const& feedback);

    MCNAPI bool prepareAppStoreForPurchases(::std::function<void(bool)> callback);

    MCNAPI void
    purchaseMarketplacePass(::std::string const& productSku, ::std::unique_ptr<::TransactionContext>&& context);

    MCNAPI bool purchasePlatformOffer(
        ::PlatformOfferModel const&               platformOfferModel,
        ::std::unique_ptr<::TransactionContext>&& context,
        ::PurchasePath                            path
    );

    MCNAPI void quickPlay();

    MCNAPI void redeemRealmsCatalogOffer(::std::string const& productId, ::std::function<void(bool)> outerCallback);

    MCNAPI void refreshUserInventory() const;

    MCNAPI ::Bedrock::PubSub::Subscription
    registerPrimaryUserSignInSubscriber(::std::function<void(uint, ::Social::IdentityType)> listener);

    MCNAPI void setDeepLinkListenerMainMenuParameters(::std::function<void(::DownloadError const&)> onDownloadError);

    MCNAPI void setHasSeenSonyTokenPopup(bool newValue);

    MCNAPI void setStoreCatalogItemViewed(::IStoreCatalogItem const& item) const;

    MCNAPI void setStoreCatalogItemViewed(::std::string const& productId) const;

    MCNAPI void submitReviewFor(::std::string const& productId, int rating, ::std::function<void()> successCallback);

    MCNAPI ::Bedrock::Threading::Async<::SubmitItemRatingResult>
    submitReviewForEntitlementManager(::std::string const& productId, int rating);

    MCNAPI bool supportsFliteTTS() const;

    MCNAPI bool supportsXboxLiveAchievements() const;

    MCNAPI void uploadLocalWorldFile(
        ::std::string const&                                  realmID,
        ::std::string const&                                  worldID,
        int                                                   slotIndex,
        ::std::function<void(::UploadState, ::Realms::World)> callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftScreenModelContext context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $navigateToDlcProgressScreen(
        ::std::vector<::DlcId> const&     dlcIds,
        ::std::function<void(bool, bool)> callback,
        bool                              showCloseButton,
        bool                              processingUpdates,
        bool                              requireCancelToExit
    );

    MCNAPI ::std::string const& $getLastPoppedScreenName() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> $getStoreCatalogRepository() const;

    MCNAPI bool $doesPlatformSupportRealms() const;

    MCNAPI bool $isSelectedSkinInitialized() const;

    MCNAPI void $repopulateWorldTemplates();

    MCNAPI ::WorldTemplateInfo const* $findWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs) const;

    MCNAPI bool $isPackIdInRealmsPlus(::std::string const& packId) const;

    MCNAPI float $getStoreNetworkFailureTimeout() const;

    MCNAPI bool $isInGame() const;

    MCNAPI ::IMinecraftEventing& $getMinecraftEventing() const;

    MCNAPI bool $isAdhocEnabled() const;

    MCNAPI bool $isNetworkEnabled(::NetworkFilter withFilter) const;

    MCNAPI bool $platformTTSExists() const;
    // NOLINTEND
};
