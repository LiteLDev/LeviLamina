#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/MinecraftGameFeatures.h"
#include "mc/client/game/WebviewInterfaceType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/screens/models/IMinecraftScreenModel.h"
#include "mc/client/input/ButtonIndiciesEnum.h"
#include "mc/client/input/IconSize.h"
#include "mc/client/input/TriggerIndiciesEnum.h"
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
class RealmsAPI;
class ResourceLocation;
class ToastMessage;
class TransactionContext;
struct ActorUniqueID;
struct EducationLevelSettings;
struct EducationLocalLevelSettings;
struct LevelSummary;
struct PDFOptions;
struct PackIdVersion;
struct Purchase;
namespace Core { class Path; }
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Identity { struct SignOutResult; }
namespace Json { class Value; }
namespace Realms { class WorldCache; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { struct MultiIdentitySigninResult; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct XboxLiveUserProfileData; }
namespace edu::auth { struct CredentialsObserver; }
class IGameConnectionListener;
class WebviewInterface;
struct ContentLogMessage;
struct DlcId;
struct DownloadStateObject;
struct EduDeeplinkObserver;
struct IDlcBatchModel;
struct IEDUDiscoveryService;
struct PlatformMultiplayerRestrictions;
struct PlayerAchievementData;
struct ProgressHandler;
struct SkinHandle;
struct StoreCatalogRepository;
struct StoreContentSources;
struct StoreDataDrivenScreenParams;
namespace Clubs { struct ActivityFeed; }
namespace Clubs { struct ClubModel; }
namespace Clubs { struct FeedItem; }
namespace Clubs { struct ReportedItem; }
namespace Realms { struct InvitesService; }
namespace SDL { struct SubscriptionInfo; }
namespace Social { struct PlatformUserProfileData; }
namespace StoreFilter { struct FilterCollectionInfo; }
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
    enum class FriendsDrawerLocation : int {
        MainMenu   = 0,
        InGameMenu = 1,
    };

    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkb9c806;
        ::ll::UntypedStorage<8, 8>  mUnk8d2695;
        ::ll::UntypedStorage<8, 24> mUnk81dcb0;
        ::ll::UntypedStorage<8, 24> mUnk5380eb;
        ::ll::UntypedStorage<8, 8>  mUnk3264d3;
        ::ll::UntypedStorage<8, 8>  mUnk960ac9;
        // NOLINTEND

    public:
        // prevent constructor by default
        Context& operator=(Context const&);
        Context(Context const&);
        Context();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~Context();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

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
#ifdef LL_PLAT_S
    virtual ~MinecraftScreenModel() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~MinecraftScreenModel() /*override*/;
#endif

    virtual void
    navigateToDisconnectScreen(::std::string const&, ::std::string const&, ::Connection::DisconnectFailReason);

    virtual void navigateToDisconnectScreen(::Connection::DisconnectFailReason reason);

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
    MCNAPI_C explicit MinecraftScreenModel(::MinecraftScreenModel::Context context);

    MCNAPI_C ::RealmsAPI& _checkAndGetRealmsAPI() const;

    MCNAPI_C bool _isPremium(::PackManifest const& manifest) const;

    MCNAPI_C bool _isPremiumLocked(::PackManifest const& manifest) const;

    MCNAPI_C ::Bedrock::Threading::Async<void> _queueForMainThread(::std::function<void()>&& callback);

    MCNAPI_C void _savePDF(::PDFOptions options, ::std::shared_ptr<::FilePickerSettings> settings);

    MCNAPI_C void _saveZIP(::PDFOptions options, ::std::shared_ptr<::FilePickerSettings> settings);

    MCNAPI_C void _startLocalServerAsync(
        ::std::string const&     levelId,
        ::std::string const&     levelName,
        ::ContentIdentity const& contentIdentity,
        ::LevelSettings const&   settings
    );

    MCNAPI_C void
    addDownloadCallback(::std::weak_ptr<bool> existenceTracker, ::std::function<void(::DownloadStateObject&)> callback);

    MCNAPI_C void addEduCredentialsObserver(::edu::auth::CredentialsObserver& observer);

    MCNAPI_C void addEduDeeplinkObserver(::EduDeeplinkObserver& observer) const;

