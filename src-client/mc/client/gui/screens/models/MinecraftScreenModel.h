#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
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
#include "mc/client/input/KeyboardType.h"
#include "mc/client/input/TriggerIndiciesEnum.h"
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/persona/DefaultSkinType.h"
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
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/UserGeneratedUriSource.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/packet/ModalFormCancelReason.h"
#include "mc/network/packet/ResourcePackResponse.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/inventory/InventoryLayout.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"
#include "mc/world/inventory/InventoryRightTabIndex.h"
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
class IEDUDiscoveryService;
class IGameConnectionListener;
class IMinecraftGame;
class INetworkGameConnector;
class IOptionRegistry;
class ISceneStack;
class IScreenCapabilities;
class ItemStackBase;
class KeyboardRemappingLayout;
class LayeredAbilities;
class LevelData;
class LevelSettings;
class LocalPlayer;
class MinecraftCommands;
class PackManifest;
class PackSettings;
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
class ToastMessage;
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
struct PlayerInventorySlotData;
struct Purchase;
struct StoreContentSources;
struct StoreDataDrivenScreenParams;
namespace Bedrock::Http { class Status; }
namespace Clubs { struct ClubModel; }
namespace Core { class Path; }
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Identity { struct SignOutResult; }
namespace Invites { struct Invite; }
namespace Invites { struct InviteId; }
namespace Json { class Value; }
namespace OreUI { class Router; }
namespace Realms { class InvitesService; }
namespace Realms { struct ConfigInfo; }
namespace Realms { struct InviteLink; }
namespace Realms { struct Player; }
namespace Realms { struct RealmId; }
namespace Realms { struct ServerRegion; }
namespace Realms { struct World; }
namespace Realms { struct WorldBackupList; }
namespace SDL { struct SubscriptionInfo; }
namespace Social { class FriendList; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { struct MultiIdentitySigninResult; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlatformUserProfileData; }
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
    MCAPI explicit MinecraftScreenModel(::MinecraftScreenModelContext context);

    MCAPI bool _isPremium(::PackManifest const& manifest) const;

    MCAPI bool _isPremiumLocked(::PackManifest const& manifest) const;

    MCAPI bool _isRealmsPlus(::PackManifest const& manifest) const;

    MCAPI void _startLocalServerAsync(
        ::std::string const&     levelId,
        ::std::string const&     levelName,
        ::ContentIdentity const& contentIdentity,
        ::LevelSettings const&   settings
    );

    MCAPI void acceptRealmsInvite(
        ::Invites::InviteId                                                     invite,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCAPI void acceptRealmsLink(
        ::std::string                                                                            realmInvite,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason, ::Realms::World)> callback
    );

    MCAPI void acknowledgePartyDestinationCookie(bool accepted);

