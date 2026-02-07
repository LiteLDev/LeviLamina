#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/MinecraftGameFeatures.h"
#include "mc/client/game/WebviewInterfaceType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/screens/controllers/RealmsPlusTabIndex.h"
#include "mc/client/gui/screens/models/IMinecraftScreenModel.h"
#include "mc/client/gui/screens/models/PlatformStoreIconModel.h"
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/player/DefaultSkin.h"
#include "mc/client/player/PickCustomSkinResult.h"
#include "mc/client/services/download/IDlcBatcher.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/client/store/StoreCatalogCategory.h"
#include "mc/client/store/iap/PurchaseResult.h"
#include "mc/codebuilder/CodeBuilderPerformance.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/UserGeneratedUriSource.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/packet/ModalFormCancelReason.h"
#include "mc/network/packet/ResourcePackResponse.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/level/FileArchiver.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ActiveDirectoryIdentity;
class ClientInstanceModel;
class ContentIdentity;
class ContentTierInfo;
class EduDeeplinkObserver;
class FilePickerSettings;
class HitResult;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IDlcBatchModel;
class IMinecraftGame;
class IOptions;
class ISceneStack;
class IScreenCapabilities;
class LayeredAbilities;
class LevelData;
class LevelSettings;
class MinecraftCommands;
class PackManifest;
class PlatformMultiplayerRestrictions;
class PlatformUpsellDialog;
class ResourceLocation;
class SceneFactory;
class SkinPackCollectionModel;
class TaskGroup;
class ToastMessage;
class WebviewInterface;
struct ActorUniqueID;
struct ContentLogMessage;
struct DlcId;
struct DownloadStateObject;
struct EducationLevelSettings;
struct EducationLocalLevelSettings;
struct IEDUDiscoveryService;
struct IGameConnectionListener;
struct LevelSummary;
struct PDFOptions;
struct PackIdVersion;
struct PlayerAchievementData;
struct ProgressHandler;
struct Purchase;
struct RealmsAPI;
struct SkinHandle;
struct StoreCatalogRepository;
struct StoreContentSources;
struct StoreDataDrivenScreenParams;
struct TransactionContext;
struct WireframeQueue;
namespace Clubs { struct ActivityFeed; }
namespace Clubs { struct ClubModel; }
namespace Clubs { struct FeedItem; }
namespace Clubs { struct ReportedItem; }
namespace Core { class Path; }
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Identity { struct SignOutResult; }
namespace Json { class Value; }
namespace Realms { struct Backup; }
namespace Realms { struct InvitesService; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Realms { struct WorldCache; }
namespace SDL { struct SubscriptionInfo; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { struct FriendList; }
namespace Social { struct MultiIdentitySigninResult; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct XboxLiveUserProfileData; }
namespace StoreFilter { struct FilterCollectionInfo; }
namespace edu::auth { struct CredentialsObserver; }
// clang-format on

class MinecraftScreenModel : public ::IMinecraftScreenModel,
                             public ::IDlcBatcher,
                             public ::std::enable_shared_from_this<::MinecraftScreenModel> {
public:
    // MinecraftScreenModel inner types declare
    // clang-format off
    struct Context;
    // clang-format on

    // MinecraftScreenModel inner types define
    enum class FriendsDrawerLocation : int {};

    struct Context {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                          mMinecraft;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mAdvancedGraphicsOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>          mClient;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>>              mSceneStack;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AbstractScene>>                        mLoadingScene;
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                                            mSceneFactory;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsDirty;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientInstanceModel>>                   mClientModel;
    ::ll::TypedStorage<4, 4, ::LoadingState>                               mResourcePackConfirmationLoadingState;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SkinPackCollectionModel>> mSkinPackCollectionModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SkinPackCollectionModel>> mPurchasableSkinPackCollectionModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SkinPackCollectionModel>> mOwnedSkinPackCollectionModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SkinPackCollectionModel>> mRealmsPlusSkinPackCollectionModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>               mAsyncTaskGroup;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlatformUpsellDialog>>   mPlatformUpsellDialog;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IDlcBatcher>>             mDlcBatcher;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>           mStartServerResult;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IScreenCapabilities>>     mCapabilities;
    ::ll::TypedStorage<8, 16, ::PlatformStoreIconModel>                    mPlatformStoreIconModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>               mStorageCheckTaskGroup;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::FriendList>>     mFriendList;
    ::ll::TypedStorage<4, 4, uint>                                         mSceneId;
    ::ll::TypedStorage<1, 1, bool>                                         mPlayerCanceledJoinGame;
    ::ll::TypedStorage<1, 1, bool>                                         mCurrentlyLoadingScene;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScreenModel& operator=(MinecraftScreenModel const&);
    MinecraftScreenModel(MinecraftScreenModel const&);
    MinecraftScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftScreenModel() /*override*/;

    virtual void
    navigateToDisconnectScreen(::Connection::DisconnectFailReason reason, ::std::string const& displayMessageOverride);

    virtual bool tryNavigateToProfileScreen() /*override*/;

    virtual bool tryNavigateToSafeZoneScreenOnFirstSignin() /*override*/;

    virtual void navigateToStoreDataDrivenScreen(
        ::StoreDataDrivenScreenParams const& params,
        bool                                 forceDisableProgressScreen
    ) /*override*/;

    virtual bool leaveScreen(::std::string expectedScreenName, bool onlyThis) /*override*/;

    virtual bool isInGame() const;

    virtual bool isSelectedSkinInitialized() const;

    virtual ::SubClientId getSubClientId() const /*override*/;

    virtual bool platformTTSExists() const;

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::DlcId> const& dlcIds) /*override*/;

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::std::string> const& productIds) /*override*/;

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::PackIdVersion> const& packIds) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() const;