    MCNAPI_C void addToRealmsBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           currentUserXuid,
        ::std::string const&                           xuidToBlock,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI_C bool canEditPermissionsEDU(::ActorUniqueID const& id);

    MCNAPI_C bool canManageSubscriptionForStoreId(::std::string const& storeId) const;

    MCNAPI_C void cancelJoinGame(::LoadingState loadingState);

    MCNAPI_C void checkConnectionEvents();

    MCNAPI_C void checkRealmsPaymentService(::std::function<void(bool)> callback);

    MCNAPI_C void clearContentLogMessages();

    MCNAPI_C void clearDevConsoleScreenMessages();

    MCNAPI_C void clearTTSQueue();

    MCNAPI_C void closeRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI_C void completeServerForm(uint formId, ::ModalFormCancelReason cancelReason);

    MCNAPI_C void completeServerForm(uint formId, ::Json::Value response);

    MCNAPI_C void confirmResourcePackDownload(
        ::ResourcePackResponse response,
        bool                   downloadOptionalResourcePacks,
        bool                   forceServerPacksEnabled
    );

    MCNAPI_C void connectToPlatformNetwork(
        ::std::function<void(::Social::UserPlatformConnectionResult)> callback,
        bool                                                          isUserInitiated
    );

    MCNAPI_C ::std::string copyWorld(::std::string const& worldId);

    MCNAPI_C void createAndUploadWorldToRealm(
        ::LevelSummary const&                  levelSummary,
        ::LevelSettings const&                 levelSettings,
        ::Realms::World                        world,
        ::std::function<void(::Realms::World)> callback
    );

    MCNAPI_C void createAndUploadWorldToRealm(
        ::std::string const&                   levelId,
        ::std::string                          levelName,
        ::LevelSettings const&                 settings,
        ::Realms::World                        world,
        ::std::function<void(::Realms::World)> callback
    );

    MCNAPI_C ::std::unique_ptr<::PlatformMultiplayerRestrictions> createPlatformMultiplayerRestrictions();

    MCNAPI_C void deleteAllContentLogs() const;

    MCNAPI_C void deleteAllDiagnosticsAndProfilerCaptures() const;

    MCNAPI_C void deleteAllLocalScreenshots();

    MCNAPI_C void deleteFeedItem(
        ::Clubs::FeedItem const&                      activityItem,
        ::Realms::RealmId                             realmId,
        ::std::string const&                          clubId,
        ::std::function<void(::Clubs::GenericStatus)> callback
    );

    MCNAPI_C void destroyGame();

    MCNAPI_C void devConsoleExecuteCommand(::std::string const& command);

    MCNAPI_C void displayPremiumUpsellDialogAsync(::std::function<void(bool)> callback);

    MCNAPI_C bool doesUserHavePremiumPlatformAccess() const;

    MCNAPI_C bool doesUserPlatformConnectionAllowMultiplayer() const;

    MCNAPI_C void fetchScreenshots(::std::vector<::Core::PathBuffer<::std::string>>& results);

    MCNAPI_C ::std::string filterProfanityFromString(
        ::ProfanityFilterContext stringContext,
        ::std::string const&     str,
        bool                     allowFilterOverride
    ) const;

    MCNAPI_C bool findProfanityInString(::ProfanityFilterContext stringContext, ::std::string const& str) const;

    MCNAPI_C void fireCodeBuilderCachePerformanceEvent(::CodeBuilderPerformance::Stage stage);

    MCNAPI_C void fireEventOptionsUpdated();