    MCAPI void activateNewPreviewRealm(
        ::Realms::RealmId                                                 worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::RealmId)> callback
    );

    MCAPI void
    addDownloadCallback(::std::weak_ptr<bool> existenceTracker, ::std::function<void(::DownloadStateObject&)> callback);

    MCAPI void addEduCredentialsObserver(::edu::auth::CredentialsObserver& observer);

    MCAPI void addEduDeeplinkObserver(::EduDeeplinkObserver& observer) const;

    MCAPI bool addExternalServer(::std::string const& name, ::std::string const& address, int port);

    MCAPI void addSelectedSkinToRecentList() const;

    MCAPI void addTTSMessage(
        ::std::string const& message,
        bool                 interruptible,
        ::std::string const& interruptibleId,
        bool                 required,
        bool                 disregardAppFocus
    );

    MCAPI void addToRealmsBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           currentUserXuid,
        ::std::string const&                           xuidToBlock,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCAPI bool allowBetaXblSignIn() const;

    MCAPI bool areAnyDownloadsOrImportsActive() const;

    MCAPI bool arePersonaAppearancesLoading() const;

    MCAPI bool canEditPermissionsEDU(::ActorUniqueID const& id);

    MCAPI bool canLaunchUri(::std::string const& uri);

    MCAPI bool canManageSubscriptionForStoreId(::std::string const& storeId) const;

    MCAPI bool canUserDoActionForCurrentRealm(::Realms::PlayerRoleActions action) const;

    MCAPI bool canUserDoRealmRoleAction(::Realms::World const& realmWorld, ::Realms::PlayerRoleActions action) const;

    MCAPI void cancelEDUServicePackDownload(::std::string const& cancelReason) const;

    MCAPI void cancelJoinGame(::LoadingState loadingState);

    MCAPI void checkConnectionEvents();

    MCAPI void checkPremiumPlatformAccessAsync(::std::function<void(bool)> callback);

    MCAPI void checkRealmsPaymentService(::std::function<void(bool)> callback);

    MCAPI void clearContentLogMessages();

    MCAPI void clearDevConsoleScreenMessages();

    MCAPI void clearEditorPlaytestRoundtripInfo() const;

    MCAPI void clearTTSQueue();

    MCAPI void closeRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCAPI void clubNameVetting(
        ::std::string const&                                                    name,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
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

    MCAPI void createInviteLink(
        ::Realms::RealmId                                                    worldId,
        int64                                                                expiry,
        ::std::function<void(::Realms::GenericStatus, ::Realms::InviteLink)> callback
    );

    MCAPI ::std::unique_ptr<::PlatformMultiplayerRestrictions> createPlatformMultiplayerRestrictions();

    MCAPI void deleteAllContentLogs() const;

    MCAPI void deleteAllDiagnosticsAndProfilerCaptures() const;

    MCAPI void deleteAllLocalScreenshots();

    MCAPI void deleteInviteLink(::std::string const& linkId, ::std::function<void(::Realms::GenericStatus)> callback);

    MCAPI void deleteRealm(::Realms::RealmId worldId, ::std::function<void(::Realms::GenericStatus)> callback);

    MCAPI void deleteRealmWorldBackup(
        ::Realms::RealmId const& worldId,
        int                      slotIndex,
        ::std::string const&     backupId,
        ::std::function<void(int)>,
        ::std::function<void(::Realms::GenericStatus, ::std::string)> callback
    );

    MCAPI void devConsoleExecuteCommand(::std::string const& command);

    MCAPI void displayPremiumUpsellDialogAsync(::std::function<void(bool)> callback);

    MCAPI bool doesUserHavePremiumPlatformAccess() const;

    MCAPI void
    editExternalServer(int id, ::std::string const& name, ::std::string const& address, int port, bool updateTimeStamp);

    MCAPI ::std::string emoticonifyText(::std::string const& text, bool isGameTip);

    MCAPI void fetchActiveWorldCurrentSize(
        ::Realms::RealmId const&                              realmId,
        int                                                   slotIndex,
        ::std::function<void(::Realms::GenericStatus, int64)> callback
    );

    MCAPI void
    fetchRealmsWorlds(::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::World>)> callback);

    MCAPI void fetchScreenshots(::std::vector<::Core::PathBuffer<::std::string>>& results);

    MCAPI ::std::string filterProfanityFromString(
        ::ProfanityFilterContext stringContext,
        ::std::string const&     str,
        bool                     allowFilterOverride
    ) const;

    MCAPI bool findProfanityInString(::ProfanityFilterContext stringContext, ::std::string const& str) const;

    MCAPI void fireBannedSkinVerification(
        ::std::string const& skinData,
        bool                 wasApproved,
        int                  eventCode,
        ::std::string const& message
    ) const;

    MCAPI void fireCodeBuilderCachePerformanceEvent(::CodeBuilderPerformance::Stage stage);

    MCAPI void fireEventAdhocNetworkEnabled() const;

    MCAPI void fireEventInventoryClosed();

    MCAPI void fireEventInventoryOpened(bool workbench);

    MCAPI void fireEventItemSelected(::ItemStackBase const& item);

    MCAPI void fireEventScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    );

    MCAPI void fireEventServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome outcome,
        uint                                           pingLatency,
        double                                         timeElapsed,
        ::std::string const&                           creatorName
    );

    MCAPI void firePackSettingsEvent(
        ::PackSettings const& packSettings,
        ::PackManifest const& manifest,
        ::std::string         serializedPackSettings
    );

    MCAPI void fireSignOutEdu(::std::string const& action, ::std::string const& error) const;

    MCAPI void fireSwitchAccountEdu() const;

    MCAPI void flushQueuedDevConsoleMessages();

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

    MCAPI void getAllInviteLinks(
        ::Realms::RealmId                                                                   worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::InviteLink>)> callback
    );

    MCAPI bool getBlankLineDismissesChat() const;

    MCFOLD ::std::string getBuildDateISOString() const;

    MCAPI ::BuildPlatform getBuildPlatform() const;

    MCAPI ::std::string getButtonTexture(::TriggerIndiciesEnum trigger);

    MCAPI ::std::string getButtonTexture(::ButtonIndiciesEnum button, ::IconSize iconSize);

    MCAPI ::ClipboardFeatureFlags getClipboardFeatures() const;

    MCAPI void getClubProfile(
        ::std::string const&                                              clubId,
        ::std::function<void(::Clubs::ClubModel, ::Clubs::GenericStatus)> callback
    );

    MCAPI void
    getClubUnreadCount(::std::string const& clubId, ::std::function<void(int, ::Clubs::GenericStatus)> callback);

    MCAPI ::MinecraftCommands& getCommands();

    MCAPI ::std::vector<::ContentLogMessage> const& getContentLogMessages() const;

    MCAPI ::ContentTierInfo getContentTierInfo() const;

    MCAPI ::Realms::World& getCurrentRealm();

    MCAPI ::std::string getCurrentXUID() const;

    MCAPI ::SkinHandle getCustomSkinHandle(::persona::DefaultSkinType skinType) const;

    MCAPI ::std::vector<::std::string> const& getDevConsoleScreenMessages();

    MCAPI ::DimensionHeightRange getDimensionHeightRange() const;

    MCAPI ::WireframeQueue* getDimensionWireframeQueue();

    MCAPI ::std::string getDisplayName() const;

    MCAPI ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> getEDUCloudSaveSystem() const;

    MCAPI ::IEDUDiscoveryService& getEDUDiscoveryService();

    MCAPI float getEDUServicePackProgress() const;

    MCAPI ::std::string getEduOfferPrice();

    MCAPI ::EducationLevelSettings const* getEducationLevelSettings() const;

    MCAPI ::std::tuple<::std::string, ::std::string, int> getExternalServerInfo(int id);

    MCAPI ::std::optional<::Social::GameConnectionInfo> getGameConnectionInfo();

    MCAPI ::IGameConnectionListener const& getGameConnectionListener();

    MCAPI int getHotbarSlotCount() const;

    MCAPI ::std::string getIpAddress() const;

    MCAPI bool getIsWaitingForSession() const;

    MCAPI ::KeyboardRemappingLayout& getKeyboardRemappingLayout() const;

    MCAPI ::KeyboardRemappingLayout& getKeyboardRemappingLayoutByType(::KeyboardType keyboardType) const;

    MCAPI ::std::string const& getLastContentLogMessage() const;

    MCAPI ::std::string const& getLastDevConsoleMessage();

    MCAPI ::LevelData const* getLevelData() const;

    MCAPI ::LevelData* getLevelData();

    MCAPI void getLinkedPlatformIds(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 xuids
    ) const;

    MCAPI void getLinkedXuids(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 platformIds
    ) const;

    MCAPI float getLoadingProgress();

    MCAPI ::LocalPlayer* getLocalPlayer() const;

    MCAPI ::ActorUniqueID getLocalPlayerEntityID() const;

    MCAPI ::mce::UUID getLocalPlayerUUID();

    MCAPI ::std::string const getMarketplaceDisabledReason() const;

    MCAPI ::std::string getMarketplacePassPrice(::std::string const& productSku, ::std::string const& caymanId) const;

    MCAPI uint getMaxPlatformInvitablePlayers() const;

    MCAPI uint getMaxSimRadiusInChunks() const;

    MCAPI ::std::string getMinecraftAccountID() const;

    MCAPI ::std::string getNetworkInfoStringInGame() const;

    MCAPI ::std::string getNetworkPort() const;

    MCAPI bool getNewJukeboxPopupItemText(::std::string& newText, bool& isCreative);

    MCAPI bool getNewPopupItemText(::std::string& newText, bool& isCreative);

    MCAPI ::SDL::SubscriptionInfo const& getNextAvailableSubscriptionInfo() const;

    MCAPI ::Bedrock::PubSub::Connector<
        void(::PlayerListEntry const&, ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&)>&
    getOnPlayerListEntryRemovedConnector() const;

    MCAPI ::IOptionRegistry& getOptions() const;

    MCAPI ::std::shared_ptr<::WebviewInterface> getOrCreateWebviewInterface(::WebviewInterfaceType interfaceType);

    MCAPI ::std::string getPlatformAppropriateSubscriptionLocString(::std::string locString, bool isForRealms) const;

    MCAPI void
    getPlatformFriendProfiles(::std::function<void(::std::vector<::Social::PlatformUserProfileData> const&)> callback);

    MCAPI void getPlatformProfile(
        ::std::string const&                                      platformId,
        ::std::function<void(::Social::PlatformUserProfileData&)> callback
    );

    MCAPI ::CommandPermissionLevel getPlayerCommandPermissionLevel() const;

    MCAPI ::GameType getPlayerGameType() const;

    MCAPI ::std::string getPlayerName() const;

    MCAPI short getPointerX() const;

    MCAPI short getPointerY() const;

    MCAPI void
    getPreferredRegions(::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::ServerRegion>)> callback);

    MCAPI ::std::pair<::std::string, bool> const getPrivilegesBlockedString(
        ::Social::PermissionCheckResult const& reason,
        ::std::string const&                   needXBLGold,
        ::std::string const&                   specificPrivilege,
        ::std::string const&                   platformRestriction,
        ::std::string const&                   noInternetConnection,
        ::std::string const&                   unknownError
    ) const;

    MCAPI void getProfiles(
        ::std::vector<::std::string> const&                                                   xuids,
        ::std::function<void(::std::vector<::Social::XboxLiveUserProfileData const*> const&)> batchedCollectionCallback
    );

    MCAPI void getRealmWorldBackupList(
        ::Realms::RealmId                                                         worldId,
        int                                                                       slotIndex,
        ::std::function<void(::Realms::GenericStatus, ::Realms::WorldBackupList)> callback
    );

    MCAPI void getRealmsBlocklist(
        ::Realms::RealmId                                                            worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::std::string>)> callback
    );

    MCAPI void getRealmsConfigDetails(
        ::Realms::RealmId                                                    worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::ConfigInfo)> callback
    );

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService> getRealmsInvitesService();

    MCAPI void getRealmsMembers(
        ::Realms::RealmId                                                               worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Player>)> callback
    );

    MCAPI void
    getRealmsOnlinePlayers(::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::World>)> callback);

    MCAPI void getRealmsWorld(
        ::Realms::RealmId                                               worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback,
        bool                                                            userWaiting
    );

    MCAPI ::Realms::World getRealmsWorldContextWorld() const;

    MCAPI float getResourcePackDownloadProgress(::std::string& message) const;

    MCAPI ::std::string getScreenName() const;

    MCAPI ::std::string getScreenTelemetry() const;

    MCAPI ::PlayerInventorySlotData getSelectedSlot();

    MCAPI ::std::string const& getServerSettingsData();

    MCAPI uint getServerSettingsId();

    MCAPI ::std::string getSessionConfigKnownPageKeyValue(::std::string const& pageId) const;

    MCAPI bool getSimPaused() const;

    MCAPI ::std::string getSplitscreenJoinText() const;

    MCAPI ::StoreContentSources getStoreContentSources() const;

    MCAPI ::std::string getStoreDocumentId() const;

    MCAPI bool getStoreHasMarketplacePassProducts() const;

    MCAPI bool getStoreHasRealmsProducts() const;

    MCAPI ::std::string getStoreId() const;

    MCAPI ::SDL::SubscriptionInfo const& getSubscriptionFullPriceInfo() const;

    MCAPI ::std::string getTermsOfUseHyperlink() const;

    MCAPI bool getTipText(::std::string& text);

    MCAPI uint64 getTotalHardwareThreadsCount() const;

    MCAPI ::OreUI::Router& getUIRouter();

    MCAPI bool getUnfulfilledEduPurchase(::EduPurchaseDetails& details);

    MCAPI ::GameType getUnmappedPlayerGameType() const;

    MCAPI void getUserMemberOfWorldsCount(::std::function<void(::Realms::GenericStatus, bool)> callback);

    MCAPI ::Social::XboxLiveUserProfileData const& getUserProfileDataByXuid(::std::string const& xuid);

    MCAPI ::std::vector<::std::string> getUuidsInLobby() const;

    MCAPI ::std::string getVersionString() const;

    MCAPI ::std::shared_ptr<::WebviewInterface> getWebviewInterface(::WebviewInterfaceType interfaceType);

    MCAPI void getWorldFromLink(
        ::std::string                                                                          realmInvite,
        ::std::function<void(::Realms::GenericStatus, ::Json::Value const&&, ::Realms::World)> callback
    );

    MCAPI ::LoadingState getWorldLoadingState() const;

    MCAPI ::std::vector<::std::string> getXuidsInLobby() const;

    MCAPI ::PurchaseResult goToExternalPlatformOffer(
        ::std::string const&             offerId,
        ::std::function<void(bool)>      finishedExternalCoinPurchase,
        ::std::function<void(bool, int)> boughtEnoughCoinsCallback
    );

    MCAPI void handleHideGUIButtonPress();

    MCAPI void handleHidePaperDollButtonPress();

    MCAPI void handleHideToolTipsButtonPress();

    MCAPI bool hasInputDevice() const;

    MCAPI bool hasInteractButton() const;

    MCAPI bool hasInventoryUpdated() const;

    MCAPI bool hasLocalDeviceEntitlements() const;

    MCAPI bool hasPlatformIcons() const;

    MCFOLD bool hasPlatformInvites() const;

    MCAPI bool hasPlatformProfileCards() const;

    MCAPI void initCodebuilderView();

    MCAPI void initializeRealmsWorld(
        ::Realms::RealmId                                                       worldId,
        ::std::string const&                                                    name,
        ::std::string const&                                                    description,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCAPI void invitePlayers(::std::vector<::std::string> const& uids, ::Social::MultiplayerServiceIdentifier service);

    MCAPI bool isBanned() const;

    MCAPI bool isCreative() const;

    MCAPI bool isCrossPlatformPlayEnabled() const;

    MCAPI bool isDesktop() const;

    MCAPI bool isDeviceBeingSunset() const;

    MCAPI bool isDeviceSunset() const;

    MCAPI bool isEditorEnabledOrPlaytesting() const;

    MCAPI bool isEditorModeEnabled() const;

    MCAPI bool isEditorPlayer() const;

    MCAPI bool isEduDemo();

    MCAPI bool isEduMode() const;

    MCAPI bool isFeatureEnabled(::MinecraftGameFeatures feature) const;

    MCAPI bool isFriendsDrawerEnabled(::MinecraftScreenModel::FriendsDrawerLocation location) const;

    MCAPI bool isGameModeEnabled(::GameType game) const;

    MCAPI bool isGamepadCursorEnabled() const;

    MCAPI bool isHotbarOnlyTouch() const;

    MCAPI bool isInControlCustomization() const;

    MCAPI bool isInputModeMouse() const;

    MCAPI bool isInputModeTouch() const;

    MCAPI bool isInternetAvailable() const;

    MCAPI bool isInviteEnabled(::Social::MultiplayerServiceIdentifier serviceIdentifier) const;

    MCAPI bool isLANAllowed() const;

    MCAPI bool isLANAvailable() const;

    MCAPI bool isLeftHanded() const;

    MCAPI bool isLevelLoadingProgressScreen();

    MCAPI bool isMultiplayerFeatureAllowed() const;

    MCFOLD bool isMuteChat();

    MCAPI bool isNetworkAllowed() const;

    MCAPI bool isNetworkAvailable() const;

    MCAPI bool isOnSceneStack(::std::string const& screenName);

    MCAPI bool isOperator() const;

    MCAPI bool isPlatformConsole() const;

    MCAPI bool isPlatformInviteEnabled() const;

    MCFOLD bool isPlatformNX() const;

    MCFOLD bool isPlatformSony() const;

    MCFOLD bool isPlatformThirdPartyConsole() const;

    MCAPI bool isPlayerValid();

    MCAPI bool isPreGame() const;

    MCAPI bool isPremiumOwnedMissing(::PackIdVersion const& id, ::ContentIdentity const& contentIdentity) const;

    MCFOLD bool isPremiumPlatformAccessRequired() const;

    MCFOLD bool isPremiumPlatformAccessRequiredForMatchmaking() const;

    MCAPI bool isRealmLevel() const;

    MCAPI bool isRealmOwner() const;

    MCAPI bool isRealmsEditWorldOreUIFeatureOn() const;

    MCFOLD bool isRealmsEnabled() const;

    MCAPI bool isRealmsHubInGameFeatureOn() const;

    MCAPI bool isResourceLoadingFinished() const;

    MCAPI bool isRiding() const;

    MCAPI bool isServiceMultiplayerEnabled(::Social::MultiplayerServiceIdentifier serviceID) const;

    MCAPI bool isServiceMultiplayerSupported(::Social::MultiplayerServiceIdentifier serviceID);

    MCAPI bool isSessionInfoValid(::Social::MultiplayerServiceIdentifier serviceID) const;

    MCAPI bool isSignInInProgress() const;

    MCAPI bool isSignedInToAdhoc() const;

    MCAPI bool isSignedInToNEX() const;

    MCAPI bool isSignedInToPSN() const;

    MCAPI bool isSignedInToPlayfab() const;

    MCAPI bool isSignedInToXBL() const;

    MCAPI bool isSpectator() const;

    MCAPI bool isSplitScreen();

    MCAPI bool isSwitchTrialsEnabled(bool isForRealms) const;

    MCAPI bool isUILoadingDone() const;

    MCAPI bool isUITTSEnabled() const;

    MCAPI bool isUserConnectedToPlatform() const;

    MCAPI bool isUsingUnifiedJoinRealmFlow() const;

    MCAPI bool isValidRealmName(::std::string name);

    MCAPI void joinEDUDiscoveredWorld();

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

    MCAPI void launchFeedbackHelpUri();

    MCAPI bool launchManageSubscriptions();

    MCAPI bool launchStoreForClientUpdates();

    MCAPI void launchUri(::std::string const& uri);

    MCAPI void launchUserGeneratedUri(::std::string const& uri, ::UserGeneratedUriSource source, bool recordEvent);

    MCAPI void leaveRealmsWorld(::Realms::RealmId worldId, ::std::function<void(::Realms::GenericStatus)> callback);

    MCAPI void
    listRealmsInvites(::std::function<void(::Realms::GenericStatus, ::std::vector<::Invites::Invite>)> callback);

    MCAPI void loadStoreDataDrivenScreenFromSidebar(::StoreDataDrivenScreenParams& params);

    MCAPI void makeBackupOfLevel(::LevelSummary const& editedLevel);

    MCAPI bool multiplayerLostConnectionToSignalingService() const;

    MCAPI bool multiplayerRequiresUGCEnabled() const;

    MCAPI void navigateToActiveDirectoryLogin(bool displaySignIn, ::LastClickedSource lastClickedSource);

    MCAPI void navigateToControlCustomizationScreen();

    MCAPI void navigateToCreditsScreen(::CreditsType contentType, ::std::function<void()> callback);

    MCAPI void navigateToDeleteProgressScreen(
        ::std::string const&                                  uniqueEventName,
        ::IContentManager&                                    contentManager,
        ::std::vector<::std::shared_ptr<::ContentItem const>> itemsToDelete
    );

    MCAPI void navigateToDevConsole();

    MCAPI void navigateToDisabledSkinScreen(bool twoButtonWithCallback, ::std::function<void()> callback);

    MCAPI void navigateToDisconnectScreen(::Connection::DisconnectFailReason reason);

    MCAPI void navigateToEduHomeScreen();

    MCAPI void navigateToFeedScreen(::Realms::World const& world);

    MCAPI void navigateToFeedbackPopup();

    MCAPI void navigateToGamePlayScreen();

    MCAPI void navigateToInviteScreen();

    MCAPI void navigateToLessonCompleteScreen(::IMinecraftEventing::LessonCompleteDialogEntryPoint entryPoint);

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

    MCAPI void navigateToPlatformSplitScreenConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI void navigateToPlatformStoreConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI void navigateToProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 loadAssets,
        bool                                 sendProgressTelem,
        ::std::string const&                 overrideScreen
    );

    MCAPI void navigateToRealmsHubScreen(::Realms::World const& world);

    MCAPI void navigateToRealmsPlanPicker();

    MCAPI void navigateToRealmsSlotSettingsScreen(::Realms::World const& world);

    MCAPI void navigateToRealmsSlotsScreen(::Realms::World const& worldWithoutSlotInfo);

    MCAPI void navigateToRealmsStoriesShareLinkModal(::Realms::World const& world);

    MCAPI void navigateToRealmsTimelineRequiredDisconnectScreen(int64 realmId);

    MCAPI void navigateToSelectWorldPopup(
        ::std::function<
            void(::SelectWorldResult, ::optional_ref<::LevelSummary const>, ::optional_ref<::Realms::World const>)>
            callback
    );

    MCAPI void navigateToSkinPickerScreen();

    MCAPI void navigateToStoreHomeScreen(::std::string const& title);

    MCAPI void navigateToStoreRatingScreen();

    MCAPI void navigateToUpdateWorldHeightScreen(::std::function<void(bool)> startWorldCallback);

    MCAPI void navigateToWorldRecoveryScreen(::std::function<void()> successCallback);

    MCAPI bool needPlatformConnectionBeforeXBLSignIn() const;

    MCAPI bool needPlatformConnectionForMultiplayer() const;

    MCAPI bool needPlatformConnectionForSplitScreenMultiplayer() const;

    MCAPI void openBannedModal();

    MCAPI void openRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCAPI bool openingExternalResourceSuspendsApp() const;

    MCAPI void pickFile(::std::shared_ptr<::FilePickerSettings> settings) const;

    MCAPI void prepareToNavigateToGamePlayScreen();

    MCAPI void printResourceLoadManagerRunningTasks() const;

    MCAPI bool purchaseEduLicense(::std::unique_ptr<::TransactionContext> context);

    MCAPI void purchasePreview(::StorePreviewVersion previewVersion) const;

    MCAPI void pushToast(::ToastMessage message);

    MCAPI void quit(::std::string const& src, ::std::string const& reason);

    MCAPI void rebindKeys();

    MCAPI void rebuildPlayScreenMenuStack();

    MCAPI void
    refreshCurrentRealmWorldInfo(::std::function<void(::Realms::GenericStatus, ::Realms::World const&)> callback);

    MCAPI void registerServicesManagerSetupCallback(::std::function<void()> callbackToRegister);

    MCAPI void rejectRealmsInvite(::Invites::InviteId invite, ::std::function<void(::Realms::GenericStatus)> callback);

    MCAPI void removeExternalServer(int id);

    MCAPI void removeFromRealmsBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           xuid,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCAPI void requestClientLeaveGame(bool switchScreen, bool sync);

    MCAPI void requestDefaultPermissions(::PlayerPermissionLevel playerPermissions);

    MCAPI ::std::shared_ptr<::FileDataRequest> requestImageFromUrl(
        ::std::string const&                                                        imageUrl,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)> callback
    );

    MCAPI void requestPlayerPermissions(::LayeredAbilities const& abilities, ::ActorUniqueID playerId);

    MCAPI void requestServerSettings();

    MCAPI bool requiresNetworkOutageMessaging() const;

    MCAPI bool requiresXBLSigninToPlay() const;

    MCAPI void resetActiveDirectoryAuthenticationState();

    MCAPI void resetRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCAPI void resetRealmsWorldContext();

    MCAPI void resetResourceLoadManagerRepeatedHitCount();

    MCAPI void restoreRealmWorldBackup(
        ::Realms::RealmId                                                    worldId,
        int                                                                  slotIndex,
        ::std::string const&                                                 backupId,
        ::std::function<void(::Realms::GenericStatus, ::std::string)> const& callback
    );

    MCAPI void saveAutoRealmWorldBackup(
        ::Realms::RealmId const&                                      worldId,
        int                                                           slotIndex,
        ::std::string const&                                          backupId,
        ::std::string const&                                          worldName,
        ::std::vector<::std::string> const&                           backupsToReplace,
        ::std::function<void(::Realms::GenericStatus, ::std::string)> callback
    );

    MCAPI void saveEduReceipt(::std::string const& receipt, ::std::function<void(bool)> const& callback);

    MCAPI void saveLevelData(::std::string const& levelId, ::LevelData const& data);

    MCAPI void savePlayerBlastFurnaceSearchString(::std::string const& searchString);

    MCAPI void savePlayerFurnaceSearchString(::std::string const& searchString);

    MCAPI void savePlayerInventoryOptions(
        ::InventoryLeftTabIndex  leftTab,
        ::InventoryRightTabIndex rightTab,
        bool                     filtering,
        ::InventoryLayout        layoutInv,
        ::InventoryLayout        layoutCraft
    );

    MCAPI void savePlayerInventorySearchString(::std::string const& inventorySearchString);

    MCAPI void savePlayerSmokerSearchString(::std::string const& searchString);

    MCAPI void saveRealmWorldBackup(
        ::Realms::RealmId const&                                      worldId,
        int                                                           slotIndex,
        ::std::string const&                                          worldName,
        ::std::vector<::std::string>                                  backupsToReplace,
        ::std::function<void(::Realms::GenericStatus, ::std::string)> callback
    );

    MCAPI void scheduleCheckUserStorageAsync();

    MCAPI void selectSlot(int slot, ::ContainerID containerId);

    MCAPI void sendDevConsoleMessage(::std::string const& message);

    MCAPI void sendSetDifficultyPacket(::SharedTypes::Legacy::Difficulty value);

    MCAPI void sendSettingsCommandPacket(::std::string const& command, bool supressOutput);

    MCAPI void sendTrialWelcomeMessage();

    MCAPI bool serverPermissionOpenChat() const;

    MCAPI void setActiveDirectoryAuthenticationOfferPurchase();

    MCAPI void setActiveDirectoryAuthenticationStateComplete();

    MCAPI void setActiveDirectoryDemoVersion();

    MCAPI void setActiveDirectoryEulaAccepted();

    MCAPI void setActiveSlot(
        ::Realms::RealmId                                                       worldId,
        int                                                                     slotIndex,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCAPI void setClubProfile(::Clubs::ClubModel const& model, ::std::function<void(::Clubs::GenericStatus)> callback);

    MCAPI void setDefaultPermissionsRealms(
        ::Realms::RealmId                              worldId,
        ::PlayerPermissionLevel const&                 permission,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCAPI void setGraphicsMode(int mode);

    MCAPI void setInputBindingMode(::InputBindingMode mode);

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

    MCAPI void setStoreDocumentId(::std::string const& documentId);

    MCAPI void setTextBoxBackend(::std::string const& str);

    MCAPI void setTexturePacksRequired(
        ::Realms::RealmId                                                       worldId,
        bool const&                                                             texturePacksRequired,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCAPI void setTrialABTest(::PropertyBag* abTests);

    MCAPI void setUserPermissionRealms(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           xuid,
        ::PlayerPermissionLevel const&                 permission,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCAPI bool shouldShowFailRealmsPurchaseFulfillmentToggle() const;

    MCAPI bool shouldShowThirdPartyDisconnected() const;

    MCAPI bool shouldShowThirdPartySignIn() const;

    MCAPI void showFriendFinder(::std::function<void()> callback);

    MCAPI void showPlatformEmptyStoreDialog(::std::function<void(bool)>&& callback);

    MCAPI void showShareUI();

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

    MCAPI void startActiveDirectoryEduDemo();

    MCAPI void startExternalNetworkWorld(::std::string const& serverName, ::std::string const& ipAddress, int port);

    MCAPI void startGatheringWorld(::Social::GameConnectionInfo const& connection);

    MCAPI void startLocalServerAsync(::LevelSummary const& levelSummary, ::LevelSettings const& levelSettings);

    MCAPI void
    startLocalServerAsync(::std::string const& levelId, ::std::string levelName, ::LevelSettings const& settings);

    MCAPI void stopWebviewInterface(::WebviewInterfaceType interfaceType);

    MCAPI bool supports3DExport() const;

    MCAPI bool supports3rdPartyServers() const;

    MCAPI bool supportsGamepad() const;

    MCAPI bool supportsKeyboardMouse() const;

    MCAPI bool supportsMSAA() const;

    MCAPI bool supportsShare();

    MCAPI bool supportsTTSLanguage(::std::string const& languageCode) const;

    MCAPI bool supportsTouch() const;

    MCAPI ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>> takeScreenshotForUploading();

    MCAPI void travelToPartyDestination();

    MCAPI void triggerNpcUpdateTelemetry(::Actor& npcOwner);

    MCAPI bool tryNavigateToXblImmediateSignInScreen_DEPRECATED(
        ::std::string const&    signInSource,
        ::std::function<void()> callBackAfterSignIn,
        ::std::function<void()> callBackAfterCancel
    );

    MCAPI bool updateEDUServicePackSystem() const;

    MCAPI void updateInviteLink(
        ::Realms::RealmId                                                    worldId,
        ::Realms::InviteLink                                                 link,
        ::std::function<void(::Realms::GenericStatus, ::Realms::InviteLink)> callback
    );

    MCAPI void updateRealmsAllowList(
        ::Realms::RealmId                                               worldId,
        ::std::string const&                                            currentUserXuid,
        ::std::map<::std::string, ::RealmsAPI::InviteAction>            xuidList,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback
    );

    MCAPI void updateRealmsConfig(
        ::Realms::RealmId                                             worldId,
        ::std::string const&                                          versionRef,
        ::std::function<void(::Realms::GenericStatus, ::std::string)> callback
    );

    MCAPI bool usePlatformProfilePicturesOnly() const;

    MCAPI bool wasSessionCreated(::Social::MultiplayerServiceIdentifier serviceID) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftScreenModelContext context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $tryNavigateToProfileScreen();

    MCAPI bool $tryNavigateToSafeZoneScreenOnFirstSignin();

    MCAPI void
    $navigateToStoreDataDrivenScreen(::StoreDataDrivenScreenParams const& params, bool forceDisableProgressScreen);

    MCAPI bool $leaveScreen(::std::string expectedScreenName, bool onlyThis);

    MCAPI void $popScreensBackTo(::ui::SceneType const sceneType);

    MCAPI bool $isLeaveGameDone() const;

    MCAPI void $requestLeaveGame(bool switchScreen, bool sync);

    MCAPI void $destroyGame();

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

    MCAPI bool $isUserReady() const;

    MCAPI bool $isDirty() const;

    MCAPI ::ResourcePackManager& $getResourcePackManager() const;

    MCAPI ::SkinHandle const& $getSelectedSkinHandle() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> $getUserManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const $getUserManager() const;

    MCAPI ::std::string const& $getLastPoppedScreenName() const;

    MCAPI ::INetworkGameConnector& $getNetworkGameConnector();
    // NOLINTEND
};
