#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/SlotSelectedAction.h"
#include "mc/client/gui/screens/models/IMainMenuScreenModel.h"
#include "mc/client/gui/screens/models/InstantiationResult.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/network/NetworkFilter.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/identity/IdentityType.h"
#include "mc/util/DownloadError.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
class CatalogCollection;
class CloudSaveLevelInfo;
class DlcUIWrapper;
class EDUServersScreenController;
class IContentAccessibilityProvider;
class IMinecraftEventing;
class LegacyWorldConverter;
class MainMenuScreenController;
class MinecoinCatalogModel;
class PackManifest;
class PlayScreenModel;
class RealmsCreateParams;
class ResourceLocation;
class ResourcePackFileUploadManager;
class SkinPackCollectionModel;
class SkinPackModel;
class WorldSeedCatalogModel;
class WorldTemplateManager;
struct AnnouncementSurface;
struct DlcChecker;
struct DlcId;
struct EDULibraryCategory;
struct IStoreCatalogItem;
struct LessonItem;
struct LevelSummary;
struct LibraryCollection;
struct LibraryCollectionConfig;
struct LibraryItem;
struct LinksToStyle;
struct PackContentItem;
struct PlatformOfferTransactionContext;
struct ProgressHandler;
struct Purchase;
struct RealmsTransactionContext;
struct SearchQuery;
struct SkinPickerUpsellTreatmentQuery;
struct StoreCatalogItem;
struct StoreCatalogRepository;
struct TransactionContext;
struct WorldFileDownloadManager;
struct WorldFileUploadManager;
struct WorldTemplateInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace Clubs { struct FeedItem; }
namespace Core { class Path; }
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Realms::Stories { struct FacetStateManager; }
namespace Realms::Stories { struct RealmEvent; }
namespace ResourcePackPathLifetimeHelpers { class ResourcePackPathCache; }
namespace Social { struct User; }
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

    virtual bool isNetworkEnabled(::NetworkFilter) const /*override*/;

    virtual bool platformTTSExists() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MainMenuScreenModel(::MinecraftScreenModel::Context context);

    MCFOLD ::std::weak_ptr<::MainMenuScreenModel> _getWeakPtr();

    MCAPI void _showAnnouncementIfAvailable(::Bedrock::NonOwnerPointer<::AnnouncementSurface> surface);

    MCAPI void checkAndPostUnpublishedRealmEventsToRealm(
        ::Realms::RealmId                                                       realmId,
        ::std::function<void(::Realms::Stories::RealmEvent, ::Clubs::FeedItem)> onSuccessfulPostToRealm
    );

    MCAPI bool checkStoreForAvailableUpdates() const;

    MCAPI void clearAllUserCache();

    MCAPI void clearScreenshotsCache();

    MCAPI ::std::shared_ptr<::CatalogCollection>
    createCatalogCollection(::std::vector<::std::shared_ptr<::SearchQuery>> const& queries, int maxVisibleOffers);

    MCAPI ::std::vector<::EDULibraryCategory> createLibraryCategoryPage(::std::vector<::std::string> const& pages);

    MCAPI ::std::shared_ptr<::LibraryCollection>
    createLibraryCollection(::std::shared_ptr<::LibraryCollectionConfig> config);

    MCAPI ::std::shared_ptr<::WorldFileDownloadManager> createLibraryWorldFileDownloadManager();

    MCAPI ::std::shared_ptr<::ResourcePackFileUploadManager> createResourcePackFileUploadManager();

    MCAPI ::std::shared_ptr<::WorldFileUploadManager> createWorldFileUploadManager();

    MCAPI void fetchContentInRealmsPlus(::std::function<void()> callback);

    MCAPI void fetchLibraryWorldSize(::std::shared_ptr<::LessonItem> lessonItem);

    MCAPI void forcePersonaServiceSync() const;

    MCFOLD bool fulfillPriorPlatformOfferPurchase(
        ::std::weak_ptr<::Purchase>                          purchase,
        ::std::unique_ptr<::PlatformOfferTransactionContext> context
    );

    MCAPI bool fulfillPriorRealmsPurchase(
        ::std::weak_ptr<::Purchase>                   purchase,
        ::std::unique_ptr<::RealmsTransactionContext> context
    );

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider const> getAccessibilityProvider() const;

    MCAPI ::EDULibraryCategory* getLibraryCategory(::std::string const& name);

    MCAPI ::MinecoinCatalogModel& getMinecoinCatalogModel();

    MCAPI ::std::shared_ptr<::Social::User> getPrimaryUser() const;

    MCAPI ::std::shared_ptr<::Realms::Stories::FacetStateManager> const getRealmsStoriesFacetStateManager() const;

    MCAPI ::SkinPackCollectionModel& getSkinPackCollection();

    MCAPI ::std::shared_ptr<::SkinPickerUpsellTreatmentQuery>
    getSkinPickerUpsellTreatmentQuery(::std::function<void(::SearchQuery const*)> callback) const;

    MCAPI ::StoreCatalogItem& getStoreCatalogItemByProductId(::std::string const& productId);

    MCAPI bool getStoreSupportsSubscriptions() const;

    MCAPI ::std::string getSunsettingText();

    MCAPI int getUserCoinBalance() const;

    MCAPI ::std::string getUserCoinBalanceAsString() const;

    MCAPI ::WorldFileDownloadManager& getWorldFileDownloadManager();

    MCAPI ::WorldSeedCatalogModel& getWorldSeedCatalogModel();

    MCAPI bool hasDismissedNewPlayerFlow() const;

    MCAPI bool hasSeenSonyTokensPopup() const;

    MCAPI void instantiateTemplate(
        ::PackManifest const&                                         manifest,
        ::std::function<void(::LevelSummary*, ::InstantiationResult)> callback
    );

    MCAPI bool isAbleToFetch(bool signInFailed) const;

    MCAPI bool isAppStoreReady() const;

    MCAPI bool isNewPlayerPathV3ABCTest() const;

    MCAPI bool isPlatformServiceMultiplayerConnected() const;

    MCAPI bool isRealmsCachedTrialAvailable() const;

    MCAPI bool isRealmsOreUIPurchaseEnabled() const;

    MCAPI bool isRealmsTrialOfferAvailable() const;

    MCAPI bool isServiceMultiplayerAvailableAndConnected(::Social::MultiplayerServiceIdentifier service) const;

    MCAPI bool isSkinPackNew(::SkinPackModel const& skinPackModel) const;

    MCAPI void launchSunsettingUri();

    MCAPI void launchUpdateUri();

    MCAPI void navigateToChooseRealmScreen(
        ::std::function<void(::Realms::World)> callback,
        ::SlotSelectedAction                   action,
        ::std::function<void()>                onCancelCallback
    );

    MCAPI void navigateToCoinPurchaseScreen(
        ::std::string const&             coinPurchaseScreenPageId,
        int                              coinsNeeded,
        ::std::function<void(bool, int)> callback
    );

    MCAPI void navigateToCreateRealmUpsellScreen(bool calledFromPlayScreen, ::std::string const& additionalScreenInfo);

    MCAPI void navigateToCreateWorldUpsellScreen(bool firstTimeShown, ::std::string const& additionalScreenInfo);

    MCAPI void navigateToEDUFetchProgressHandler(::std::shared_ptr<::PlayScreenModel> model);

    MCAPI void navigateToEDUFetchServersProgressHandler(
        ::Bedrock::NonOwnerPointer<::EDUServersScreenController> eduServersScreenController
    );

    MCAPI void navigateToEDULibraryRoot();

    MCAPI void navigateToEDUUploadProgressHandler(
        ::std::string const&                                        levelId,
        ::std::string const&                                        levelName,
        ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> eduCloudSaveSystem,
        ::std::optional<::CloudSaveLevelInfo>                       cloudSaveInfo
    );

    MCAPI void navigateToEDUWorldsScreen(bool fromTemplatesScreen);

    MCAPI void
    navigateToExpandedSkinPackScreen(::SkinPackModel& skinPackModel, ::SkinPackCollectionModel& skinPackCollection);

    MCAPI void navigateToFeaturedWorld();

    MCAPI void navigateToFileDownloadScreenAsync(
        uint64                      estimatedDiskWriteSize,
        ::std::string const&        realmID,
        int                         slotIndex,
        ::std::string const&        realmName,
        ::std::string const&        realmVersion,
        ::std::string const&        realmVersionName,
        ::std::function<void(bool)> callback
    );

    MCAPI void navigateToLibraryItemScreen(::std::shared_ptr<::LibraryItem> item);

    MCAPI void navigateToLibraryItemScreen(::std::string itemId);

    MCAPI void navigateToManifestValidationScreen(
        ::ResourceLocation const&                         resourceLocation,
        ::std::shared_ptr<::PackContentItem const> const& contentItem
    );

    MCAPI void navigateToMarketplacePassPDPViewAllPacksScreen();

    MCAPI void navigateToPlayScreen(::PlayScreenDefaultTab tab);

    MCAPI void navigateToPurchaseOfferScreen(::IStoreCatalogItem const& item, ::StoreNavigationOrigin origin, bool);

    MCAPI void navigateToPurchaseOfferScreen(
        ::std::string const&    productId,
        ::StoreNavigationOrigin origin,
        ::std::string const&,
        bool
    );

    MCAPI void
    navigateToPurchaseOfferScreen(::mce::UUID const& uuid, ::StoreNavigationOrigin origin, ::std::string const&, bool);

    MCAPI void navigateToRealmsCreateScreen(::RealmsCreateParams const& createParams);

    MCAPI void navigateToRealmsPDPViewAllPacksScreen();

    MCAPI void navigateToRealmsWorldProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        ::std::function<void()>              onlineSafetyCancelledCallback
    );

    MCAPI void navigateToStoreInventoryScreen();

    MCAPI void navigateToStoreSearchScreen(::std::string const& searchText, ::std::string const& mPackTypeFilter);

    MCAPI void navigateToStoreSearchScreen(
        ::LinksToStyle const& linksToStyle,
        ::std::string const&  searchText,
        ::std::string const&  packTypeFilter
    );

    MCAPI void navigateToSunsettingScreen(::std::string title);

    MCAPI void navigateToUploadPackFileProgressScreen(
        ::std::string const&                                  realmID,
        ::Core::Path const&                                   path,
        int                                                   slotIndex,
        bool                                                  archiveNeeded,
        ::std::function<void(::UploadState, ::Realms::World)> uploadPackCallback
    );

    MCAPI void
    navigateToWorldConversionCompleteScreen(::std::string const& levelId, ::std::function<void()> cancelCallback);

    MCAPI ::std::unique_ptr<::DlcUIWrapper> newDlcUIWrapper(::MainMenuScreenController& controller);

    MCAPI bool prepareAppStoreForPurchases(::std::function<void(bool)> callback);

    MCAPI void
    purchaseMarketplacePass(::std::string const& productSku, ::std::unique_ptr<::TransactionContext>&& context);

    MCAPI void quickPlay();

    MCAPI void redeemRealmsCatalogOffer(::std::string const& productId, ::std::function<void(bool)> outerCallback);

    MCAPI void refreshUserInventory() const;

    MCAPI ::Bedrock::PubSub::Subscription
    registerPrimaryUserSignInSubscriber(::std::function<void(uint, ::Social::IdentityType)> listener);

    MCAPI void setDeepLinkListenerMainMenuParameters(::std::function<void(::DownloadError const&)> onDownloadError);

    MCAPI void setHasSeenSonyTokenPopup(bool newValue);

    MCAPI void setStoreCatalogItemViewed(::IStoreCatalogItem const& item) const;

    MCAPI void setStoreCatalogItemViewed(::std::string const& productId, bool addToRecentlyViewed) const;

    MCAPI void submitReviewFor(::std::string const& productId, int rating, ::std::function<void()> successCallback);

    MCAPI void uploadLocalWorldFile(
        ::std::string const&                                  realmID,
        ::std::string const&                                  worldID,
        int                                                   slotIndex,
        ::std::function<void(::UploadState, ::Realms::World)> callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftScreenModel::Context context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $navigateToDlcProgressScreen(
        ::std::vector<::DlcId> const&     dlcIds,
        ::std::function<void(bool, bool)> callback,
        bool                              showCloseButton,
        bool                              processingUpdates,
        bool                              requireCancelToExit
    );

    MCAPI ::std::string const& $getLastPoppedScreenName() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> $getStoreCatalogRepository() const;

    MCFOLD bool $doesPlatformSupportRealms() const;

    MCFOLD bool $isSelectedSkinInitialized() const;

    MCAPI void $repopulateWorldTemplates();

    MCAPI ::WorldTemplateInfo const* $findWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs) const;

    MCAPI bool $isPackIdInRealmsPlus(::std::string const& packId) const;

    MCFOLD float $getStoreNetworkFailureTimeout() const;

    MCFOLD bool $isInGame() const;

    MCFOLD ::IMinecraftEventing& $getMinecraftEventing() const;

    MCAPI bool $isAdhocEnabled() const;

    MCFOLD bool $platformTTSExists() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIMinecraftScreenModel();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIDlcBatcher();
    // NOLINTEND
};