    MCNAPI_C void fireEventScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    );

    MCNAPI_C void fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    );

    MCNAPI_C void fireSignOutEdu(::std::string const& action, ::std::string const& error) const;

    MCNAPI_C bool
    fulfillPriorEduPurchase(::std::weak_ptr<::Purchase> purchase, ::std::unique_ptr<::TransactionContext> context);

    MCNAPI_C ::std::shared_ptr<::FilePickerSettings>
    generateFilePickerSettingsForAlbum(::PDFOptions const& options, ::std::string const& defaultOutName);

    MCNAPI_C ::std::shared_ptr<::FilePickerSettings> generateFilePickerSettingsForExport();

    MCNAPI_C ::std::shared_ptr<::FilePickerSettings> generateFilePickerSettingsForExport(
        ::std::string const&       levelId,
        ::std::string const&       levelName,
        ::FileArchiver::ExportType type
    );

    MCNAPI_C ::PlayerAchievementData const& getAchievementData() const;

    MCNAPI_C ::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity const> getActiveDirectoryIdentity();

    MCNAPI_C ::std::string getBuildDateISOString() const;

    MCNAPI_C ::std::string getButtonTexture(::TriggerIndiciesEnum trigger);

    MCNAPI_C ::std::string getButtonTexture(::ButtonIndiciesEnum button, ::IconSize iconSize);

    MCNAPI_C void getClubFeed(
        ::std::string const&                                                 clubID,
        ::std::function<void(::Clubs::ActivityFeed, ::Clubs::GenericStatus)> callback
    );

    MCNAPI_C void getClubProfile(
        ::std::string const&                                              clubId,
        ::std::function<void(::Clubs::ClubModel, ::Clubs::GenericStatus)> callback
    );

    MCNAPI_C void
    getClubUnreadCount(::std::string const& clubId, ::std::function<void(int, ::Clubs::GenericStatus)> callback);

    MCNAPI_C void getClubUnreadCounts(
        ::std::vector<::std::string> const&                                           clubIds,
        ::std::function<void(::std::map<::std::string, int>, ::Clubs::GenericStatus)> callback
    );

    MCNAPI_C ::MinecraftCommands& getCommands();

    MCNAPI_C ::std::vector<::ContentLogMessage> const& getContentLogMessages() const;

    MCNAPI_C ::ContentTierInfo getContentTierInfo() const;

    MCNAPI_C ::Realms::World& getCurrentRealm();

    MCNAPI_C ::std::string getCurrentXUID() const;

    MCNAPI_C ::SkinHandle getCustomSkinHandle(::DefaultSkin skinType) const;

    MCNAPI_C int getCustomSkinIndex() const;

    MCNAPI_C int getDefaultSkinIndexByType(::DefaultSkin defaultSkinType) const;

    MCNAPI_C ::std::string getDisplayName() const;

    MCNAPI_C ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> getEDUCloudSaveSystem() const;

    MCNAPI_C ::IEDUDiscoveryService& getEDUDiscoveryService();

    MCNAPI_C float getEDUServicePackProgress() const;

    MCNAPI_C ::std::string getEduOfferPrice();

    MCNAPI_C ::EducationLevelSettings const* getEducationLevelSettings() const;

    MCNAPI_C ::std::optional<::Social::GameConnectionInfo> getGameConnectionInfo();

    MCNAPI_C ::IGameConnectionListener const& getGameConnectionListener();

    MCNAPI_C ::HitResult& getHitResult() const;

    MCNAPI_C int getHotbarSlotCount() const;

    MCNAPI_C ::ResourceLocation const& getImageLocationFromImageRepository(::std::string const& imageName) const;

    MCNAPI_C bool getIsWaitingForSession() const;

    MCNAPI_C ::LevelData* getLevelData();

    MCNAPI_C ::LevelData* getLevelData(::std::string const& levelID);

    MCNAPI_C void getLinkedPlatformIds(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 xuids
    ) const;

    MCNAPI_C void getLinkedXuids(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 platformIds
    ) const;

    MCNAPI_C ::ActorUniqueID getLocalPlayerEntityID() const;

    MCNAPI_C ::std::string getLocalizedStoreDisplayName(::std::string const& storeId);

    MCNAPI_C ::std::string
    getMarketplacePassPrice(::std::string const& productSku, ::std::string const& caymanId) const;

    MCNAPI_C uint getMaxPlatformInvitablePlayers() const;

    MCNAPI_C ::std::string getNetworkInfoStringInGame() const;

    MCNAPI_C bool getNewJukeboxPopupItemText(::std::string& newText, bool& isCreative);

    MCNAPI_C bool getNewPopupItemText(::std::string& newText, bool& isCreative);

    MCNAPI_C ::SDL::SubscriptionInfo const& getNextAvailableSubscriptionInfo() const;

    MCNAPI_C ::IOptions& getOptions() const;

    MCNAPI_C ::std::shared_ptr<::WebviewInterface> getOrCreateWebviewInterface(::WebviewInterfaceType interfaceType);

    MCNAPI_C void
    getPlatformFriendProfiles(::std::function<void(::std::vector<::Social::PlatformUserProfileData> const&)> callback);

    MCNAPI_C void getPlatformProfile(
        ::std::string const&                                      platformId,
        ::std::function<void(::Social::PlatformUserProfileData&)> callback
    );

    MCNAPI_C short getPointerX() const;

    MCNAPI_C short getPointerY() const;

    MCNAPI_C ::std::pair<::std::string, bool> const getPrivilegesBlockedString(
        ::Social::PermissionCheckResult const& reason,
        ::std::string const&                   needXBLGold,
        ::std::string const&                   specificPrivilege,
        ::std::string const&                   platformRestriction,
        ::std::string const&                   noInternetConnection,
        ::std::string const&                   patchOutOfDate,
        ::std::string const&                   unknownError
    ) const;

    MCNAPI_C void getProfiles(
        ::std::vector<::std::string> const&                                                   xuids,
        ::std::function<void(::std::vector<::Social::XboxLiveUserProfileData const*> const&)> batchedCollectionCallback
    );

    MCNAPI_C ::std::string getRandomSearchTermUsingCategory(::StoreCatalogCategory const& category) const;

    MCNAPI_C ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService> getRealmsInvitesService();

    MCNAPI_C void getRealmsWorld(
        ::Realms::RealmId                                               worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback,
        bool                                                            userWaiting
    );

    MCNAPI_C ::std::shared_ptr<::Realms::WorldCache> getRealmsWorldCache();

    MCNAPI_C ::Realms::World getRealmsWorldContextWorld() const;

    MCNAPI_C void getReportedFeedItem(
        ::Clubs::ReportedItem const&                                                                   reportedItem,
        ::std::function<void(::Clubs::ReportedItem const&, ::Clubs::FeedItem, ::Clubs::GenericStatus)> callback
    );

    MCNAPI_C void getReportedItemPaths(
        ::std::string const&                                                                clubId,
        ::std::function<void(::std::vector<::Clubs::ReportedItem>, ::Clubs::GenericStatus)> callback
    );

    MCNAPI_C ::std::string getScreenName() const;

    MCNAPI_C ::std::string getScreenTelemetry() const;

    MCNAPI_C ::Core::PathBuffer<::std::string> getScreenshotPath() const;

    MCNAPI_C ::std::vector<::StoreFilter::FilterCollectionInfo> const& getSessionConfigFilterCollections() const;

    MCNAPI_C bool getSimPaused() const;

    MCNAPI_C ::std::string getSplitscreenJoinText() const;

    MCNAPI_C ::StoreContentSources getStoreContentSources() const;

    MCNAPI_C bool getStoreHasRealmsProducts() const;

    MCNAPI_C ::std::string getStoreId() const;

    MCNAPI_C ::SDL::SubscriptionInfo const& getSubscriptionFullPriceInfo() const;

    MCNAPI_C void getThirdPartyDisplayPicture(
        ::std::string const&                       playerId,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       isLocal
    );

    MCNAPI_C void getUserMemberOfWorldsCount(::std::function<void(::Realms::GenericStatus, bool)> callback);

    MCNAPI_C ::std::vector<::std::string> getUuidsInLobby() const;

    MCNAPI_C ::std::string getVersionString() const;

    MCNAPI_C ::std::shared_ptr<::WebviewInterface> getWebviewInterface(::WebviewInterfaceType interfaceType);

    MCNAPI_C ::std::string getWorldConverterDevVersionNumberString() const;

    MCNAPI_C ::LoadingState getWorldLoadingState() const;

    MCNAPI_C ::PurchaseResult goToExternalPlatformOffer(
        ::std::string const&             offerId,
        ::std::function<void(bool)>      finishedExternalCoinPurchase,
        ::std::function<void(bool, int)> boughtEnoughCoinsCallback
    );

    MCNAPI_C bool hasExternalCoinPurchases() const;

    MCNAPI_C bool hasInteractButton() const;

    MCNAPI_C bool hasLocalDeviceEntitlements() const;

    MCNAPI_C bool hasPlatformIcons() const;

    MCNAPI_C bool hasPlatformProfileCards() const;

    MCNAPI_C void ignoreReportedFeedItem(
        ::Clubs::ReportedItem const&                  activityItem,
        ::std::string const&                          reason,
        ::std::string const&                          clubId,
        ::std::function<void(::Clubs::GenericStatus)> callback
    );

    MCNAPI_C void initializeRealmsWorld(
        ::Realms::RealmId                                                       worldId,
        ::std::string const&                                                    name,
        ::std::string const&                                                    description,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI_C bool isBanned() const;

    MCNAPI_C bool isCreative() const;

    MCNAPI_C bool isCrossPlatformPlayEnabled() const;

    MCNAPI_C bool isDeviceBeingSunset() const;

    MCNAPI_C bool isDeviceSunset() const;

    MCNAPI_C bool isDisconnectedFromNEX() const;

    MCNAPI_C bool isDisconnectedFromPSN() const;

    MCNAPI_C bool isEditorModeEnabled() const;

    MCNAPI_C bool isEduDemo();

    MCNAPI_C bool isEduMode() const;

    MCNAPI_C bool isFeatureEnabled(::MinecraftGameFeatures feature) const;

    MCNAPI_C bool isHotbarOnlyTouch() const;

    MCNAPI_C bool isInputModeTouch() const;

    MCNAPI_C bool isInviteEnabled(::Social::MultiplayerServiceIdentifier serviceIdentifier) const;

    MCNAPI_C bool isLeftHanded() const;

    MCNAPI_C ::Social::PermissionCheckResult isMultiplayerAllowed() const;

    MCNAPI_C bool isNetworkAvailable() const;

    MCNAPI_C bool isOnSceneStack(::std::string const& screenName);

    MCNAPI_C bool isOperator() const;

    MCNAPI_C bool isPlatformInviteEnabled() const;

    MCNAPI_C bool isPlatformThirdPartyConsole() const;

    MCNAPI_C bool isPremiumOwnedMissing(::PackIdVersion const& id, ::ContentIdentity const& contentIdentity) const;

    MCNAPI_C bool isPremiumPlatformAccessRequiredForMatchmaking() const;

    MCNAPI_C bool isRealmLevel() const;

    MCNAPI_C bool isRealmOwner() const;

    MCNAPI_C bool isRealmsEditWorldOreUIFeatureOn() const;

    MCNAPI_C bool isRealmsEnabled() const;

    MCNAPI_C bool isRealmsInitialized() const;

    MCNAPI_C bool isResourceLoadingFinished() const;

    MCNAPI_C bool isRiding() const;

    MCNAPI_C bool isServiceMultiplayerEnabled(::Social::MultiplayerServiceIdentifier serviceID) const;

    MCNAPI_C bool isServicesLocalizationReady() const;

    MCNAPI_C bool isSessionConfigAndLocalizationReady() const;

    MCNAPI_C bool isSessionInfoValid(::Social::MultiplayerServiceIdentifier serviceID) const;

    MCNAPI_C bool isSignInInProgress() const;

    MCNAPI_C bool isSignedInToAdhoc() const;

    MCNAPI_C bool isSignedInToNEX() const;

    MCNAPI_C bool isSignedInToPSN() const;

    MCNAPI_C bool isSignedInToPlayFabOfflineAndNetworkDisconnected() const;

    MCNAPI_C bool isSignedInToPlayfab() const;

    MCNAPI_C bool isSignedInToXBL() const;

    MCNAPI_C bool isUITTSEnabled() const;

    MCNAPI_C bool isUnableToShowXBLLogo() const;

    MCNAPI_C bool isValidRealmName(::std::string name);

    MCNAPI_C void joinEDUDiscoveredWorld();

    MCNAPI_C void joinRealmFromInvite(::Realms::World world);

    MCNAPI_C void joinRealmsWorld(
        ::Realms::World                                                  world,
        ::std::function<void(::Social::GameConnectionInfo const&, bool)> successCallback,
        ::std::function<void(::Realms::GenericStatus, ::RealmsAPI::JoinStatus, ::Realms::FailureReason)> failCallback,
        ::std::function<void(int)>                                                                       retryCallback,
        ::IMinecraftEventing::RealmConnectionFlow                        realmConnectionFlow,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow)> broadcastConnectionEventRealmsRequestFunction,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow, ::Bedrock::Http::StatusCode)>
            broadcastConnectionEventRealmsResponseFunction
    );

    MCNAPI_C void launchEduUri(::std::string const& baseUrl);

    MCNAPI_C bool launchManageSubscriptions();

    MCNAPI_C bool launchStore();

    MCNAPI_C void launchUri(::std::string const& uri);

    MCNAPI_C void launchUserGeneratedUri(::std::string const& uri, ::UserGeneratedUriSource source, bool recordEvent);

    MCNAPI_C void leaveRealmsWorld(::Realms::RealmId worldId, ::std::function<void(::Realms::GenericStatus)> callback);

    MCNAPI_C void loadStoreDataDrivenScreenFromSidebar(::StoreDataDrivenScreenParams& params);

    MCNAPI_C void makeBackupOfLevel(::LevelSummary const& editedLevel);

    MCNAPI_C bool multiplayerLostConnectionToSignalingService() const;

    MCNAPI_C void navigateToControlCustomizationScreen();

    MCNAPI_C void navigateToDevConsole();

    MCNAPI_C void navigateToEduHomeScreen();

    MCNAPI_C void navigateToFeedbackPopup();

    MCNAPI_C void navigateToInviteScreen();

    MCNAPI_C void navigateToModalProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 forceRenderBelow,
        ::std::string const&                 screenNameOverride,
        bool                                 isCancellable
    );

    MCNAPI_C void navigateToOptionsScreen(
        ::SettingsTabIndex   startingTabIndex,
        bool                 navToMenuOnExit,
        bool                 maintainOldFocus,
        ::std::string const& initialPackId
    );

    MCNAPI_C void navigateToPlatformNetworkConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCNAPI_C void navigateToPlatformStoreConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCNAPI_C void navigateToRealmsPlanPicker();

    MCNAPI_C void navigateToRealmsSlotSettingsScreen(::Realms::World const& world, ::SettingsTabIndex initialTab);

    MCNAPI_C void navigateToRealmsSlotsScreen(::Realms::World const& worldWithoutSlotInfo);

    MCNAPI_C void navigateToSkinPickerScreen();

    MCNAPI_C void navigateToStartScreen();

    MCNAPI_C void navigateToStoreHomeScreen(::std::string const& title);

    MCNAPI_C void navigateToTokenPopupScreen();

    MCNAPI_C void navigateToUpdateWorldHeightScreen(::std::function<void(bool)> startWorldCallback);

    MCNAPI_C bool needPlatformConnectionBeforeXBLSignIn() const;

    MCNAPI_C bool needPlatformConnectionForSplitScreenMultiplayer() const;

    MCNAPI_C void openBannedModal();

    MCNAPI_C void openRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI_C void pickCustomSkin(::std::function<void(::PickCustomSkinResult)> callback) const;

    MCNAPI_C void prepareToNavigateToGamePlayScreen();

    MCNAPI_C bool purchaseEduLicense(::std::unique_ptr<::TransactionContext> context);

    MCNAPI_C void pushToast(::ToastMessage message);

    MCNAPI_C void rebindKeys();

    MCNAPI_C void
    refreshCurrentRealmWorldInfo(::std::function<void(::Realms::GenericStatus, ::Realms::World const&)> callback);

    MCNAPI_C void removeFromRealmsBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           xuid,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI_C void requestPlayerPermissions(::LayeredAbilities const& abilities, ::ActorUniqueID playerId);

    MCNAPI_C bool requiresXBLSigninToPlay() const;

    MCNAPI_C void resetActiveDirectoryAuthenticationState();

    MCNAPI_C void resetRealmsWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI_C void resetRealmsWorldContext();

    MCNAPI_C void restoreRealmWorldBackup(
        ::Realms::RealmId                              worldId,
        ::std::string                                  backupId,
        ::std::function<void(int)>                     retryCallback,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI_C void saveLevelData(::std::string const& levelId, ::LevelData const& data);

    MCNAPI_C void scheduleCheckUserStorageAsync();

    MCNAPI_C void sendPurchaseReceiptsToServer();

    MCNAPI_C void sendSettingsCommandPacket(::std::string const& command, bool supressOutput);

    MCNAPI_C void sendTrialWelcomeMessage();

    MCNAPI_C bool serverPermissionOpenChat() const;

    MCNAPI_C void setActiveDirectoryAuthenticationStateComplete();

    MCNAPI_C void setActiveDirectoryDemoVersion();

    MCNAPI_C void setActiveSlot(
        ::Realms::RealmId                                                       worldId,
        int                                                                     slotIndex,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI_C void
    setClubProfile(::Clubs::ClubModel const& model, ::std::function<void(::Clubs::GenericStatus)> callback);

    MCNAPI_C void setEducationLocalLevelSettings(::EducationLocalLevelSettings const& settings);

    MCNAPI_C void setIsCheckoutInProgress(bool isCheckoutInProgress);

    MCNAPI_C void setIsInGameBrowsing(bool isInGameBrowsing);

    MCNAPI_C void setLanguage();

    MCNAPI_C void setLastSelectedSlot(int slot, ::ContainerID containerId);

    MCNAPI_C void setNumberOfOwnedRealms(int number);

    MCNAPI_C void setPlayerGameType(::GameType const& gameType);

    MCNAPI_C void setRealmsWorldInfo(
        ::Realms::World                                                         world,
        int                                                                     difficulty,
        bool                                                                    allowCheats,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI_C void setShareData(::std::string shareTitle, ::std::string shareText, ::std::string shareUri);

    MCNAPI_C void setSimPaused(bool paused);

    MCNAPI_C void setTextBoxBackend(::std::string const& str);

    MCNAPI_C void setViewedFeedItem(
        ::Clubs::FeedItem const&                      activityItem,
        ::Realms::RealmId                             realmId,
        ::std::string const&                          clubId,
        bool                                          viewed,
        ::std::function<void(::Clubs::GenericStatus)> callback
    );

    MCNAPI_C bool shouldShowThirdPartyDisconnected() const;

    MCNAPI_C bool shouldShowVersionUpdateScreen();

    MCNAPI_C void showFriendFinder(::std::function<void()> callback);

    MCNAPI_C bool showSignInButton() const;

    MCNAPI_C void showStoreFeaturesDisabledWhenSignedOutScreen();

    MCNAPI_C void signIn(
        ::std::function<void()>                                    connectionCompleteCallback,
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> signInCompleteCallback
    );

    MCNAPI_C void signOut(::std::function<void(::Identity::SignOutResult)> callback);

    MCNAPI_C void silentSignin(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback
    );

    MCNAPI_C void startExternalNetworkWorld(::std::string const& serverName, ::std::string const& ipAddress, int port);

    MCNAPI_C void startLocalServerAsync(::LevelSummary const& levelSummary, ::LevelSettings const& levelSettings);

    MCNAPI_C void
    startLocalServerAsync(::std::string const& levelId, ::std::string levelName, ::LevelSettings const& settings);

    MCNAPI_C bool supportsTTSLanguage(::std::string const& languageCode) const;

    MCNAPI_C ::Core::PathBuffer<::std::string> takeScreenshotForUploading();

    MCNAPI_C bool tryNavigateToXblImmediateSignInScreen_DEPRECATED(
        ::std::string const&    signInSource,
        ::std::function<void()> callBackAfterSignIn,
        ::std::function<void()> callBackAfterCancel
    );

    MCNAPI_C bool updateEDUServicePackSystem() const;

    MCNAPI_C void updateRealmsAllowList(
        ::Realms::RealmId                                               worldId,
        ::std::string const&                                            currentUserXuid,
        ::std::map<::std::string, ::RealmsAPI::InviteAction>            xuidList,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback
    );

    MCNAPI_C bool wasSessionCreated(::Social::MultiplayerServiceIdentifier serviceID) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static uint& mSceneInstanceCounter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::MinecraftScreenModel::Context context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $navigateToDisconnectScreen(::Connection::DisconnectFailReason reason);

    MCNAPI bool $tryNavigateToProfileScreen();

    MCNAPI bool $tryNavigateToSafeZoneScreenOnFirstSignin();

    MCNAPI void
    $navigateToStoreDataDrivenScreen(::StoreDataDrivenScreenParams const& params, bool forceDisableProgressScreen);

    MCNAPI bool $leaveScreen(::std::string expectedScreenName, bool onlyThis);

    MCNAPI bool $isInGame() const;

    MCNAPI bool $isSelectedSkinInitialized() const;

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
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIMinecraftScreenModel();

    MCNAPI static void** $vftableForIDlcBatcher();
    // NOLINTEND
};