    virtual float getStoreNetworkFailureTimeout() const;

    virtual bool isAdhocEnabled() const;

    virtual bool isDirty() const;

    virtual ::SkinHandle const& getSelectedSkinHandle() const;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const getUserManager() const /*override*/;

    virtual ::std::string const& getLastPoppedScreenName() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void DEPRECATED_navigateToRealmsPlusPDPScreen(
        ::RealmsPlusTabIndex                    tabIndex,
        ::std::function<void(::Realms::World&)> onCreateCallback
    );

    MCAPI explicit MinecraftScreenModel(::MinecraftScreenModel::Context context);

    MCAPI ::RealmsAPI& _checkAndGetRealmsAPI() const;

    MCAPI bool _isPremium(::PackManifest const& manifest) const;

    MCAPI bool _isPremiumLocked(::PackManifest const& manifest) const;

    MCAPI ::Bedrock::Threading::Async<void> _queueForMainThread(::std::function<void()>&& callback);

    MCAPI void _savePDF(::PDFOptions options, ::std::shared_ptr<::FilePickerSettings> settings);

    MCAPI void _saveZIP(::PDFOptions options, ::std::shared_ptr<::FilePickerSettings> settings);

    MCAPI void _startLocalServerAsync(
        ::std::string const&     levelId,
        ::std::string const&     levelName,
        ::ContentIdentity const& contentIdentity,
        ::LevelSettings const&   settings
    );

    MCAPI void
    addDownloadCallback(::std::weak_ptr<bool> existenceTracker, ::std::function<void(::DownloadStateObject&)> callback);

    MCAPI void addEduCredentialsObserver(::edu::auth::CredentialsObserver& observer);

    MCAPI void addEduDeeplinkObserver(::EduDeeplinkObserver& observer) const;

    MCAPI void addToRealmsBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           currentUserXuid,
        ::std::string const&                           xuidToBlock,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCAPI bool canEditPermissionsEDU(::ActorUniqueID const& id);

    MCAPI bool canManageSubscriptionForStoreId(::std::string const& storeId) const;

    MCAPI void cancelJoinGame(::LoadingState loadingState);

    MCAPI void checkConnectionEvents();

