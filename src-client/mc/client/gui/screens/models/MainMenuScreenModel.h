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
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/identity/IdentityType.h"
#include "mc/util/DownloadError.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
class CloudSaveLevelInfo;
class IContentAccessibilityProvider;
class IMinecraftEventing;
class MainMenuScreenController;
class PackManifest;
class ResourceLocation;
class ResourcePackFileUploadManager;
class SearchQuery;
class TransactionContext;
struct CatalogCollection;
struct DlcId;
struct DlcUIWrapper;
struct EDULibraryCategory;
struct EDUServersScreenController;
struct IStoreCatalogItem;
struct LessonItem;
struct LevelSummary;
struct LibraryCollection;
struct LibraryCollectionConfig;
struct LibraryItem;
struct MinecoinCatalogModel;
struct PackContentItem;
struct PlatformOfferTransactionContext;
struct PlayScreenModel;
struct ProgressHandler;
struct Purchase;
struct RealmsCreateParams;
struct RealmsTransactionContext;
struct SkinPackCollectionModel;
struct SkinPackModel;
struct SkinPickerUpsellTreatmentQuery;
struct StoreCatalogItem;
struct StoreCatalogRepository;
struct WorldFileDownloadManager;
struct WorldFileUploadManager;
struct WorldSeedCatalogModel;
struct WorldTemplateInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace Clubs { struct FeedItem; }
namespace Core { class Path; }
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Realms::Stories { class RealmEvent; }
namespace Realms::Stories { struct FacetStateManager; }
namespace Social { class User; }
namespace mce { class UUID; }
// clang-format on

class MainMenuScreenModel : public ::MinecraftScreenModel, public ::IMainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mUnk91be37;
    ::ll::UntypedStorage<8, 8>   mUnk61a852;
    ::ll::UntypedStorage<8, 8>   mUnk76c977;
    ::ll::UntypedStorage<8, 16>  mUnkef369f;
    ::ll::UntypedStorage<8, 8>   mUnk52b71e;
    ::ll::UntypedStorage<8, 16>  mUnk91f226;
    ::ll::UntypedStorage<8, 8>   mUnkb2c4db;
    ::ll::UntypedStorage<8, 24>  mUnk6e0902;
    ::ll::UntypedStorage<8, 8>   mUnk5d30f7;
    ::ll::UntypedStorage<8, 16>  mUnk8ace6f;
    // NOLINTEND

