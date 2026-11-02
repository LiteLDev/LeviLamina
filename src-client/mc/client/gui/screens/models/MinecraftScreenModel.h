#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/MinecraftGameFeatures.h"
#include "mc/client/game/WebviewInterfaceType.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/screens/SelectWorldResult.h"
#include "mc/client/gui/screens/controllers/CreditsType.h"
#include "mc/client/gui/screens/models/IMinecraftScreenModel.h"
#include "mc/client/gui/screens/models/PlatformStoreIconModel.h"
#include "mc/client/input/ButtonIndiciesEnum.h"
#include "mc/client/input/IconSize.h"
#include "mc/client/input/TriggerIndiciesEnum.h"
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/persona/defaults/DefaultSkinType.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/services/download/IDlcBatcher.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/client/store/commerce/PurchaseResult.h"
#include "mc/client/store/iap/StorePreviewVersion.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/ClipboardFeatureFlags.h"
#include "mc/deps/code_builder/CodeBuilderPerformance.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/UserGeneratedUriSource.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/network/packet/ModalFormCancelReason.h"
#include "mc/network/packet/ResourcePackResponse.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/level/FileArchiver.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ActiveDirectoryIdentity;
class Actor;
class ClientInstanceModel;
class ContentIdentity;
class ContentTierInfo;
class DimensionHeightRange;
class DlcId;
class EduDeeplinkObserver;
class FileDataRequest;
class FilePickerSettings;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IContentManager;
class IDlcBatchModel;
class IEduDiscoveryService;
class IGameConnectionListener;
class ILayoutServiceProvider;
class IMinecraftGame;
class INetworkGameConnector;
class ISceneStack;
class IScreenCapabilities;
class LevelData;
class LevelSettings;
class MinecraftCommands;
class PackManifest;
class PlatformMultiplayerRestrictions;
class PlatformUpsellDialog;
class PlayerAchievementData;
class PlayerListEntry;
class ProgressHandler;
class PropertyBag;
class ResourcePackManager;
class SceneFactory;
class SkinHandle;
class SkinPackCollectionModel;
class StoreCatalogRepository;
class TaskGroup;
class TransactionContext;
class WebviewInterface;
class WireframeQueue;
struct ActorUniqueID;
struct ContentItem;
struct ContentLogMessage;
struct DownloadStateObject;
struct EduPurchaseDetails;
struct EducationLevelSettings;
struct LevelSummary;
struct MinecraftScreenModelContext;
struct PDFOptions;
struct PackIdVersion;
struct Purchase;
struct StoreContentSources;
struct StoreDataDrivenScreenParams;
struct SubscriptionOffer;
namespace Bedrock::Http { class Status; }
namespace Clubs { struct ClubModel; }
namespace Core { class Path; }
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Identity { struct SignOutResult; }
namespace Invites { struct Invite; }
namespace Invites { struct InviteId; }
namespace Json { class Value; }
namespace Realms { class InvitesService; }
namespace Realms { struct ConfigInfo; }
namespace Realms { struct InviteLink; }
namespace Realms { struct Player; }
namespace Realms { struct RealmId; }
namespace Realms { struct ServerRegion; }
namespace Realms { struct World; }
namespace Realms { struct WorldBackupList; }
namespace Realms::Service { class IRealmsInviteLinksDomain; }
namespace Social { class FriendList; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { struct MultiIdentitySigninResult; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct UserLinkedAccountsInfo; }
namespace Social { struct XUID; }
namespace Social { struct XboxLiveUserProfileData; }
namespace edu::auth { struct CredentialsObserver; }
namespace mce { class UUID; }
// clang-format on

class MinecraftScreenModel : public ::IMinecraftScreenModel,
                             public ::IDlcBatcher,
                             public ::std::enable_shared_from_this<::MinecraftScreenModel> {
public:
    // MinecraftScreenModel inner types define
    enum class FriendsDrawerLocation : int {
        MainMenu   = 0,
        InGameMenu = 1,
    };

    using Context = ::MinecraftScreenModelContext;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                          mMinecraft;
    ::ll::TypedStorage<8, 8, ::ILayoutServiceProvider&>                                  mLayoutServiceProvider;
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

    virtual void prepareToNavigateToGamePlayScreen() /*override*/;

    virtual void navigateToGamePlayScreen() /*override*/;

    virtual bool tryNavigateToProfileScreen() /*override*/;

    virtual bool tryNavigateToSafeZoneScreenOnFirstSignin() /*override*/;

    virtual void navigateToStoreDataDrivenScreen(
        ::StoreDataDrivenScreenParams const& params,
        bool                                 forceDisableProgressScreen
    ) /*override*/;

    virtual bool leaveScreen(::std::string expectedScreenName, bool onlyThis) /*override*/;

    virtual void popScreensBackTo(::ui::SceneType const sceneType) /*override*/;

    virtual bool isLeaveGameDone() const /*override*/;

    virtual void requestLeaveGame(bool switchScreen, bool sync) /*override*/;

    virtual void destroyGame() /*override*/;

    virtual bool isInGame() const /*override*/;

    virtual bool isSelectedSkinInitialized() const;

    virtual ::SubClientId getSubClientId() const /*override*/;

    virtual bool platformTTSExists() const;

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::DlcId> const& dlcIds) /*override*/;

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::std::string> const& productIds) /*override*/;

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::PackIdVersion> const& packIds) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() const;

    virtual float getStoreNetworkFailureTimeout() const;

    virtual bool isAdhocEnabled() const;

    virtual bool isUserReady() const /*override*/;

    virtual bool isDirty() const;

    virtual ::ResourcePackManager& getResourcePackManager() const /*override*/;

    virtual ::SkinHandle const& getSelectedSkinHandle() const;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const getUserManager() const /*override*/;

    virtual ::std::string const& getLastPoppedScreenName() const;

    virtual ::INetworkGameConnector& getNetworkGameConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftScreenModel(::MinecraftScreenModelContext context);

    MCNAPI bool _isPremium(::PackManifest const& manifest) const;

    MCNAPI bool _isPremiumLocked(::PackManifest const& manifest) const;

    MCNAPI bool _isRealmsPlus(::PackManifest const& manifest) const;

    MCNAPI ::Bedrock::Threading::Async<void> _queueForMainThread(::std::function<void()>&& callback);

    MCNAPI void
    _sendResourcePackClientResponse(::ResourcePackResponse response, ::std::set<::std::string>* downloadingPacks);

    MCNAPI void _startLocalServerAsync(
        ::std::string const&     levelId,
        ::std::string const&     levelName,
        ::ContentIdentity const& contentIdentity,
        ::LevelSettings const&   settings
    );

    MCNAPI void acceptRealmsInvite(
        ::Invites::InviteId                                                     invite,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI void acceptRealmsLink(
        ::std::string                                                                            realmInvite,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason, ::Realms::World)> callback
    );

    MCNAPI void acknowledgePartyDestinationCookie(bool accepted);

    MCNAPI void activateNewPreviewRealm(
        ::Realms::RealmId                                                 worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::RealmId)> callback
    );

    MCNAPI void
    addDownloadCallback(::std::weak_ptr<bool> existenceTracker, ::std::function<void(::DownloadStateObject&)> callback);

    MCNAPI void addEduCredentialsObserver(::edu::auth::CredentialsObserver& observer);

    MCNAPI void addEduDeeplinkObserver(::EduDeeplinkObserver& observer) const;

    MCNAPI bool addExternalServer(::std::string const& name, ::std::string const& address, int port);

    MCNAPI void addToRealmsBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           currentUserXuid,
        ::std::string const&                           xuidToBlock,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI bool allowBetaXblSignIn() const;

    MCNAPI bool arePersonaAppearancesLoading() const;

    MCNAPI bool canEditPermissionsEdu(::ActorUniqueID const& id);

    MCNAPI bool canLaunchUri(::std::string const& uri);

    MCNAPI bool canManageSubscriptionForStoreId(::std::string const& storeId) const;

    MCNAPI bool canUserDoActionForCurrentRealm(::Realms::PlayerRoleActions action) const;

    MCNAPI bool canUserDoRealmRoleAction(::Realms::World const& realmWorld, ::Realms::PlayerRoleActions action) const;

    MCNAPI void cancelEduServicePackDownload(::std::string const& cancelReason) const;

    MCNAPI void checkConnectionEvents();

    MCNAPI void checkPremiumPlatformAccessAsync(::std::function<void(bool)> callback);

    MCNAPI void checkRealmsPaymentService(::std::function<void(bool)> callback);

    MCNAPI void clearContentLogMessages();

    MCNAPI void clearDevConsoleScreenMessages();

    MCNAPI void clearEditorPlaytestRoundtripInfo() const;

    MCNAPI void closeRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI void clubNameVetting(
        ::std::string const&                                                    name,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
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

    MCNAPI bool continueResourcePackDownloadAfterCDNFailure();

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

    MCNAPI void deleteRealm(::Realms::RealmId worldId, ::std::function<void(::Realms::GenericStatus)> callback);

    MCNAPI void devConsoleExecuteCommand(::std::string const& command);

    MCNAPI void displayPremiumUpsellDialogAsync(::std::function<void(bool)> callback);

    MCNAPI bool doesUserHavePremiumPlatformAccess() const;

    MCNAPI bool
    editExternalServer(int id, ::std::string const& name, ::std::string const& address, int port, bool updateTimeStamp);

    MCNAPI void
    fetchRealmsWorlds(::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::World>)> callback);

    MCNAPI void fetchScreenshots(::std::vector<::Core::PathBuffer<::std::string>>& results);

    MCNAPI ::std::string filterProfanityFromString(
        ::ProfanityFilterContext stringContext,
        ::std::string const&     str,
        bool                     allowFilterOverride
    ) const;

    MCNAPI bool findProfanityInString(::ProfanityFilterContext stringContext, ::std::string const& str) const;

    MCNAPI void fireCodeBuilderCachePerformanceEvent(::CodeBuilderPerformance::Stage stage);

    MCNAPI void fireEventAdhocNetworkEnabled() const;

    MCNAPI void fireEventInventoryOpened(bool workbench);

    MCNAPI void fireEventScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    );

    MCNAPI void firePackSettingsEvent(
        ::PackManifest const& manifest,
        ::std::string         serializedPackSettings,
        int                   subpackIndex,
        ::std::string const&  subpackName,
        int                   subpackCount
    );

    MCNAPI void fireSignOutEdu(::std::string const& action, ::std::string const& error) const;

    MCNAPI void fireSwitchAccountEdu() const;

    MCNAPI void flushQueuedDevConsoleMessages();

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

    MCNAPI uint64 getActiveDownloadOrImportCount() const;

    MCNAPI void getAllInviteLinks(
        ::Realms::RealmId                                                                   worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::InviteLink>)> callback
    );

    MCNAPI bool getBlankLineDismissesChat() const;

    MCNAPI ::std::string getBuildDateISOString() const;

    MCNAPI ::BuildPlatform getBuildPlatform() const;

    MCNAPI ::std::string getButtonTexture(::TriggerIndiciesEnum trigger);

    MCNAPI ::std::string getButtonTexture(::ButtonIndiciesEnum button, ::IconSize iconSize, bool checkButtonSwap);

    MCNAPI ::ClipboardFeatureFlags getClipboardFeatures() const;

    MCNAPI void getClubProfile(
        ::std::string const&                                              clubId,
        ::std::function<void(::Clubs::ClubModel, ::Clubs::GenericStatus)> callback
    );

    MCNAPI void
    getClubUnreadCount(::std::string const& clubId, ::std::function<void(int, ::Clubs::GenericStatus)> callback);

    MCNAPI ::MinecraftCommands& getCommands();

    MCNAPI ::std::vector<::ContentLogMessage> const& getContentLogMessages() const;

    MCNAPI ::ContentTierInfo getContentTierInfo() const;

    MCNAPI ::Realms::World& getCurrentRealm();

    MCNAPI ::std::string getCurrentXUID() const;

    MCNAPI ::SkinHandle getCustomSkinHandle(::persona::DefaultSkinType skinType) const;

    MCNAPI ::std::vector<::std::string> const& getDevConsoleScreenMessages();

    MCNAPI ::std::string getDevelopmentVersionString() const;

    MCNAPI ::DimensionHeightRange getDimensionHeightRange() const;

    MCNAPI ::WireframeQueue* getDimensionWireframeQueue();

    MCNAPI ::std::string getDisplayName() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> getEduCloudSaveSystem() const;

    MCNAPI ::IEduDiscoveryService& getEduDiscoveryService();

    MCNAPI ::std::string getEduOfferPrice();

    MCNAPI float getEduServicePackProgress() const;

    MCNAPI ::EducationLevelSettings const* getEducationLevelSettings() const;

    MCNAPI ::std::tuple<::std::string, ::std::string, int> getExternalServerInfo(int id);

    MCNAPI ::std::optional<::Social::GameConnectionInfo> getGameConnectionInfo();

    MCNAPI ::IGameConnectionListener const& getGameConnectionListener();

    MCNAPI ::std::string getIpAddress() const;

    MCNAPI bool getIsWaitingForSession() const;

    MCNAPI ::std::string const& getLastContentLogMessage() const;

    MCNAPI ::std::string const& getLastDevConsoleMessage();

    MCNAPI ::LevelData const* getLevelData() const;

    MCNAPI ::LevelData* getLevelData();

    MCNAPI ::Bedrock::Threading::Async<::std::vector<::Social::UserLinkedAccountsInfo>>
    getLinkedAccountsFromPSNs(::std::vector<::std::string> const& platformIds) const;

    MCNAPI ::Bedrock::Threading::Async<::std::vector<::Social::UserLinkedAccountsInfo>>
    getLinkedAccountsFromXUIDs(::std::vector<::Social::XUID> const& xuids) const;

    MCAPI float getLoadingProgress();

    MCNAPI ::mce::UUID getLocalPlayerUUID();

    MCNAPI ::std::string const getMarketplaceDisabledReason() const;

    MCNAPI ::std::string getMarketplacePassPrice(::std::string const& productSku, ::std::string const& caymanId) const;

    MCNAPI uint getMaxPlatformInvitablePlayers() const;

    MCNAPI uint getMaxSimRadiusInChunks() const;

    MCNAPI ::std::string getMinecraftAccountID() const;

    MCNAPI ::std::string getNetworkInfoStringInGame() const;

    MCNAPI bool getNewJukeboxPopupItemText(::std::string& newText, bool& isCreative);

    MCNAPI bool getNewPopupItemText(::std::string& newText, bool& isCreative);

    MCNAPI ::std::optional<::SubscriptionOffer> getNextAvailableSubscriptionInfo() const;

    MCNAPI ::Bedrock::PubSub::Connector<
        void(::PlayerListEntry const&, ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&)>&
    getOnPlayerListEntryRemovedConnector() const;

    MCNAPI ::std::shared_ptr<::WebviewInterface> getOrCreateWebviewInterface(::WebviewInterfaceType interfaceType);

    MCNAPI ::std::string getPlatformAppropriateSubscriptionLocString(::std::string locString, bool isForRealms) const;

    MCNAPI void
    getPlatformFriendProfiles(::std::function<void(::std::vector<::Social::PlatformUserProfileData> const&)> callback);

    MCNAPI void getPlatformProfile(
        ::std::string const&                                      platformId,
        ::std::function<void(::Social::PlatformUserProfileData&)> callback
    );

    MCNAPI ::GameType getPlayerGameType() const;

    MCNAPI ::std::string getPlayerName() const;

    MCNAPI short getPointerX() const;

    MCNAPI short getPointerY() const;

    MCNAPI void
    getPreferredRegions(::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::ServerRegion>)> callback);

    MCNAPI ::std::string getPriceDisclaimerText() const;

    MCNAPI ::std::pair<::std::string, bool> const getPrivilegesBlockedString(
        ::Social::PermissionCheckResult const& reason,
        ::std::string const&                   needXBLGold,
        ::std::string const&                   specificPrivilege,
        ::std::string const&                   platformRestriction,
        ::std::string const&                   noInternetConnection,
        ::std::string const&                   unknownError
    ) const;

    MCNAPI void getProfiles(
        ::std::vector<::std::string> const&                                                   xuids,
        ::std::function<void(::std::vector<::Social::XboxLiveUserProfileData const*> const&)> batchedCollectionCallback
    );

    MCNAPI void getRealmWorldBackupList(
        ::Realms::RealmId                                                         worldId,
        int                                                                       slotIndex,
        ::std::function<void(::Realms::GenericStatus, ::Realms::WorldBackupList)> callback
    );

    MCNAPI void getRealmsBlocklist(
        ::Realms::RealmId                                                            worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::std::string>)> callback
    );

    MCNAPI void getRealmsConfigDetails(
        ::Realms::RealmId                                                    worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::ConfigInfo)> callback
    );

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::Service::IRealmsInviteLinksDomain> getRealmsInviteLinksDomain();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService> getRealmsInvitesService();

    MCNAPI void getRealmsMembers(
        ::Realms::RealmId                                                               worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Player>)> callback
    );

    MCNAPI void
    getRealmsOnlinePlayers(::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::World>)> callback);

    MCNAPI void getRealmsWorld(
        ::Realms::RealmId                                               worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback,
        bool                                                            userWaiting
    );

    MCNAPI ::Realms::World getRealmsWorldContextWorld() const;

    MCNAPI float getResourcePackDownloadProgress(::std::string& message) const;

    MCNAPI ::std::string getScreenName() const;

    MCNAPI ::std::string getScreenTelemetry() const;

    MCNAPI ::std::string const& getServerSettingsData();

    MCNAPI uint getServerSettingsId();

    MCNAPI ::std::string getSessionConfigKnownPageKeyValue(::std::string const& pageId) const;

    MCNAPI bool getSimPaused() const;

    MCNAPI ::std::string getSplitscreenJoinText() const;

    MCNAPI ::StoreContentSources getStoreContentSources() const;

    MCNAPI ::std::string getStoreDocumentId() const;

    MCNAPI bool getStoreHasMarketplacePassProducts() const;

    MCNAPI bool getStoreHasRealmsProducts() const;

    MCNAPI ::std::string getStoreId() const;

    MCNAPI ::std::optional<::SubscriptionOffer> getSubscriptionFullPriceInfo() const;

    MCNAPI ::std::string getTermsOfUseHyperlink() const;

    MCNAPI bool getTipText(::std::string& text);

    MCNAPI uint64 getTotalHardwareThreadsCount() const;

    MCNAPI bool getUnfulfilledEduPurchase(::EduPurchaseDetails& details);

    MCNAPI void getUserMemberOfWorldsCount(::std::function<void(::Realms::GenericStatus, bool)> callback);

    MCNAPI ::Social::XboxLiveUserProfileData const& getUserProfileDataByXuid(::std::string const& xuid);

    MCNAPI ::std::string getVersionString() const;

    MCNAPI ::std::shared_ptr<::WebviewInterface> getWebviewInterface(::WebviewInterfaceType interfaceType);

    MCNAPI void getWorldFromLink(
        ::std::string                                                                          realmInvite,
        ::std::function<void(::Realms::GenericStatus, ::Json::Value const&&, ::Realms::World)> callback
    );

    MCNAPI ::LoadingState getWorldLoadingState() const;

    MCNAPI ::std::vector<::Social::XboxLiveUserProfileData const*> const& getXboxLiveFriends() const;

    MCNAPI ::std::vector<::std::string> getXuidsInLobby() const;

    MCNAPI ::PurchaseResult goToExternalPlatformOffer(
        ::std::string const&             offerId,
        ::std::function<void(bool)>      finishedExternalCoinPurchase,
        ::std::function<void(bool, int)> boughtEnoughCoinsCallback
    );

    MCNAPI bool hasInteractButton() const;

    MCNAPI bool hasLocalDeviceEntitlements() const;

    MCNAPI bool hasPlatformIcons() const;

    MCNAPI bool hasPlatformInvites() const;

    MCNAPI bool hasPlatformProfileCards() const;

    MCNAPI void initializeRealmsWorld(
        ::Realms::RealmId                                                       worldId,
        ::std::string const&                                                    name,
        ::std::string const&                                                    description,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI void invitePlayers(::std::vector<::std::string> const& uids, ::Social::MultiplayerServiceIdentifier service);

    MCNAPI bool isBanned() const;

    MCNAPI bool const isCodeBuilderEnabled() const;

    MCNAPI bool isCreative() const;

    MCNAPI bool isCrossPlatformPlayEnabled() const;

    MCNAPI bool isDesktop() const;

    MCNAPI bool isDeviceBeingSunset() const;

    MCNAPI bool isDeviceSunset() const;

    MCNAPI bool isEditorModeEnabled() const;

    MCNAPI bool isEditorPlayer() const;

    MCNAPI bool isEduDemo();

    MCNAPI bool isEduMode() const;

    MCNAPI bool isFeatureEnabled(::MinecraftGameFeatures feature) const;

    MCNAPI bool isFriendsDrawerEnabled(::MinecraftScreenModel::FriendsDrawerLocation location) const;

    MCNAPI bool isGameModeEnabled(::GameType game) const;

    MCNAPI bool isHotbarOnlyTouch() const;

    MCNAPI bool isInternetAvailable() const;

    MCNAPI bool isInviteEnabled(::Social::MultiplayerServiceIdentifier serviceIdentifier) const;

    MCNAPI bool isLANAllowed() const;

    MCNAPI bool isLANAvailable() const;

    MCNAPI bool isLeftHanded() const;

    MCNAPI bool isLevelLoadingProgressScreen();

    MCNAPI bool isMultiplayerFeatureAllowed() const;

    MCNAPI bool isMuteChat();

    MCNAPI bool isNetworkAllowed() const;

    MCNAPI bool isNetworkAvailable() const;

    MCNAPI bool isOnSceneStack(::std::string_view screenName);

    MCNAPI bool isPlatformConsole() const;

    MCNAPI bool isPlatformInviteEnabled() const;

    MCNAPI bool isPlatformNX() const;

    MCNAPI bool isPlatformSony() const;

    MCNAPI bool isPlatformThirdPartyConsole() const;

    MCNAPI bool isPlayFabNsaLinkingFeatureEnabled() const;

    MCNAPI bool isPremiumOwnedMissing(::PackIdVersion const& id, ::ContentIdentity const& contentIdentity) const;

    MCNAPI bool isPremiumPlatformAccessRequired() const;

    MCNAPI bool isPremiumPlatformAccessRequiredForMatchmaking() const;

    MCNAPI bool isRealmLevel() const;

    MCNAPI bool isRealmOwner() const;

    MCNAPI bool isRealmsEnabled() const;

    MCNAPI bool isResourceLoadingFinished() const;

    MCNAPI bool isRiding() const;

    MCNAPI bool isServiceMultiplayerEnabled(::Social::MultiplayerServiceIdentifier serviceID) const;

    MCNAPI bool isServiceMultiplayerSupported(::Social::MultiplayerServiceIdentifier serviceID);

    MCNAPI bool isSessionInfoValid(::Social::MultiplayerServiceIdentifier serviceID) const;

    MCNAPI bool isSignInInProgress() const;

    MCNAPI bool isSignedInToAdhoc() const;

    MCNAPI bool isSignedInToNSO() const;

    MCNAPI bool isSignedInToPSN() const;

    MCNAPI bool isSignedInToPlayfab() const;

    MCNAPI bool isSignedInToXBL() const;

    MCNAPI bool isSwitchTrialsEnabled(bool isForRealms) const;

    MCNAPI bool isUILoadingDone() const;

    MCNAPI bool isUITTSEnabled() const;

    MCNAPI bool isUserConnectedToPlatform() const;

    MCNAPI bool isUsingUnifiedJoinRealmFlow() const;

    MCNAPI bool isValidRealmName(::std::string name);

    MCNAPI void joinEduDiscoveredWorld();

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

    MCNAPI void launchFeedbackHelpUri();

    MCNAPI bool launchManageSubscriptions();

    MCNAPI bool launchStoreForClientUpdates();

    MCNAPI void launchUri(::std::string const& uri);

    MCNAPI void launchUserGeneratedUri(::std::string const& uri, ::UserGeneratedUriSource source, bool recordEvent);

    MCNAPI void leaveRealmsWorld(::Realms::RealmId worldId, ::std::function<void(::Realms::GenericStatus)> callback);

    MCNAPI void
    listRealmsInvites(::std::function<void(::Realms::GenericStatus, ::std::vector<::Invites::Invite>)> callback);

    MCNAPI void loadStoreDataDrivenScreenFromSidebar(::StoreDataDrivenScreenParams& params);

    MCNAPI void makeBackupOfLevel(::LevelSummary const& editedLevel);

    MCNAPI bool multiplayerLostConnectionToSignalingService() const;

    MCNAPI bool multiplayerRequiresUGCEnabled() const;

    MCNAPI void navigateToControlCustomizationScreen();

    MCNAPI void navigateToCreditsScreen(::CreditsType contentType, ::std::function<void()> callback);

    MCNAPI void navigateToDeleteProgressScreen(
        ::std::string const&                                  uniqueEventName,
        ::IContentManager&                                    contentManager,
        ::std::vector<::std::shared_ptr<::ContentItem const>> itemsToDelete
    );

    MCNAPI void navigateToDevConsole();

    MCNAPI void navigateToDisabledSkinScreen(bool twoButtonWithCallback, ::std::function<void()> callback);

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

    MCNAPI void navigateToPlatformSplitScreenConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCNAPI void navigateToPlatformStoreConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCNAPI void navigateToRealmsHubScreen(::Realms::World const& world);

    MCNAPI void navigateToRealmsManageMembersScreen(::Realms::World const& world);

    MCNAPI void navigateToRealmsPlanPicker();

    MCNAPI void navigateToRealmsStoriesShareLinkModal(::Realms::World const& world);

    MCNAPI void navigateToSelectWorldPopup(
        ::std::function<
            void(::SelectWorldResult, ::optional_ref<::LevelSummary const>, ::optional_ref<::Realms::World const>)>
            callback
    );

    MCNAPI void navigateToSignInErrorScreen(::std::string errorMessage, ::std::function<void()> onDismiss);

    MCNAPI void navigateToStoreHomeScreen(::std::string const& title);

    MCNAPI void navigateToStoreRatingScreen();

    MCNAPI void navigateToUpdateWorldHeightScreen(::std::function<void(bool)> startWorldCallback);

    MCNAPI void navigateToWorldRecoveryScreen(::std::function<void()> successCallback);

    MCNAPI bool needPlatformConnectionBeforeXBLSignIn() const;

    MCNAPI bool needPlatformConnectionForMultiplayer() const;

    MCNAPI bool needPlatformConnectionForSplitScreenMultiplayer() const;

    MCNAPI void openBannedModal();

    MCNAPI void openRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI bool openingExternalResourceSuspendsApp() const;

    MCNAPI void pickFile(::std::shared_ptr<::FilePickerSettings> settings) const;

    MCNAPI void printResourceLoadManagerRunningTasks() const;

    MCNAPI bool purchaseEduLicense(::std::unique_ptr<::TransactionContext> context);

    MCNAPI void purchasePreview(::StorePreviewVersion previewVersion) const;

    MCNAPI void quit(::std::string const& src, ::std::string const& reason);

    MCNAPI void rebindKeys();

    MCNAPI void rebuildPlayScreenMenuStack();

    MCNAPI void
    refreshCurrentRealmWorldInfo(::std::function<void(::Realms::GenericStatus, ::Realms::World const&)> callback);

    MCNAPI void registerServicesManagerSetupCallback(::std::function<void()> callbackToRegister);

    MCNAPI void rejectRealmsInvite(::Invites::InviteId invite, ::std::function<void(::Realms::GenericStatus)> callback);

    MCNAPI void removeExternalServer(int id);

    MCNAPI void removeFromRealmsBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           xuid,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI ::std::shared_ptr<::FileDataRequest> requestImageFromUrl(
        ::std::string const&                                                        imageUrl,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)> callback
    );

    MCNAPI bool requiresNetworkOutageMessaging() const;

    MCNAPI bool requiresXBLSigninToPlay() const;

    MCNAPI void resetActiveDirectoryAuthenticationState();

    MCNAPI void resetRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI void resetRealmsWorldContext();

    MCNAPI void resetResourceLoadManagerRepeatedHitCount();

    MCNAPI void saveEduReceipt(::std::string const& receipt, ::std::function<void(bool)> const& callback);

    MCNAPI void saveLevelData(::std::string const& levelId, ::LevelData const& data);

    MCNAPI void scheduleCheckUserStorageAsync();

    MCNAPI void selectSlot(int slot, ::ContainerID containerId);

    MCNAPI void sendDevConsoleMessage(::std::string const& message);

    MCNAPI void sendPurchaseReceiptsToServer();

    MCNAPI void sendSettingsCommandPacket(::std::string const& command, bool supressOutput);

    MCNAPI void sendTrialWelcomeMessage();

    MCNAPI bool serverPermissionOpenChat() const;

    MCNAPI void setActiveDirectoryAuthenticationOfferPurchase();

    MCNAPI void setActiveDirectoryAuthenticationStateComplete();

    MCNAPI void setActiveDirectoryDemoVersion();

    MCNAPI void setActiveDirectoryEulaAccepted();

    MCNAPI void setActiveSlot(
        ::Realms::RealmId                                                       worldId,
        int                                                                     slotIndex,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI void setClubProfile(::Clubs::ClubModel const& model, ::std::function<void(::Clubs::GenericStatus)> callback);

    MCNAPI void setDefaultPermissionsRealms(
        ::Realms::RealmId                              worldId,
        ::PlayerPermissionLevel const&                 permission,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI void setIsCheckoutInProgress(bool isCheckoutInProgress);

    MCNAPI void setIsInGameBrowsing(bool isInGameBrowsing);

    MCNAPI void setLanguage();

    MCNAPI void setLastSelectedSlot(int slot, ::ContainerID containerId);

    MCNAPI void setNumberOfOwnedRealms(int number);

    MCNAPI void setRealmsWorldInfo(
        ::Realms::World                                                         world,
        int                                                                     difficulty,
        bool                                                                    allowCheats,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI void setShareData(::std::string shareTitle, ::std::string shareText, ::std::string shareUri);

    MCNAPI void setSimPaused(bool paused);

    MCNAPI void setTextBoxBackend(::std::string const& str);

    MCNAPI void setTexturePacksRequired(
        ::Realms::RealmId                                                       worldId,
        bool const&                                                             texturePacksRequired,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI void setTrialABTest(::PropertyBag* abTests);

    MCNAPI void setUserPermissionRealms(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           xuid,
        ::PlayerPermissionLevel const&                 permission,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI bool shouldShowFailRealmsPurchaseFulfillmentToggle() const;

    MCNAPI bool shouldShowThirdPartyDisconnected() const;

    MCNAPI bool shouldShowVersionUpdateScreen();

    MCNAPI void showFriendFinder(::std::function<void()> callback);

    MCNAPI void showPlatformEmptyStoreDialog(::std::function<void(bool)>&& callback);

    MCNAPI void showShareUI();

    MCNAPI bool showSignInButton() const;

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

    MCNAPI void startActiveDirectoryEduDemo();

    MCNAPI void startExternalNetworkWorld(::std::string const& serverName, ::std::string const& ipAddress, int port);

    MCNAPI void startLocalServerAsync(::LevelSummary const& levelSummary, ::LevelSettings const& levelSettings);

    MCAPI void
    startLocalServerAsync(::std::string const& levelId, ::std::string levelName, ::LevelSettings const& settings);

    MCNAPI void stopWebviewInterface(::WebviewInterfaceType interfaceType);

    MCNAPI bool supports3DExport() const;

    MCNAPI bool supports3rdPartyServers() const;

    MCNAPI bool supportsGamepad() const;

    MCNAPI bool supportsKeyboardMouse() const;

    MCNAPI bool supportsMSAA() const;

    MCNAPI bool supportsShare();

    MCNAPI bool supportsTouch() const;

    MCNAPI ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>> takeScreenshotForUploading();

    MCNAPI void travelToPartyDestination();

    MCNAPI void triggerNpcUpdateTelemetry(::Actor& npcOwner);

    MCNAPI bool tryNavigateToXblImmediateSignInScreen_DEPRECATED(
        ::std::string const&    signInSource,
        ::std::function<void()> callBackAfterSignIn,
        ::std::function<void()> callBackAfterCancel
    );

    MCNAPI bool updateEduServicePackSystem() const;

    MCNAPI void updateRealmsAllowList(
        ::Realms::RealmId                                               worldId,
        ::std::string const&                                            currentUserXuid,
        ::std::map<::std::string, ::RealmsAPI::InviteAction>            xuidList,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback
    );

    MCNAPI void updateRealmsConfig(
        ::Realms::RealmId                                             worldId,
        ::std::string const&                                          versionRef,
        ::std::function<void(::Realms::GenericStatus, ::std::string)> callback
    );

    MCNAPI bool usePlatformProfilePicturesOnly() const;

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
    MCNAPI void $prepareToNavigateToGamePlayScreen();

    MCNAPI void $navigateToGamePlayScreen();

    MCNAPI bool $tryNavigateToProfileScreen();

    MCNAPI bool $tryNavigateToSafeZoneScreenOnFirstSignin();

    MCNAPI void
    $navigateToStoreDataDrivenScreen(::StoreDataDrivenScreenParams const& params, bool forceDisableProgressScreen);

    MCNAPI bool $leaveScreen(::std::string expectedScreenName, bool onlyThis);

    MCNAPI void $popScreensBackTo(::ui::SceneType const sceneType);

    MCNAPI bool $isLeaveGameDone() const;

    MCNAPI void $requestLeaveGame(bool switchScreen, bool sync);

    MCNAPI void $destroyGame();

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

    MCNAPI bool $isUserReady() const;

    MCNAPI bool $isDirty() const;

    MCNAPI ::ResourcePackManager& $getResourcePackManager() const;

    MCNAPI ::SkinHandle const& $getSelectedSkinHandle() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> $getUserManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const $getUserManager() const;

    MCNAPI ::std::string const& $getLastPoppedScreenName() const;

    MCNAPI ::INetworkGameConnector& $getNetworkGameConnector();
    // NOLINTEND
};