    MCAPI void checkRealmsPaymentService(::std::function<void(bool)> callback);

    MCAPI void clearContentLogMessages();

    MCAPI void clearDevConsoleScreenMessages();

    MCAPI void clearTTSQueue();

    MCAPI void closeRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCAPI void completeServerForm(uint formId, ::ModalFormCancelReason cancelReason);

    MCAPI void completeServerForm(uint formId, ::Json::Value response);

    MCAPI void confirmResourcePackDownload(
        ::ResourcePackResponse response,
        bool                   downloadOptionalResourcePacks,
        bool                   forceServerPacksEnabled
    );

    MCAPI void connectToPlatformNetwork(
        ::std::function<void(::Social::UserPlatformConnectionResult)> callback,
        bool                                                          isUserInitiated
    );

    MCAPI ::std::string copyWorld(::std::string const& worldId);

    MCAPI void createAndUploadWorldToRealm(
        ::LevelSummary const&                  levelSummary,
        ::LevelSettings const&                 levelSettings,
        ::Realms::World                        world,
        ::std::function<void(::Realms::World)> callback
    );

    MCAPI void createAndUploadWorldToRealm(
        ::std::string const&                   levelId,
        ::std::string                          levelName,
        ::LevelSettings const&                 settings,
        ::Realms::World                        world,
        ::std::function<void(::Realms::World)> callback
    );

    MCAPI ::std::unique_ptr<::PlatformMultiplayerRestrictions> createPlatformMultiplayerRestrictions();

    MCAPI void deleteAllContentLogs() const;

    MCAPI void deleteAllDiagnosticsAndProfilerCaptures() const;

    MCAPI void deleteAllLocalScreenshots();

    MCAPI void deleteFeedItem(
        ::Clubs::FeedItem const&                      activityItem,
        ::Realms::RealmId                             realmId,
        ::std::string const&                          clubId,
        ::std::function<void(::Clubs::GenericStatus)> callback
    );

    MCAPI void destroyGame();

    MCAPI void devConsoleExecuteCommand(::std::string const& command);

    MCAPI void displayPremiumUpsellDialogAsync(::std::function<void(bool)> callback);

    MCAPI bool doesUserHavePremiumPlatformAccess() const;

    MCAPI bool doesUserPlatformConnectionAllowMultiplayer() const;

    MCAPI void fetchScreenshots(::std::vector<::Core::PathBuffer<::std::string>>& results);

    MCAPI ::std::string filterProfanityFromString(
        ::ProfanityFilterContext stringContext,
        ::std::string const&     str,
        bool                     allowFilterOverride
    ) const;

    MCAPI bool findProfanityInString(::ProfanityFilterContext stringContext, ::std::string const& str) const;

    MCAPI void fireCodeBuilderCachePerformanceEvent(::CodeBuilderPerformance::Stage stage);

