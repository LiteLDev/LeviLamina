#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/MinecraftGameFeatures.h"
#include "mc/client/game/WebviewInterfaceType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/screens/controllers/RealmsPlusTabIndex.h"
#include "mc/client/gui/screens/models/IMinecraftScreenModel.h"
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
class ActiveDirectoryIdentity;
class ContentIdentity;
class ContentTierInfo;
class FilePickerSettings;
class HitResult;
class IOptions;
class LayeredAbilities;
class LevelData;
class LevelSettings;
class MinecraftCommands;
class PackManifest;
class ResourceLocation;
class WebviewInterface;
struct ActorUniqueID;
struct ContentLogMessage;
struct DlcId;
struct DownloadStateObject;
struct EduDeeplinkObserver;
struct EducationLevelSettings;
struct EducationLocalLevelSettings;
struct IDlcBatchModel;
struct IEDUDiscoveryService;
struct IGameConnectionListener;
struct LevelSummary;
struct PDFOptions;
struct PackIdVersion;
struct PlatformMultiplayerRestrictions;
struct PlayerAchievementData;
struct ProgressHandler;
struct Purchase;
struct RealmsAPI;
struct SkinHandle;
struct StoreCatalogRepository;
struct StoreContentSources;
struct StoreDataDrivenScreenParams;
struct ToastMessage;
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
    ::ll::UntypedStorage<8, 8>  mUnkd4f179;
    ::ll::UntypedStorage<8, 24> mUnk5898df;
    ::ll::UntypedStorage<8, 24> mUnkb8f778;
    ::ll::UntypedStorage<8, 24> mUnk93fc9a;
    ::ll::UntypedStorage<8, 16> mUnk8c29e5;
    ::ll::UntypedStorage<8, 8>  mUnk3c4539;
    ::ll::UntypedStorage<1, 1>  mUnk5cfbc7;
    ::ll::UntypedStorage<8, 8>  mUnkaaaefd;
    ::ll::UntypedStorage<4, 4>  mUnkc9ba95;
    ::ll::UntypedStorage<8, 8>  mUnkb52f29;
    ::ll::UntypedStorage<8, 8>  mUnk8c3280;
    ::ll::UntypedStorage<8, 8>  mUnkb03986;
    ::ll::UntypedStorage<8, 8>  mUnk3c6d08;
    ::ll::UntypedStorage<8, 8>  mUnk20edbb;
    ::ll::UntypedStorage<8, 16> mUnk4e8c10;
    ::ll::UntypedStorage<8, 8>  mUnkd89614;
    ::ll::UntypedStorage<8, 16> mUnk866edf;
    ::ll::UntypedStorage<8, 8>  mUnk6a6185;
    ::ll::UntypedStorage<8, 16> mUnk41aee7;
    ::ll::UntypedStorage<8, 8>  mUnk430851;
    ::ll::UntypedStorage<8, 16> mUnka056cc;
    ::ll::UntypedStorage<4, 4>  mUnk921493;
    ::ll::UntypedStorage<1, 1>  mUnke8ca16;
    ::ll::UntypedStorage<1, 1>  mUnkf47178;
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
    MCNAPI void DEPRECATED_navigateToRealmsPlusPDPScreen(
        ::RealmsPlusTabIndex                    tabIndex,
        ::std::function<void(::Realms::World&)> onCreateCallback
    );

    MCNAPI explicit MinecraftScreenModel(::MinecraftScreenModel::Context context);

    MCNAPI ::RealmsAPI& _checkAndGetRealmsAPI() const;

    MCNAPI bool _isPremium(::PackManifest const& manifest) const;

    MCNAPI bool _isPremiumLocked(::PackManifest const& manifest) const;

    MCNAPI ::Bedrock::Threading::Async<void> _queueForMainThread(::std::function<void()>&& callback);

    MCNAPI void _savePDF(::PDFOptions options, ::std::shared_ptr<::FilePickerSettings> settings);

    MCNAPI void _saveZIP(::PDFOptions options, ::std::shared_ptr<::FilePickerSettings> settings);

    MCNAPI void _startLocalServerAsync(
        ::std::string const&     levelId,
        ::std::string const&     levelName,
        ::ContentIdentity const& contentIdentity,
        ::LevelSettings const&   settings
    );

    MCNAPI void
    addDownloadCallback(::std::weak_ptr<bool> existenceTracker, ::std::function<void(::DownloadStateObject&)> callback);

    MCNAPI void addEduCredentialsObserver(::edu::auth::CredentialsObserver& observer);

    MCNAPI void addEduDeeplinkObserver(::EduDeeplinkObserver& observer) const;

    MCNAPI void addToRealmsBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           currentUserXuid,
        ::std::string const&                           xuidToBlock,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI bool canEditPermissionsEDU(::ActorUniqueID const& id);

    MCNAPI bool canManageSubscriptionForStoreId(::std::string const& storeId) const;

    MCNAPI void cancelJoinGame(::LoadingState loadingState);

    MCNAPI void checkConnectionEvents();

    MCNAPI void checkRealmsPaymentService(::std::function<void(bool)> callback);

    MCNAPI void clearContentLogMessages();

    MCNAPI void clearDevConsoleScreenMessages();

    MCNAPI void clearTTSQueue();

    MCNAPI void closeRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI void completeServerForm(uint formId, ::ModalFormCancelReason cancelReason);

    MCNAPI void completeServerForm(uint formId, ::Json::Value response);

    MCNAPI void confirmResourcePackDownload(
        ::ResourcePackResponse response,
        bool                   downloadOptionalResourcePacks,
        bool                   forceServerPacksEnabled
    );

    MCNAPI void connectToPlatformNetwork(
        ::std::function<void(::Social::UserPlatformConnectionResult)> callback,
        bool                                                          isUserInitiated
    );

    MCNAPI ::std::string copyWorld(::std::string const& worldId);

    MCNAPI void createAndUploadWorldToRealm(
        ::LevelSummary const&                  levelSummary,
        ::LevelSettings const&                 levelSettings,
        ::Realms::World                        world,
        ::std::function<void(::Realms::World)> callback
    );

    MCNAPI void createAndUploadWorldToRealm(
        ::std::string const&                   levelId,
        ::std::string                          levelName,
        ::LevelSettings const&                 settings,
        ::Realms::World                        world,
        ::std::function<void(::Realms::World)> callback
    );

    MCNAPI ::std::unique_ptr<::PlatformMultiplayerRestrictions> createPlatformMultiplayerRestrictions();

    MCNAPI void deleteAllContentLogs() const;

    MCNAPI void deleteAllDiagnosticsAndProfilerCaptures() const;

    MCNAPI void deleteAllLocalScreenshots();

    MCNAPI void deleteFeedItem(
        ::Clubs::FeedItem const&                      activityItem,
        ::Realms::RealmId                             realmId,
        ::std::string const&                          clubId,
        ::std::function<void(::Clubs::GenericStatus)> callback
    );

    MCNAPI void destroyGame();

    MCNAPI void devConsoleExecuteCommand(::std::string const& command);

    MCNAPI void displayPremiumUpsellDialogAsync(::std::function<void(bool)> callback);

    MCNAPI bool doesUserHavePremiumPlatformAccess() const;

    MCNAPI bool doesUserPlatformConnectionAllowMultiplayer() const;

    MCNAPI void fetchScreenshots(::std::vector<::Core::PathBuffer<::std::string>>& results);

    MCNAPI ::std::string filterProfanityFromString(
        ::ProfanityFilterContext stringContext,
        ::std::string const&     str,
        bool                     allowFilterOverride
    ) const;

    MCNAPI bool findProfanityInString(::ProfanityFilterContext stringContext, ::std::string const& str) const;

    MCNAPI void fireCodeBuilderCachePerformanceEvent(::CodeBuilderPerformance::Stage stage);

    MCNAPI void fireEventScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    );

    MCNAPI void fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    );

    MCNAPI void fireSignOutEdu(::std::string const& action, ::std::string const& error) const;

    MCNAPI bool
    fulfillPriorEduPurchase(::std::weak_ptr<::Purchase> purchase, ::std::unique_ptr<::TransactionContext> context);

    MCNAPI ::std::shared_ptr<::FilePickerSettings>
    generateFilePickerSettingsForAlbum(::PDFOptions const& options, ::std::string const& defaultOutName);

    MCNAPI ::std::shared_ptr<::FilePickerSettings> generateFilePickerSettingsForExport();

    MCNAPI ::std::shared_ptr<::FilePickerSettings> generateFilePickerSettingsForExport(
        ::std::string const&       levelId,
        ::std::string const&       levelName,
        ::FileArchiver::ExportType type
    );

    MCNAPI ::PlayerAchievementData const& getAchievementData() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity const> getActiveDirectoryIdentity();

    MCNAPI ::std::string getBuildDateISOString() const;

    MCNAPI void getClubFeed(
        ::std::string const&                                                 clubID,
        ::std::function<void(::Clubs::ActivityFeed, ::Clubs::GenericStatus)> callback
    );

    MCNAPI void getClubProfile(
        ::std::string const&                                              clubId,
        ::std::function<void(::Clubs::ClubModel, ::Clubs::GenericStatus)> callback
    );

    MCNAPI void
    getClubUnreadCount(::std::string const& clubId, ::std::function<void(int, ::Clubs::GenericStatus)> callback);

    MCNAPI void getClubUnreadCounts(
        ::std::vector<::std::string> const&                                           clubIds,
        ::std::function<void(::std::map<::std::string, int>, ::Clubs::GenericStatus)> callback
    );

    MCNAPI ::MinecraftCommands& getCommands();

    MCNAPI ::std::vector<::ContentLogMessage> const& getContentLogMessages() const;

    MCNAPI ::ContentTierInfo getContentTierInfo() const;

    MCNAPI ::Realms::World& getCurrentRealm();

    MCNAPI ::std::string getCurrentXUID() const;

    MCNAPI ::SkinHandle getCustomSkinHandle(::DefaultSkin skinType) const;

    MCNAPI int getCustomSkinIndex() const;

    MCNAPI ::WireframeQueue* getDimensionWireframeQueue();

    MCNAPI ::std::string getDisplayName() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> getEDUCloudSaveSystem() const;

    MCNAPI ::IEDUDiscoveryService& getEDUDiscoveryService();

    MCNAPI float getEDUServicePackProgress() const;

    MCNAPI ::std::string getEduOfferPrice();

    MCNAPI ::EducationLevelSettings const* getEducationLevelSettings() const;

    MCNAPI ::std::optional<::Social::GameConnectionInfo> getGameConnectionInfo();

    MCNAPI ::IGameConnectionListener const& getGameConnectionListener();

    MCNAPI ::HitResult& getHitResult() const;

    MCNAPI int getHotbarSlotCount() const;

    MCNAPI ::ResourceLocation const& getImageLocationFromImageRepository(::std::string const& imageName) const;

    MCNAPI bool getIsWaitingForSession() const;

    MCNAPI ::LevelData* getLevelData();

    MCNAPI ::LevelData* getLevelData(::std::string const& levelID);

    MCNAPI void getLinkedPlatformIds(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 xuids
    ) const;

    MCNAPI void getLinkedXuids(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 platformIds
    ) const;

    MCNAPI ::ActorUniqueID getLocalPlayerEntityID() const;

    MCNAPI ::std::string getLocalizedStoreDisplayName(::std::string const& storeId);

    MCNAPI ::std::string getMarketplacePassPrice(::std::string const& productSku, ::std::string const& caymanId) const;

    MCNAPI uint getMaxPlatformInvitablePlayers() const;

    MCNAPI ::std::string getNetworkInfoStringInGame() const;

    MCNAPI bool getNewJukeboxPopupItemText(::std::string& newText, bool& isCreative);

    MCNAPI bool getNewPopupItemText(::std::string& newText, bool& isCreative);

    MCNAPI ::SDL::SubscriptionInfo const& getNextAvailableSubscriptionInfo() const;

    MCNAPI ::IOptions& getOptions() const;

    MCNAPI ::std::shared_ptr<::WebviewInterface> getOrCreateWebviewInterface(::WebviewInterfaceType interfaceType);

    MCNAPI void
    getPlatformFriendProfiles(::std::function<void(::std::vector<::Social::PlatformUserProfileData> const&)> callback);

    MCNAPI void getPlatformProfile(
        ::std::string const&                                      platformId,
        ::std::function<void(::Social::PlatformUserProfileData&)> callback
    );

    MCNAPI short getPointerX() const;

    MCNAPI short getPointerY() const;

    MCNAPI void getProfiles(
        ::std::vector<::std::string> const&                                                   xuids,
        ::std::function<void(::std::vector<::Social::XboxLiveUserProfileData const*> const&)> batchedCollectionCallback
    );

    MCNAPI ::std::string getRandomSearchTermUsingCategory(::StoreCatalogCategory const& category) const;

    MCNAPI void getRealmWorldBackups(
        ::Realms::RealmId                                                               worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Backup>)> callback
    );

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService> getRealmsInvitesService();

    MCNAPI void getRealmsWorld(
        ::Realms::RealmId                                               worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback,
        bool                                                            userWaiting
    );

    MCNAPI ::std::shared_ptr<::Realms::WorldCache> getRealmsWorldCache();

    MCNAPI ::Realms::World getRealmsWorldContextWorld() const;

    MCNAPI void getReportedFeedItem(
        ::Clubs::ReportedItem const&                                                                   reportedItem,
        ::std::function<void(::Clubs::ReportedItem const&, ::Clubs::FeedItem, ::Clubs::GenericStatus)> callback
    );

    MCNAPI void getReportedItemPaths(
        ::std::string const&                                                                clubId,
        ::std::function<void(::std::vector<::Clubs::ReportedItem>, ::Clubs::GenericStatus)> callback
    );

    MCNAPI ::std::string getScreenName() const;

    MCNAPI ::std::string getScreenTelemetry() const;

    MCNAPI ::Core::PathBuffer<::std::string> getScreenshotPath() const;

    MCNAPI ::std::vector<::StoreFilter::FilterCollectionInfo> const& getSessionConfigFilterCollections() const;

    MCNAPI ::std::string getSessionConfigKnownPageKeyValue(::std::string const& pageId) const;

    MCNAPI bool getSimPaused() const;

    MCNAPI ::std::string getSplitscreenJoinText() const;

    MCNAPI ::StoreContentSources getStoreContentSources() const;

    MCNAPI bool getStoreHasRealmsProducts() const;

    MCNAPI ::std::string getStoreId() const;

    MCNAPI ::SDL::SubscriptionInfo const& getSubscriptionFullPriceInfo() const;

    MCNAPI void getThirdPartyDisplayPicture(
        ::std::string const&                       playerId,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       isLocal
    );

    MCNAPI bool getTipText(::std::string& text);

    MCNAPI void getUserMemberOfWorldsCount(::std::function<void(::Realms::GenericStatus, bool)> callback);

    MCNAPI ::std::vector<::std::string> getUuidsInLobby() const;

    MCNAPI ::std::string getVersionString() const;

    MCNAPI ::std::shared_ptr<::WebviewInterface> getWebviewInterface(::WebviewInterfaceType interfaceType);

    MCNAPI ::std::string getWorldConverterDevVersionNumberString() const;

    MCNAPI ::LoadingState getWorldLoadingState() const;

    MCNAPI ::PurchaseResult goToExternalPlatformOffer(
        ::std::string const&             offerId,
        ::std::function<void(bool)>      finishedExternalCoinPurchase,
        ::std::function<void(bool, int)> boughtEnoughCoinsCallback
    );

    MCNAPI bool hasExternalCoinPurchases() const;

    MCNAPI bool hasInteractButton() const;

    MCNAPI bool hasLocalDeviceEntitlements() const;

    MCNAPI bool hasPlatformIcons() const;

    MCNAPI bool hasPlatformProfileCards() const;

    MCNAPI void ignoreReportedFeedItem(
        ::Clubs::ReportedItem const&                  activityItem,
        ::std::string const&                          reason,
        ::std::string const&                          clubId,
        ::std::function<void(::Clubs::GenericStatus)> callback
    );

    MCNAPI void initializeRealmsWorld(
        ::Realms::RealmId                                                       worldId,
        ::std::string const&                                                    name,
        ::std::string const&                                                    description,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI bool isBanned() const;

    MCNAPI bool isCreative() const;

    MCNAPI bool isCrossPlatformPlayEnabled() const;

    MCNAPI bool isDeviceBeingSunset() const;

    MCNAPI bool isDeviceSunset() const;

    MCNAPI bool isDisconnectedFromNEX() const;

    MCNAPI bool isDisconnectedFromPSN() const;

    MCNAPI bool isEditorModeEnabled() const;

    MCNAPI bool isEduDemo();

    MCNAPI bool isEduMode() const;

    MCNAPI bool isFeatureEnabled(::MinecraftGameFeatures feature) const;

    MCNAPI bool isHotbarOnlyTouch() const;

    MCNAPI bool isInputModeTouch() const;

    MCNAPI bool isInviteEnabled(::Social::MultiplayerServiceIdentifier serviceIdentifier) const;

    MCNAPI bool isLeftHanded() const;

    MCNAPI ::Social::PermissionCheckResult isMultiplayerAllowed() const;

    MCNAPI bool isNetworkAvailable() const;

    MCNAPI bool isOnSceneStack(::std::string const& screenName);

    MCNAPI bool isOperator() const;

    MCNAPI bool isOreUIModerationEnabled() const;

    MCNAPI bool isPlatformInviteEnabled() const;

    MCNAPI bool isPlatformThirdPartyConsole() const;

    MCNAPI bool isPremiumOwnedMissing(::PackIdVersion const& id, ::ContentIdentity const& contentIdentity) const;

    MCNAPI bool isPremiumPlatformAccessRequiredForMatchmaking() const;

    MCNAPI bool isRealmLevel() const;

    MCNAPI bool isRealmOwner() const;

    MCNAPI bool isRealmsEditWorldOreUIFeatureOn() const;

    MCNAPI bool isRealmsEnabled() const;

    MCNAPI bool isRealmsInitialized() const;

    MCNAPI bool isResourceLoadingFinished() const;

    MCNAPI bool isRiding() const;

    MCNAPI bool isServiceMultiplayerEnabled(::Social::MultiplayerServiceIdentifier serviceID) const;

    MCNAPI bool isServicesLocalizationReady() const;

    MCNAPI bool isSessionConfigAndLocalizationReady() const;

    MCNAPI bool isSessionConfigRetrievalDelayed() const;

    MCNAPI bool isSessionInfoValid(::Social::MultiplayerServiceIdentifier serviceID) const;

    MCNAPI bool isSignInInProgress() const;

    MCNAPI bool isSignedInToAdhoc() const;

    MCNAPI bool isSignedInToNEX() const;

    MCNAPI bool isSignedInToPSN() const;

    MCNAPI bool isSignedInToPlayFabOfflineAndNetworkDisconnected() const;

    MCNAPI bool isSignedInToPlayfab() const;

    MCNAPI bool isSignedInToXBL() const;

    MCNAPI bool isUITTSEnabled() const;

    MCNAPI bool isUnableToShowXBLLogo() const;

    MCNAPI bool isValidRealmName(::std::string name);

    MCNAPI void joinEDUDiscoveredWorld();

    MCNAPI void joinRealmFromInvite(::Realms::World world);

    MCNAPI void joinRealmsWorld(
        ::Realms::World                                                  world,
        ::std::function<void(::Social::GameConnectionInfo const&, bool)> successCallback,
        ::std::function<void(::Realms::GenericStatus, ::RealmsAPI::JoinStatus, ::Realms::FailureReason)> failCallback,
        ::std::function<void(int)>                                                                       retryCallback,
        ::IMinecraftEventing::RealmConnectionFlow                        realmConnectionFlow,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow)> broadcastConnectionEventRealmsRequestFunction,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow, ::Bedrock::Http::StatusCode)>
            broadcastConnectionEventRealmsResponseFunction
    );

    MCNAPI void launchEduUri(::std::string const& baseUrl);

    MCNAPI bool launchManageSubscriptions();

    MCNAPI bool launchStore();

    MCNAPI void launchUri(::std::string const& uri);

    MCNAPI void launchUserGeneratedUri(::std::string const& uri, ::UserGeneratedUriSource source, bool recordEvent);

    MCNAPI void leaveRealmsWorld(::Realms::RealmId worldId, ::std::function<void(::Realms::GenericStatus)> callback);

    MCNAPI void loadStoreDataDrivenScreenFromSidebar(::StoreDataDrivenScreenParams& params);

    MCNAPI void makeBackupOfLevel(::LevelSummary const& editedLevel);

    MCNAPI bool multiplayerLostConnectionToSignalingService() const;

    MCNAPI void navigateToControlCustomizationScreen();

    MCNAPI void navigateToDevConsole();

    MCNAPI void navigateToEduHomeScreen();

    MCNAPI void navigateToFeedScreen(::Realms::World const& world);

    MCNAPI void navigateToFeedbackPopup();

    MCNAPI void navigateToInviteScreen();

    MCNAPI void navigateToModalProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 forceRenderBelow,
        ::std::string const&                 screenNameOverride,
        bool                                 isCancellable
    );

    MCNAPI void navigateToOptionsScreen(
        ::SettingsTabIndex   startingTabIndex,
        bool                 navToMenuOnExit,
        bool                 maintainOldFocus,
        ::std::string const& initialPackId
    );

    MCNAPI void navigateToPlatformNetworkConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCNAPI void navigateToPlatformStoreConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCNAPI void navigateToRealmsSlotSettingsScreen(::Realms::World const& world);

    MCNAPI void navigateToRealmsSlotsScreen(::Realms::World const& worldWithoutSlotInfo);

    MCNAPI void navigateToSkinPickerScreen();

    MCNAPI void navigateToStartScreen();

    MCNAPI void navigateToStoreHomeScreen(::std::string const& title);

    MCNAPI void navigateToTokenFAQScreen();

    MCNAPI void navigateToTokenPopupScreen();

    MCNAPI void navigateToUpdateWorldHeightScreen(::std::function<void(bool)> startWorldCallback);

    MCNAPI bool needPlatformConnectionBeforeXBLSignIn() const;

    MCNAPI bool needPlatformConnectionForSplitScreenMultiplayer() const;

    MCNAPI void openBannedModal();

    MCNAPI void openRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI void pickCustomSkin(::std::function<void(::PickCustomSkinResult)> callback) const;

    MCNAPI void prepareToNavigateToGamePlayScreen();

    MCNAPI bool purchaseEduLicense(::std::unique_ptr<::TransactionContext> context);

    MCNAPI void pushToast(::ToastMessage message);

    MCNAPI void rebindKeys();

    MCNAPI void
    refreshCurrentRealmWorldInfo(::std::function<void(::Realms::GenericStatus, ::Realms::World const&)> callback);

    MCNAPI void removeFromRealmsBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           xuid,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI void requestPlayerPermissions(::LayeredAbilities const& abilities, ::ActorUniqueID playerId);

    MCNAPI bool requiresXBLSigninToPlay() const;

    MCNAPI void resetActiveDirectoryAuthenticationState();

    MCNAPI void resetRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI void resetRealmsWorldContext();

    MCNAPI void restoreRealmWorldBackup(
        ::Realms::RealmId                              worldId,
        ::std::string                                  backupId,
        ::std::function<void(int)>                     retryCallback,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI void saveLevelData(::std::string const& levelId, ::LevelData const& data);

    MCNAPI void scheduleCheckUserStorageAsync();

    MCNAPI void sendPurchaseReceiptsToServer();

    MCNAPI void sendSettingsCommandPacket(::std::string const& command, bool supressOutput);

    MCNAPI void sendTrialWelcomeMessage();

    MCNAPI bool serverPermissionOpenChat() const;

    MCNAPI void setActiveDirectoryAuthenticationStateComplete();

    MCNAPI void setActiveDirectoryDemoVersion();

    MCNAPI void setActiveSlot(
        ::Realms::RealmId                                                       worldId,
        int                                                                     slotIndex,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI void setClubProfile(::Clubs::ClubModel const& model, ::std::function<void(::Clubs::GenericStatus)> callback);

    MCNAPI void setEducationLocalLevelSettings(::EducationLocalLevelSettings const& settings);

    MCNAPI void setIsCheckoutInProgress(bool isCheckoutInProgress);

    MCNAPI void setIsInGameBrowsing(bool isInGameBrowsing);

    MCNAPI void setLanguage();

    MCNAPI void setLastSelectedSlot(int slot, ::ContainerID containerId);

    MCNAPI void setNumberOfOwnedRealms(int number);

    MCNAPI void setPlayerGameType(::GameType const& gameType);

    MCNAPI void setRealmsWorldInfo(
        ::Realms::World                                                         world,
        int                                                                     difficulty,
        bool                                                                    allowCheats,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI void setShareData(::std::string shareTitle, ::std::string shareText, ::std::string shareUri);

    MCNAPI void setSimPaused(bool paused);

    MCNAPI void setViewedFeedItem(
        ::Clubs::FeedItem const&                      activityItem,
        ::Realms::RealmId                             realmId,
        ::std::string const&                          clubId,
        bool                                          viewed,
        ::std::function<void(::Clubs::GenericStatus)> callback
    );

    MCNAPI bool shouldShowThirdPartyDisconnected() const;

    MCNAPI bool shouldShowVersionUpdateScreen();

    MCNAPI void showFriendFinder(::std::function<void()> callback);

    MCNAPI bool showSignInButton() const;

    MCNAPI void showStoreFeaturesDisabledWhenSignedOutScreen();

    MCNAPI void signIn(
        ::std::function<void()>                                    connectionCompleteCallback,
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> signInCompleteCallback
    );

    MCNAPI void signOut(::std::function<void(::Identity::SignOutResult)> callback);

    MCNAPI void silentSignin(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback
    );

    MCNAPI void startExternalNetworkWorld(::std::string const& serverName, ::std::string const& ipAddress, int port);

    MCNAPI void startLocalServerAsync(::LevelSummary const& levelSummary, ::LevelSettings const& levelSettings);

    MCNAPI void
    startLocalServerAsync(::std::string const& levelId, ::std::string levelName, ::LevelSettings const& settings);

    MCNAPI bool supportsTTSLanguage(::std::string const& languageCode) const;

    MCNAPI ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>> takeScreenshotForUploading();

    MCNAPI bool tryNavigateToXblImmediateSignInScreen_DEPRECATED(
        ::std::string const&    signInSource,
        ::std::function<void()> callBackAfterSignIn,
        ::std::function<void()> callBackAfterCancel
    );

    MCNAPI bool updateEDUServicePackSystem() const;

    MCNAPI void updateRealmsAllowList(
        ::Realms::RealmId                                               worldId,
        ::std::string const&                                            currentUserXuid,
        ::std::map<::std::string, ::RealmsAPI::InviteAction>            xuidList,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback
    );

    MCNAPI bool wasSessionCreated(::Social::MultiplayerServiceIdentifier serviceID) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint& mSceneInstanceCounter();
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
    MCNAPI void
    $navigateToDisconnectScreen(::Connection::DisconnectFailReason reason, ::std::string const& displayMessageOverride);

    MCNAPI bool $tryNavigateToProfileScreen();

    MCNAPI bool $tryNavigateToSafeZoneScreenOnFirstSignin();

    MCNAPI void
    $navigateToStoreDataDrivenScreen(::StoreDataDrivenScreenParams const& params, bool forceDisableProgressScreen);

    MCNAPI bool $leaveScreen(::std::string expectedScreenName, bool onlyThis);

    MCNAPI bool $isInGame() const;

    MCNAPI bool $isSelectedSkinInitialized() const;

    MCNAPI ::SubClientId $getSubClientId() const;

    MCNAPI bool $platformTTSExists() const;

    MCNAPI ::IDlcBatchModel& $getDlcBatchModel(::std::vector<::DlcId> const& dlcIds);

    MCNAPI ::IDlcBatchModel& $getDlcBatchModel(::std::vector<::std::string> const& productIds);

    MCNAPI ::IDlcBatchModel& $getDlcBatchModel(::std::vector<::PackIdVersion> const& packIds);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> $getStoreCatalogRepository() const;

    MCNAPI float $getStoreNetworkFailureTimeout() const;

    MCNAPI bool $isAdhocEnabled() const;

    MCNAPI bool $isDirty() const;

    MCNAPI ::SkinHandle const& $getSelectedSkinHandle() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> $getUserManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const $getUserManager() const;

    MCNAPI ::std::string const& $getLastPoppedScreenName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIMinecraftScreenModel();

    MCNAPI static void** $vftableForIDlcBatcher();
    // NOLINTEND
};