public:
    // prevent constructor by default
    MainMenuScreenModel& operator=(MainMenuScreenModel const&);
    MainMenuScreenModel(MainMenuScreenModel const&);
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
    MCNAPI explicit MainMenuScreenModel(::MinecraftScreenModel::Context context);

    MCNAPI ::std::weak_ptr<::MainMenuScreenModel> _getWeakPtr();

    MCNAPI void checkAndPostUnpublishedRealmEventsToRealm(
        ::Realms::RealmId                                                       realmId,
        ::std::function<void(::Realms::Stories::RealmEvent, ::Clubs::FeedItem)> onSuccessfulPostToRealm
    );

    MCNAPI bool checkStoreForAvailableUpdates() const;

    MCNAPI void clearAllUserCache();

    MCNAPI void clearScreenshotsCache();

    MCNAPI ::std::shared_ptr<::CatalogCollection>
    createCatalogCollection(::std::vector<::std::shared_ptr<::SearchQuery>> const& queries, int maxVisibleOffers);

    MCNAPI ::std::vector<::EDULibraryCategory> createLibraryCategoryPage(::std::vector<::std::string> const& pages);

    MCNAPI ::std::shared_ptr<::LibraryCollection>
    createLibraryCollection(::std::shared_ptr<::LibraryCollectionConfig> config);

    MCNAPI ::std::shared_ptr<::WorldFileDownloadManager> createLibraryWorldFileDownloadManager();

    MCNAPI ::std::shared_ptr<::ResourcePackFileUploadManager> createResourcePackFileUploadManager();

    MCNAPI ::std::shared_ptr<::WorldFileUploadManager> createWorldFileUploadManager();

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

    MCNAPI ::EDULibraryCategory* getLibraryCategory(::std::string const& name);

    MCNAPI ::MinecoinCatalogModel& getMinecoinCatalogModel();

    MCNAPI ::std::shared_ptr<::Social::User> getPrimaryUser() const;

    MCNAPI ::std::shared_ptr<::Realms::Stories::FacetStateManager> const getRealmsStoriesFacetStateManager() const;

    MCNAPI ::SkinPackCollectionModel& getSkinPackCollection();

    MCNAPI ::std::shared_ptr<::SkinPickerUpsellTreatmentQuery>
    getSkinPickerUpsellTreatmentQuery(::std::function<void(::SearchQuery const*)> callback) const;

    MCNAPI ::StoreCatalogItem& getStoreCatalogItemByProductId(::std::string const& productId);

    MCNAPI bool getStoreSupportsSubscriptions() const;

    MCNAPI ::std::string getSunsettingText();

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

    MCNAPI bool isNewPlayerPathV3ABCTest() const;

    MCNAPI bool isPlatformServiceMultiplayerConnected() const;

    MCNAPI bool isRealmsCachedTrialAvailable() const;

    MCNAPI bool isRealmsOreUIPurchaseEnabled() const;

    MCNAPI bool isServiceMultiplayerAvailableAndConnected(::Social::MultiplayerServiceIdentifier service) const;

    MCNAPI bool isSkinPackNew(::SkinPackModel const& skinPackModel) const;

    MCNAPI void launchSunsettingUri();

    MCNAPI void launchUpdateUri();

    MCNAPI void navigateToChooseRealmScreen(
        ::std::function<void(::Realms::World)> callback,
        ::SlotSelectedAction                   action,
        ::std::function<void()>                onCancelCallback
    );

    MCNAPI void navigateToCloudUploadScreen(::std::string const& levelId);

    MCNAPI void navigateToCoinPurchaseScreen(
        ::std::string const&             coinPurchaseScreenPageId,
        int                              coinsNeeded,
        ::std::function<void(bool, int)> callback
    );

    MCNAPI void navigateToCreateRealmUpsellScreen(bool calledFromPlayScreen, ::std::string const& additionalScreenInfo);

    MCNAPI void navigateToCreateWorldUpsellScreen(bool firstTimeShown, ::std::string const& additionalScreenInfo);

    MCNAPI void navigateToEDUFetchProgressHandler(::std::shared_ptr<::PlayScreenModel> model);

    MCNAPI void navigateToEDUFetchServersProgressHandler(
        ::Bedrock::NonOwnerPointer<::EDUServersScreenController> eduServersScreenController
    );

    MCNAPI void navigateToEDULibraryRoot();

    MCNAPI void navigateToEDUUploadProgressHandler(
        ::std::string const&                                        levelId,
        ::std::string const&                                        levelName,
        ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> eduCloudSaveSystem,
        ::std::optional<::CloudSaveLevelInfo>                       cloudSaveInfo
    );

    MCNAPI void navigateToEDUWorldsScreen(bool fromTemplatesScreen);

    MCNAPI void
    navigateToExpandedSkinPackScreen(::SkinPackModel& skinPackModel, ::SkinPackCollectionModel& skinPackCollection);

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

    MCNAPI void navigateToManifestValidationScreen(
        ::ResourceLocation const&                         resourceLocation,
        ::std::shared_ptr<::PackContentItem const> const& contentItem
    );

    MCNAPI void navigateToMarketplacePassPDPViewAllPacksScreen();

    MCNAPI void navigateToPlayScreen(::PlayScreenDefaultTab tab);

    MCNAPI void navigateToPurchaseOfferScreen(::IStoreCatalogItem const& item, ::StoreNavigationOrigin origin, bool);

    MCNAPI void navigateToPurchaseOfferScreen(
        ::std::string const&    productId,
        ::StoreNavigationOrigin origin,
        ::std::string const&,
        bool
    );

    MCNAPI void
    navigateToPurchaseOfferScreen(::mce::UUID const& uuid, ::StoreNavigationOrigin origin, ::std::string const&, bool);

    MCNAPI void navigateToRealmsCreateScreen(::RealmsCreateParams const& createParams);

    MCNAPI void navigateToRealmsPDPViewAllPacksScreen();

    MCNAPI void navigateToRealmsWorldProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        ::std::function<void()>              onlineSafetyCancelledCallback
    );

    MCNAPI void navigateToStoreInventoryScreen();

    MCNAPI void navigateToStoreSearchScreen(::std::string const& searchText, ::std::string const& mPackTypeFilter);

    MCNAPI void navigateToSunsettingScreen(::std::string title);

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

    MCNAPI bool prepareAppStoreForPurchases(::std::function<void(bool)> callback);

    MCNAPI void
    purchaseMarketplacePass(::std::string const& productSku, ::std::unique_ptr<::TransactionContext>&& context);

    MCNAPI void quickPlay();

    MCNAPI void redeemRealmsCatalogOffer(::std::string const& productId, ::std::function<void(bool)> outerCallback);

    MCNAPI void refreshUserInventory() const;

    MCNAPI ::Bedrock::PubSub::Subscription
    registerPrimaryUserSignInSubscriber(::std::function<void(uint, ::Social::IdentityType)> listener);

    MCNAPI void setDeepLinkListenerMainMenuParameters(::std::function<void(::DownloadError const&)> onDownloadError);

    MCNAPI void setHasSeenSonyTokenPopup(bool newValue);

    MCNAPI void setStoreCatalogItemViewed(::IStoreCatalogItem const& item) const;

    MCNAPI void setStoreCatalogItemViewed(::std::string const& productId, bool addToRecentlyViewed) const;

    MCNAPI void submitReviewFor(::std::string const& productId, int rating, ::std::function<void()> successCallback);

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
    MCNAPI void* $ctor(::MinecraftScreenModel::Context context);
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIMinecraftScreenModel();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIDlcBatcher();
    // NOLINTEND
};