    MCAPI void fireEventScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    );

    MCAPI void fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    );

    MCAPI void fireSignOutEdu(::std::string const& action, ::std::string const& error) const;

    MCFOLD bool
    fulfillPriorEduPurchase(::std::weak_ptr<::Purchase> purchase, ::std::unique_ptr<::TransactionContext> context);

    MCAPI ::std::shared_ptr<::FilePickerSettings>
    generateFilePickerSettingsForAlbum(::PDFOptions const& options, ::std::string const& defaultOutName);

    MCAPI ::std::shared_ptr<::FilePickerSettings> generateFilePickerSettingsForExport();

    MCAPI ::std::shared_ptr<::FilePickerSettings> generateFilePickerSettingsForExport(
        ::std::string const&       levelId,
        ::std::string const&       levelName,
        ::FileArchiver::ExportType type
    );

    MCAPI ::PlayerAchievementData const& getAchievementData() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity const> getActiveDirectoryIdentity();

    MCAPI ::std::string getBuildDateISOString() const;

    MCAPI void getClubFeed(
        ::std::string const&                                                 clubID,
        ::std::function<void(::Clubs::ActivityFeed, ::Clubs::GenericStatus)> callback
    );

    MCAPI void getClubProfile(
        ::std::string const&                                              clubId,
        ::std::function<void(::Clubs::ClubModel, ::Clubs::GenericStatus)> callback
    );

    MCAPI void
    getClubUnreadCount(::std::string const& clubId, ::std::function<void(int, ::Clubs::GenericStatus)> callback);

    MCAPI void getClubUnreadCounts(
        ::std::vector<::std::string> const&                                           clubIds,
        ::std::function<void(::std::map<::std::string, int>, ::Clubs::GenericStatus)> callback
    );

    MCAPI ::MinecraftCommands& getCommands();

    MCAPI ::std::vector<::ContentLogMessage> const& getContentLogMessages() const;

    MCAPI ::ContentTierInfo getContentTierInfo() const;

    MCAPI ::Realms::World& getCurrentRealm();

    MCAPI ::std::string getCurrentXUID() const;

    MCAPI ::SkinHandle getCustomSkinHandle(::DefaultSkin skinType) const;

    MCAPI int getCustomSkinIndex() const;

    MCAPI ::WireframeQueue* getDimensionWireframeQueue();

    MCAPI ::std::string getDisplayName() const;

    MCAPI ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> getEDUCloudSaveSystem() const;

    MCAPI ::IEDUDiscoveryService& getEDUDiscoveryService();

    MCAPI float getEDUServicePackProgress() const;

    MCAPI ::std::string getEduOfferPrice();

    MCAPI ::EducationLevelSettings const* getEducationLevelSettings() const;

    MCAPI ::std::optional<::Social::GameConnectionInfo> getGameConnectionInfo();

    MCAPI ::IGameConnectionListener const& getGameConnectionListener();

    MCAPI ::HitResult& getHitResult() const;

    MCAPI int getHotbarSlotCount() const;

    MCAPI ::ResourceLocation const& getImageLocationFromImageRepository(::std::string const& imageName) const;

    MCAPI bool getIsWaitingForSession() const;

    MCAPI ::LevelData* getLevelData();

    MCAPI ::LevelData* getLevelData(::std::string const& levelID);

    MCAPI void getLinkedPlatformIds(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 xuids
    ) const;

    MCAPI void getLinkedXuids(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 platformIds
    ) const;

    MCAPI ::ActorUniqueID getLocalPlayerEntityID() const;

    MCAPI ::std::string getLocalizedStoreDisplayName(::std::string const& storeId);

    MCAPI ::std::string getMarketplacePassPrice(::std::string const& productSku, ::std::string const& caymanId) const;

    MCAPI uint getMaxPlatformInvitablePlayers() const;

    MCAPI ::std::string getNetworkInfoStringInGame() const;

    MCAPI bool getNewJukeboxPopupItemText(::std::string& newText, bool& isCreative);

    MCAPI bool getNewPopupItemText(::std::string& newText, bool& isCreative);

    MCAPI ::SDL::SubscriptionInfo const& getNextAvailableSubscriptionInfo() const;

    MCAPI ::IOptions& getOptions() const;

    MCAPI ::std::shared_ptr<::WebviewInterface> getOrCreateWebviewInterface(::WebviewInterfaceType interfaceType);

    MCAPI void
    getPlatformFriendProfiles(::std::function<void(::std::vector<::Social::PlatformUserProfileData> const&)> callback);

    MCAPI void getPlatformProfile(
        ::std::string const&                                      platformId,
        ::std::function<void(::Social::PlatformUserProfileData&)> callback
    );

    MCAPI short getPointerX() const;

    MCAPI short getPointerY() const;

    MCAPI void getProfiles(
        ::std::vector<::std::string> const&                                                   xuids,
        ::std::function<void(::std::vector<::Social::XboxLiveUserProfileData const*> const&)> batchedCollectionCallback
    );

    MCAPI ::std::string getRandomSearchTermUsingCategory(::StoreCatalogCategory const& category) const;

    MCAPI void getRealmWorldBackups(
        ::Realms::RealmId                                                               worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Backup>)> callback
    );

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService> getRealmsInvitesService();

    MCAPI void getRealmsWorld(
        ::Realms::RealmId                                               worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback,
        bool                                                            userWaiting
    );

    MCAPI ::std::shared_ptr<::Realms::WorldCache> getRealmsWorldCache();

    MCAPI ::Realms::World getRealmsWorldContextWorld() const;

    MCAPI void getReportedFeedItem(
        ::Clubs::ReportedItem const&                                                                   reportedItem,
        ::std::function<void(::Clubs::ReportedItem const&, ::Clubs::FeedItem, ::Clubs::GenericStatus)> callback
    );

    MCAPI void getReportedItemPaths(
        ::std::string const&                                                                clubId,
        ::std::function<void(::std::vector<::Clubs::ReportedItem>, ::Clubs::GenericStatus)> callback
    );

    MCAPI ::std::string getScreenName() const;

    MCAPI ::std::string getScreenTelemetry() const;

    MCAPI ::Core::PathBuffer<::std::string> getScreenshotPath() const;

    MCAPI ::std::vector<::StoreFilter::FilterCollectionInfo> const& getSessionConfigFilterCollections() const;

    MCAPI ::std::string getSessionConfigKnownPageKeyValue(::std::string const& pageId) const;

    MCAPI bool getSimPaused() const;

    MCAPI ::std::string getSplitscreenJoinText() const;

    MCAPI ::StoreContentSources getStoreContentSources() const;

    MCAPI bool getStoreHasRealmsProducts() const;

    MCAPI ::std::string getStoreId() const;

    MCAPI ::SDL::SubscriptionInfo const& getSubscriptionFullPriceInfo() const;

    MCAPI void getThirdPartyDisplayPicture(
        ::std::string const&                       playerId,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       isLocal
    );

    MCAPI bool getTipText(::std::string& text);

    MCAPI void getUserMemberOfWorldsCount(::std::function<void(::Realms::GenericStatus, bool)> callback);

    MCAPI ::std::vector<::std::string> getUuidsInLobby() const;

    MCAPI ::std::string getVersionString() const;

    MCAPI ::std::shared_ptr<::WebviewInterface> getWebviewInterface(::WebviewInterfaceType interfaceType);

    MCAPI ::std::string getWorldConverterDevVersionNumberString() const;

    MCAPI ::LoadingState getWorldLoadingState() const;

    MCAPI ::PurchaseResult goToExternalPlatformOffer(
        ::std::string const&             offerId,
        ::std::function<void(bool)>      finishedExternalCoinPurchase,
        ::std::function<void(bool, int)> boughtEnoughCoinsCallback
    );

    MCFOLD bool hasExternalCoinPurchases() const;

    MCAPI bool hasInteractButton() const;

    MCAPI bool hasLocalDeviceEntitlements() const;

    MCAPI bool hasPlatformIcons() const;

    MCAPI bool hasPlatformProfileCards() const;

    MCAPI void ignoreReportedFeedItem(
        ::Clubs::ReportedItem const&                  activityItem,
        ::std::string const&                          reason,
        ::std::string const&                          clubId,
        ::std::function<void(::Clubs::GenericStatus)> callback
    );

    MCAPI void initializeRealmsWorld(
        ::Realms::RealmId                                                       worldId,
        ::std::string const&                                                    name,
        ::std::string const&                                                    description,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCAPI bool isBanned() const;

    MCAPI bool isCreative() const;

    MCAPI bool isCrossPlatformPlayEnabled() const;

    MCAPI bool isDeviceBeingSunset() const;

    MCAPI bool isDeviceSunset() const;

    MCAPI bool isDisconnectedFromNEX() const;

    MCAPI bool isDisconnectedFromPSN() const;

    MCAPI bool isEditorModeEnabled() const;

    MCAPI bool isEduDemo();

    MCFOLD bool isEduMode() const;

    MCAPI bool isFeatureEnabled(::MinecraftGameFeatures feature) const;

    MCAPI bool isHotbarOnlyTouch() const;

    MCAPI bool isInputModeTouch() const;

    MCAPI bool isInviteEnabled(::Social::MultiplayerServiceIdentifier serviceIdentifier) const;

    MCAPI bool isLeftHanded() const;

    MCAPI ::Social::PermissionCheckResult isMultiplayerAllowed() const;

    MCAPI bool isNetworkAvailable() const;

    MCAPI bool isOnSceneStack(::std::string const& screenName);

    MCAPI bool isOperator() const;

    MCAPI bool isOreUIModerationEnabled() const;

    MCAPI bool isPlatformInviteEnabled() const;

    MCFOLD bool isPlatformThirdPartyConsole() const;

    MCAPI bool isPremiumOwnedMissing(::PackIdVersion const& id, ::ContentIdentity const& contentIdentity) const;

    MCFOLD bool isPremiumPlatformAccessRequiredForMatchmaking() const;

    MCAPI bool isRealmLevel() const;

    MCAPI bool isRealmOwner() const;

    MCAPI bool isRealmsEditWorldOreUIFeatureOn() const;

    MCFOLD bool isRealmsEnabled() const;

    MCAPI bool isRealmsInitialized() const;

    MCAPI bool isResourceLoadingFinished() const;

    MCAPI bool isRiding() const;

    MCAPI bool isServiceMultiplayerEnabled(::Social::MultiplayerServiceIdentifier serviceID) const;

    MCAPI bool isServicesLocalizationReady() const;

    MCAPI bool isSessionConfigAndLocalizationReady() const;

    MCAPI bool isSessionConfigRetrievalDelayed() const;

    MCAPI bool isSessionInfoValid(::Social::MultiplayerServiceIdentifier serviceID) const;

    MCAPI bool isSignInInProgress() const;

    MCAPI bool isSignedInToAdhoc() const;

    MCAPI bool isSignedInToNEX() const;

    MCAPI bool isSignedInToPSN() const;

    MCAPI bool isSignedInToPlayFabOfflineAndNetworkDisconnected() const;

    MCAPI bool isSignedInToPlayfab() const;

    MCAPI bool isSignedInToXBL() const;

    MCAPI bool isUITTSEnabled() const;

    MCFOLD bool isUnableToShowXBLLogo() const;

    MCAPI bool isValidRealmName(::std::string name);

    MCAPI void joinEDUDiscoveredWorld();

    MCAPI void joinRealmFromInvite(::Realms::World world);

    MCAPI void joinRealmsWorld(
        ::Realms::World                                                  world,
        ::std::function<void(::Social::GameConnectionInfo const&, bool)> successCallback,
        ::std::function<void(::Realms::GenericStatus, ::RealmsAPI::JoinStatus, ::Realms::FailureReason)> failCallback,
        ::std::function<void(int)>                                                                       retryCallback,
        ::IMinecraftEventing::RealmConnectionFlow                        realmConnectionFlow,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow)> broadcastConnectionEventRealmsRequestFunction,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow, ::Bedrock::Http::StatusCode)>
            broadcastConnectionEventRealmsResponseFunction
    );

    MCAPI void launchEduUri(::std::string const& baseUrl);

    MCAPI bool launchManageSubscriptions();

    MCAPI bool launchStore();

    MCAPI void launchUri(::std::string const& uri);

    MCAPI void launchUserGeneratedUri(::std::string const& uri, ::UserGeneratedUriSource source, bool recordEvent);

    MCAPI void leaveRealmsWorld(::Realms::RealmId worldId, ::std::function<void(::Realms::GenericStatus)> callback);

    MCAPI void loadStoreDataDrivenScreenFromSidebar(::StoreDataDrivenScreenParams& params);

    MCAPI void makeBackupOfLevel(::LevelSummary const& editedLevel);

    MCAPI bool multiplayerLostConnectionToSignalingService() const;

    MCAPI void navigateToControlCustomizationScreen();

    MCAPI void navigateToDevConsole();

    MCAPI void navigateToEduHomeScreen();

    MCAPI void navigateToFeedScreen(::Realms::World const& world);

    MCAPI void navigateToFeedbackPopup();

    MCAPI void navigateToInviteScreen();

    MCAPI void navigateToModalProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 forceRenderBelow,
        ::std::string const&                 screenNameOverride,
        bool                                 isCancellable
    );

    MCAPI void navigateToOptionsScreen(
        ::SettingsTabIndex   startingTabIndex,
        bool                 navToMenuOnExit,
        bool                 maintainOldFocus,
        ::std::string const& initialPackId
    );

    MCAPI void navigateToPlatformNetworkConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI void navigateToPlatformStoreConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI void navigateToRealmsSlotSettingsScreen(::Realms::World const& world);

    MCAPI void navigateToRealmsSlotsScreen(::Realms::World const& worldWithoutSlotInfo);

    MCAPI void navigateToSkinPickerScreen();

    MCAPI void navigateToStartScreen();

    MCAPI void navigateToStoreHomeScreen(::std::string const& title);

    MCAPI void navigateToTokenFAQScreen();

    MCAPI void navigateToTokenPopupScreen();

    MCAPI void navigateToUpdateWorldHeightScreen(::std::function<void(bool)> startWorldCallback);

    MCAPI bool needPlatformConnectionBeforeXBLSignIn() const;

    MCAPI bool needPlatformConnectionForSplitScreenMultiplayer() const;

    MCAPI void openBannedModal();

    MCAPI void openRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCAPI void pickCustomSkin(::std::function<void(::PickCustomSkinResult)> callback) const;

    MCAPI void prepareToNavigateToGamePlayScreen();

    MCAPI bool purchaseEduLicense(::std::unique_ptr<::TransactionContext> context);

    MCAPI void pushToast(::ToastMessage message);

    MCAPI void rebindKeys();

    MCAPI void
    refreshCurrentRealmWorldInfo(::std::function<void(::Realms::GenericStatus, ::Realms::World const&)> callback);

    MCAPI void removeFromRealmsBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           xuid,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCAPI void requestPlayerPermissions(::LayeredAbilities const& abilities, ::ActorUniqueID playerId);

    MCAPI bool requiresXBLSigninToPlay() const;

    MCAPI void resetActiveDirectoryAuthenticationState();

    MCAPI void resetRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCAPI void resetRealmsWorldContext();

    MCAPI void restoreRealmWorldBackup(
        ::Realms::RealmId                              worldId,
        ::std::string                                  backupId,
        ::std::function<void(int)>                     retryCallback,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCAPI void saveLevelData(::std::string const& levelId, ::LevelData const& data);

    MCAPI void scheduleCheckUserStorageAsync();

    MCAPI void sendPurchaseReceiptsToServer();

    MCAPI void sendSettingsCommandPacket(::std::string const& command, bool supressOutput);

    MCAPI void sendTrialWelcomeMessage();

    MCAPI bool serverPermissionOpenChat() const;

    MCAPI void setActiveDirectoryAuthenticationStateComplete();

    MCAPI void setActiveDirectoryDemoVersion();

    MCAPI void setActiveSlot(
        ::Realms::RealmId                                                       worldId,
        int                                                                     slotIndex,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCAPI void setClubProfile(::Clubs::ClubModel const& model, ::std::function<void(::Clubs::GenericStatus)> callback);

    MCAPI void setEducationLocalLevelSettings(::EducationLocalLevelSettings const& settings);

    MCAPI void setIsCheckoutInProgress(bool isCheckoutInProgress);

    MCAPI void setIsInGameBrowsing(bool isInGameBrowsing);

    MCAPI void setLanguage();

    MCAPI void setLastSelectedSlot(int slot, ::ContainerID containerId);

    MCAPI void setNumberOfOwnedRealms(int number);

    MCAPI void setPlayerGameType(::GameType const& gameType);

    MCAPI void setRealmsWorldInfo(
        ::Realms::World                                                         world,
        int                                                                     difficulty,
        bool                                                                    allowCheats,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCAPI void setShareData(::std::string shareTitle, ::std::string shareText, ::std::string shareUri);

    MCAPI void setSimPaused(bool paused);

    MCAPI void setViewedFeedItem(
        ::Clubs::FeedItem const&                      activityItem,
        ::Realms::RealmId                             realmId,
        ::std::string const&                          clubId,
        bool                                          viewed,
        ::std::function<void(::Clubs::GenericStatus)> callback
    );

    MCAPI bool shouldShowThirdPartyDisconnected() const;

    MCAPI bool shouldShowVersionUpdateScreen();

    MCAPI void showFriendFinder(::std::function<void()> callback);

    MCAPI bool showSignInButton() const;

    MCAPI void showStoreFeaturesDisabledWhenSignedOutScreen();

    MCAPI void signIn(
        ::std::function<void()>                                    connectionCompleteCallback,
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> signInCompleteCallback
    );

    MCAPI void signOut(::std::function<void(::Identity::SignOutResult)> callback);

    MCAPI void silentSignin(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback
    );

    MCAPI void startExternalNetworkWorld(::std::string const& serverName, ::std::string const& ipAddress, int port);

    MCAPI void startLocalServerAsync(::LevelSummary const& levelSummary, ::LevelSettings const& levelSettings);

    MCAPI void
    startLocalServerAsync(::std::string const& levelId, ::std::string levelName, ::LevelSettings const& settings);

    MCAPI bool supportsTTSLanguage(::std::string const& languageCode) const;

    MCAPI ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>> takeScreenshotForUploading();

    MCAPI bool tryNavigateToXblImmediateSignInScreen_DEPRECATED(
        ::std::string const&    signInSource,
        ::std::function<void()> callBackAfterSignIn,
        ::std::function<void()> callBackAfterCancel
    );

    MCAPI bool updateEDUServicePackSystem() const;

    MCAPI void updateRealmsAllowList(
        ::Realms::RealmId                                               worldId,
        ::std::string const&                                            currentUserXuid,
        ::std::map<::std::string, ::RealmsAPI::InviteAction>            xuidList,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback
    );

    MCAPI bool wasSessionCreated(::Social::MultiplayerServiceIdentifier serviceID) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint& mSceneInstanceCounter();
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
    MCAPI void
    $navigateToDisconnectScreen(::Connection::DisconnectFailReason reason, ::std::string const& displayMessageOverride);

    MCAPI bool $tryNavigateToProfileScreen();

    MCAPI bool $tryNavigateToSafeZoneScreenOnFirstSignin();

    MCAPI void
    $navigateToStoreDataDrivenScreen(::StoreDataDrivenScreenParams const& params, bool forceDisableProgressScreen);

    MCAPI bool $leaveScreen(::std::string expectedScreenName, bool onlyThis);

    MCFOLD bool $isInGame() const;

    MCFOLD bool $isSelectedSkinInitialized() const;

    MCAPI ::SubClientId $getSubClientId() const;

    MCFOLD bool $platformTTSExists() const;

    MCAPI ::IDlcBatchModel& $getDlcBatchModel(::std::vector<::DlcId> const& dlcIds);

    MCAPI ::IDlcBatchModel& $getDlcBatchModel(::std::vector<::std::string> const& productIds);

    MCAPI ::IDlcBatchModel& $getDlcBatchModel(::std::vector<::PackIdVersion> const& packIds);

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> $getStoreCatalogRepository() const;

    MCFOLD float $getStoreNetworkFailureTimeout() const;

    MCAPI bool $isAdhocEnabled() const;

    MCFOLD bool $isDirty() const;

    MCAPI ::SkinHandle const& $getSelectedSkinHandle() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> $getUserManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const $getUserManager() const;

    MCAPI ::std::string const& $getLastPoppedScreenName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIMinecraftScreenModel();

    MCNAPI static void** $vftableForIDlcBatcher();
    // NOLINTEND
};
