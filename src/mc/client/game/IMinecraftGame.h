#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/DeferredTaskCategory.h"
#include "mc/client/game/IClientInstances.h"
#include "mc/client/game/IGameEventNotifier.h"
#include "mc/client/game/IGameServerShutdown.h"
#include "mc/client/game/IGameServerStartup.h"
#include "mc/client/game/INetworkGameConnector.h"
#include "mc/client/game/ISplitScreenChangedPublisher.h"
#include "mc/client/game/IWorldTransfer.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/MousePointerType.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/common/IMinecraftApp.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/app_extensions/AppExtensionsOwner.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/islands/AppIsland.h"
#include "mc/deps/core/threading/DeferredTasksManager.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"
#include "mc/events/NetworkType.h"
#include "mc/platform/MultiplayerLockedContext.h"
#include "mc/server/commands/test/TestAssetCommandType.h"
#include "mc/server/commands/test/TestCommandType.h"
#include "mc/sound/MusicRepeatMode.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class AppSystemRegistry;
class ChunkSource;
class ClientNetworkSystem;
class ContentCatalogService;
class ContentIdentity;
class ContentLogFileEndPoint;
class DateManager;
class Dimension;
class EDUSystems;
class EntityContext;
class FlightingService;
class GeometryGroup;
class IApp;
class IClientInstance;
class IContentAccessibilityProvider;
class IContentKeyProvider;
class IContentTierManager;
class ILevelListCache;
class IMinecraftEventing;
class IResourcePackRepository;
class ISceneStack;
class ItemRegistryRef;
class LevelDbEnv;
class LevelSettings;
class LinkedAssetValidator;
class LocalPlayer;
class Options;
class PackManifestFactory;
class PackSourceFactory;
class Player;
class RealmsAPI;
class ResourceLoadManager;
class ResourcePackManager;
class ServerInstance;
class ServerInstanceEventCoordinator;
class Vec3;
class WebSocketCommManager;
class WorldTemplateManager;
struct ActorUniqueID;
struct ControllerIDtoClientMap;
struct ScreenshotOptions;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FilePathManager; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class User; }
namespace mce { class UUID; }
class MinecraftInputHandler;
class RenderControllerGroup;
class TextureAtlas;
struct ActorResourceDefinitionGroup;
struct BlockCullingGroup;
struct CDNService;
struct CloudFileUploadManager;
struct ClubsService;
struct ContentAcquisition;
struct CubemapBackgroundResources;
struct DeferredLighting;
struct DevConsoleLogger;
struct EmoticonManager;
struct ExternalContentManager;
struct FontHandle;
struct GameRenderer;
struct GatheringManager;
struct GlobalResourcesCrashRecovery;
struct GuiData;
struct IContentManager;
struct IDlcValidation;
struct IEntitlementManager;
struct IExternalServerFile;
struct IGameModuleApp;
struct IOfferRepository;
struct IThirdPartyServerRepository;
struct IUIDefRepository;
struct IUIRepository;
struct LevelLoader;
struct LibraryRepository;
struct MarketplaceServicesManager;
struct MinecraftGraphics;
struct MusicManager;
struct NewPlayerSystem;
struct PackDownloadManager;
struct ParticleEffectGroup;
struct PersonaRepository;
struct PersonaService;
struct PixelCalc;
struct PlayerMessagingService;
struct ProfanityContext;
struct ResetCallbackObject;
struct SceneFactory;
struct ScreenshotRecorder;
struct SeasonsRenderer;
struct ServiceDrivenImageRepository;
struct ServicesManager;
struct SkinRepository;
struct SoundEngine;
struct StoreCatalogRepository;
struct SunsettingManager;
struct TextToIconMapper;
struct TreatmentPackDownloadMonitor;
struct TrialManager;
struct UIMeasureStrategy;
namespace ClientBlobCache { struct Cache; }
namespace ClientBlockPipeline { struct SchematicsRepository; }
namespace OreUI { struct DataProviderManager_DEPRECATED; }
namespace OreUI { struct IResourceAllowList; }
namespace OreUI { struct Router; }
namespace Parties { struct PartySystem; }
namespace Progress { struct ProgressTips; }
namespace Realms { struct ContentService; }
namespace Realms { struct GenericRequestServiceHandler; }
namespace Realms { struct RealmsServices; }
namespace Realms { struct RealmsSystem; }
namespace Realms { struct SubscriptionService; }
namespace Social { struct MultiplayerServiceManager; }
namespace Social { struct PresenceManager; }
namespace Social { struct SocialSystem; }
namespace World { struct WorldSystem; }
namespace mce { class TextureGroup; }
// clang-format on

class IMinecraftGame : public ::Bedrock::EnableNonOwnerReferences,
                       public ::Bedrock::AppIsland,
                       public ::IMinecraftApp,
                       public ::IGameServerStartup,
                       public ::IGameServerShutdown,
                       public ::INetworkGameConnector,
                       public ::IClientInstances,
                       public ::IWorldTransfer,
                       public ::AppExtensions::AppExtensionsOwner,
                       public ::ISplitScreenChangedPublisher,
                       public ::IGameEventNotifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize() = 0;

#ifdef LL_PLAT_S
    virtual ~IMinecraftGame() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~IMinecraftGame() /*override*/;
#endif

    virtual void update() = 0;

    virtual ::AppSystemRegistry& getAppSystemRegistry() = 0;

    virtual ::EntityContext& getEntity() const = 0;

    virtual void logoffAllSubclients() = 0;

    virtual void buildTreatmentPackStack(bool) const = 0;

    virtual void queueSubclientRemoval(::SubClientId) = 0;

    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> getResourceLoadManager() = 0;

    virtual void handleReloadUIDefinitions() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository> getUIDefRepo() const = 0;

    virtual bool canActivateKeyboard() = 0;

    virtual void releaseClientSubId(::SubClientId) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> getContentTierManager() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const = 0;

    virtual void setDisableInputForAllOtherClients(int, bool) = 0;

    virtual ::DeferredTasksManager<::DeferredTaskCategory>& getDeferredTasks() = 0;

    virtual bool shouldShowRatingsPrompt() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerInstanceEventCoordinator> getServerInstanceEventCoordinator() = 0;

    virtual bool isHostingLocalDedicatedServer() const = 0;

    virtual bool isLeaveGameDone() const = 0;

    virtual void destroyGame() = 0;

    virtual bool isInGame() const = 0;

    virtual void startLeaveGame() = 0;

    virtual bool isAudioInitialized() const = 0;

    virtual ::MusicManager const* getMusicManager() const = 0;

    virtual ::MusicManager* getMusicManagerNonConst() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> getSoundEngine() const = 0;

    virtual void setTextboxText(::std::string const&, int const, ::TextboxTextUpdateReason) = 0;

    virtual void onKeyboardDismissed(int const) = 0;

    virtual void openPauseMenu() = 0;

    virtual void setIsInGame(bool) = 0;

    virtual void createClientItemRegistry() = 0;

    virtual bool hasNetworkPrivileges(bool) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository const>
    getThirdPartyServerRepository() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository> getThirdPartyServerRepository() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> retrieveCIDToClientMap() = 0;

    virtual ::std::map<::SubClientId, ::std::shared_ptr<::IClientInstance>> const& getClientInstanceMap() const = 0;

    virtual void joinMultiplayerWithAddress(
        ::Social::GameConnectionInfo,
        bool,
        ::std::string const&,
        ::std::string const&,
        ::NetworkType,
        bool
    ) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> getOfferRepository() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TrialManager> getTrialManager() const = 0;

    virtual bool isTrialManagerInitialized() const = 0;

    virtual ::InputMode getCurrentInputMode() const = 0;

    virtual void handleInputPaneHidden() = 0;

    virtual bool getSuspended() const = 0;

    virtual bool isResuming() const = 0;

    virtual void setTestExecuteCommandCallback(
        ::std::function<void(::TestCommandType, ::std::vector<::std::string> const&, int)> const&
    ) = 0;

    virtual void setTestAssetCommandCallback(
        ::std::function<void(::TestAssetCommandType, ::std::vector<::std::string> const&)> const&
    ) = 0;

    virtual void runTestExecuteCommandCallback(::TestCommandType, ::std::vector<::std::string> const&, int) const = 0;

    virtual void runTestAssetCommandCallback(::TestAssetCommandType, ::std::vector<::std::string> const&) const = 0;

    virtual uint64 getClientInstanceCount() const = 0;

    virtual void setProfilerIsOn(bool) = 0;

    virtual ::LocalPlayer* getPrimaryLocalPlayer() = 0;

    virtual ::LocalPlayer const* getPrimaryLocalPlayer() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> getPrimaryClientInstance() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance const> getPrimaryClientInstance() const = 0;

    virtual ::ItemRegistryRef getClientItemRegistry() const = 0;

    virtual bool isPrimaryClientInstanceReady() const = 0;

    virtual void ensureAllClientsAreLeaving() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientNetworkSystem> getClientNetworkSystemPtr() = 0;

    virtual ::ClientNetworkSystem& getClientNetworkSystem() = 0;

    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const = 0;

    virtual bool hasAllValidCrossPlatformSkin() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem> getNewPlayerSystem() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem const> getNewPlayerSystem() const = 0;

    virtual void createAndUploadWorldToRealm(
        ::std::string const&,
        ::std::string const&,
        ::ContentIdentity const&,
        ::LevelSettings const&,
        ::Realms::World,
        ::std::function<void(::Realms::World)>
    ) = 0;

    virtual ::ILevelListCache& getLevelListCache() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> getFilePathManager() = 0;

    virtual void setUseFontOverrides(bool useOverrides) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getFontHandle() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getUIFontHandle() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getRuneFontHandle() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getUnicodeFontHandle() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getSmoothFontHandle() const = 0;

    virtual void onClientLevelExit(::IClientInstance&, uint) = 0;

    virtual bool isLocalPlayer(::ActorUniqueID const&) const = 0;

    virtual ::IMinecraftEventing& getEventing() const = 0;

    virtual void reloadAnimationAndGeometryData(bool) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> getGeometryGroup() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> getBlockCullingGroup() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientBlockPipeline::SchematicsRepository>
    getSchematicsRepository() const = 0;

    virtual ::ParticleEffectGroup& getParticleEffectGroup() const = 0;

    virtual ::DeferredLighting& getDeferredLighting() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> getMultiplayerServiceManager() const = 0;

    virtual ::IResourcePackRepository& getResourcePackRepository() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const = 0;

    virtual ::ResourcePackManager& getResourcePackManager() const = 0;

    virtual ::ResourcePackManager& getServerResourcePackManager() = 0;

    virtual ::PackManifestFactory& getPackManifestFactory() = 0;

    virtual ::PlayerMessagingService& getPlayerMessagingService() = 0;

    virtual ::std::shared_ptr<::SkinRepository> getSkinRepository() const = 0;

    virtual ::PersonaRepository& getPersonaRepository() const = 0;

    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> getStoreCacheTextures() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> getMinecraftGraphics() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> getUIRepository() const = 0;

    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const = 0;

    virtual bool isPrimaryLevelMultiplayer() const = 0;

    virtual ::std::string getMultiplayerDisabledTextTitle(::MultiplayerLockedContext) const = 0;

    virtual ::std::string getMultiplayerDisabledTextBody(::MultiplayerLockedContext) const = 0;

    virtual void setRenderingSize(int, int) = 0;

    virtual void recalculateScene() = 0;

    virtual void setUISizeAndScale(int, int, float) = 0;

    virtual bool isReadyToRender() const = 0;

    virtual void onDimensionChanged() = 0;

    virtual void setLeaveGameInProgressAsReadyToContinue() = 0;

    virtual void onClientCreatedLevel(::IClientInstance&) = 0;

    virtual uint64 generateClientId(bool, bool&, uint64, ::std::shared_ptr<::Social::User>) = 0;

    virtual ::std::weak_ptr<::RealmsAPI> getRealms() = 0;

    virtual ::Realms::ContentService& getRealmsContentService() = 0;

    virtual bool getMouseGrabbed() const = 0;

    virtual void navigateToPlayScreenFriendsTab() = 0;

    virtual bool isInRealm() const = 0;

    virtual bool isShowingLoadingScreen() const = 0;

    virtual bool isRenderingLoadingScreen() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalog() const = 0;

    virtual ::ServiceDrivenImageRepository& getServiceImageRepository() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LibraryRepository> getLibraryRepository() const = 0;

    virtual ::GameRenderer& getGameRenderer() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> getTextureAtlas() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas> getTextureAtlas() = 0;

    virtual bool hasActorResourceDefinitionGroup() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const>
    getActorResourceDefinitionGroup() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> getActorResourceDefinitionGroupMutable() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup const> getRenderControllerGroup() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup> getRenderControllerGroup() = 0;

    virtual int getMaxPlayerCount() const = 0;
#ifdef LL_PLAT_S

    virtual void
    queueScreenshotRequest(::ScreenshotOptions&, ::std::function<void(::Core::PathBuffer<::std::string> const&)>) = 0;
#endif

    virtual ::Core::PathBuffer<::std::string> requestScreenshot(::ScreenshotOptions&) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> getOreUIResourceAllowList() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DateManager> getDateManager() const = 0;

    virtual ::PixelCalc const& getDpadScale() const = 0;

    virtual void setKeyboardForcedHeight(float, bool) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getMainSceneStack() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getMainSceneStack() = 0;

    virtual ::OreUI::Router& getUIRouter() = 0;

    virtual ::OreUI::DataProviderManager_DEPRECATED& getDataProviderManager() = 0;

    virtual uint getUIRenderClientMask() const = 0;

    virtual bool useMinecraftVersionOfXBLUI() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PersonaService> getPersonaService() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> getGatheringManager() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::CDNService> getCDNService() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> getContentCatalogService() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FlightingService> getFlightingService() const = 0;

    virtual ::std::shared_ptr<::FlightingService> getFlightingServicePtr() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TreatmentPackDownloadMonitor const>
    getTreatmentPackDownloadMonitor() const = 0;

    virtual ::SceneFactory& getPrimarySceneFactory() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getInput() const = 0;

    virtual void grabMouse() = 0;

    virtual void releaseMouse() = 0;

    virtual void refocusMouse(bool) = 0;

    virtual void setMouseType(::ui::MousePointerType) = 0;

    virtual void play(::std::string const&, ::Vec3 const&, float, float) = 0;

    virtual void playUI(::std::string const&, float, float) = 0;

    virtual void fadeOutMusic() = 0;

    virtual void onPlayerLoaded(::IClientInstance&, ::Player&) = 0;

    virtual bool checkForPiracy() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> getCubemapBackgroundResources() = 0;

    virtual void setAppWillTerminate(bool) = 0;

    virtual ::ServerInstance* getServerInstance() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerInstance> getServerInstanceNonOwnPtr() = 0;

    virtual void setLaunchedFromLegacyVersion(bool) = 0;

    virtual ::UIMeasureStrategy& getUIMeasureStrategy() = 0;

    virtual void registerUpsellScreen() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> getWorldTemplateManager() const = 0;

    virtual ::World::WorldSystem& getWorldSystem() const = 0;

    virtual bool isWorldSystemReady() const = 0;

    virtual ::Social::SocialSystem& getSocialSystem() const = 0;

    virtual ::std::optional<::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem>> getPartySystem() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> getUIProgressTips() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsSystem> getRealmsSystem() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> getEntitlementManager() = 0;

    virtual ::IDlcValidation& getDlcValidation() = 0;

    virtual ::ServicesManager& getServicesManager() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SunsettingManager> getSunsettingManager() = 0;

    virtual void pauseContentDownloads() = 0;

    virtual void resumeContentDownloads() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile> getExternalServer() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::CloudFileUploadManager> getCloudFileUploadManager() const = 0;

    virtual bool isStartingGame() const = 0;

    virtual bool isSplitscreenJoinEnabled() const = 0;

    virtual bool canAddSplitscreenSubClient(int) const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelLoader> getLevelLoader() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager> getContentManager() = 0;

    virtual ::std::shared_ptr<::IClientInstance> tryGetClientInstanceFromPlayerUUID(::mce::UUID const&) const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider const> getAccessibilityProvider() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> getAccessibilityProvider() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition> getContentAcquisition() const = 0;

    virtual void onGameEventNotification(::ui::GameEventNotification) = 0;

    virtual void setRealmsLoadingLink(bool) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IApp> getApp() = 0;

    virtual void clearCache() = 0;

    virtual ::IContentManager& getResourceContentManager() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::EmoticonManager const> getEmoticonManager() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper const> getTextToIconMapper() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper> getTextToIconMapper() = 0;

    virtual void onPrimaryUserReconnect(::Social::UserPlatformConnectionResult, bool) = 0;

    virtual void setSmoothFontStyle() = 0;

    virtual void setUIFontStyle() = 0;

    virtual void copyInternalSettingsFolderToExternalLocation() const = 0;

    virtual void joinRealmFromInvite(::Realms::World const&) = 0;

    virtual void joinRealmFromConnectLink(::Realms::World const&) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsServices> getRealmsServices() = 0;

    virtual ::std::weak_ptr<::ClubsService> getClubsService() = 0;

    virtual ::std::shared_ptr<::Realms::GenericRequestServiceHandler> getGenericRealmsService() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Realms::SubscriptionService> getRealmsSubscriptionService() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> getActiveDirectoryIdentity() = 0;

    virtual ::Bedrock::NonOwnerPointer<::ActiveDirectoryIdentity> getNullableActiveDirectoryIdentity() = 0;

    virtual ::PackSourceFactory& getPackSourceFactory() const = 0;

    virtual void displayActiveDirectoryLoginDialog() = 0;

    virtual void resetInput() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::PresenceManager> getPresenceManager() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getPrimaryGuiData() = 0;

    virtual bool isPrimaryUserSigninInProgress() const = 0;

    virtual void setupCommandParser(::IClientInstance&) = 0;

    virtual void stopSound(::std::string const& name) = 0;

    virtual void stopSounds() = 0;

    virtual ::PackDownloadManager& getPackDownloadManager() = 0;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() = 0;

    virtual void addSubClientInstanceAndAssociateToUser(int) = 0;

    virtual void forEachClientInstance(::std::function<void(::IClientInstance&)>) = 0;

    virtual bool isInitialized() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SeasonsRenderer> getSeasonsRenderer() = 0;

    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationControllerGroup> getActorAnimationControllerGroup() const = 0;

    virtual bool isMultiplayerServiceManagerReady() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WebSocketCommManager> getWebSocketCommManager() = 0;

    virtual void doPrimaryClientReadyWork(::std::function<void()>) = 0;

    virtual void doUserManagerReadyWork(::std::function<void()>) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ScreenshotRecorder> getScreenshotRecorder() = 0;

    virtual ::std::shared_ptr<::ClientBlobCache::Cache> getClientBlobCache() = 0;

    virtual ::Bedrock::NonOwnerPointer<::ContentLogFileEndPoint> const getContentFileLogEndPoint() const = 0;

#ifdef LL_PLAT_C
    virtual ::Bedrock::NonOwnerPointer<::EDUSystems const> getEDUSystems() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems> getEDUSystems() = 0;

    virtual ::std::shared_ptr<::Options> getPrimaryUserOptions() = 0;

    virtual ::std::shared_ptr<::Options const> getPrimaryUserOptions() const = 0;

#endif
    virtual void tryShowXblFirstLaunchScreen(bool) = 0;

    virtual ::Bedrock::PubSub::Subscription registerSplitScreenChangedListener(::std::function<void(uchar)>) const = 0;

    virtual uchar getSplitScreenCount() const = 0;

    virtual ::IGameModuleApp& getGameModule() = 0;

    virtual ::std::shared_ptr<void*> requestMusicDeferment() = 0;

    virtual bool isMusicEnabled() const = 0;

    virtual void queueCustomMusic(::std::string const&, float, float, ::MusicRepeatMode) = 0;

    virtual void playCustomMusic(::std::string const&, float, float, ::MusicRepeatMode) = 0;

    virtual void stopCustomMusic(float) = 0;

    virtual void setMusicCommandVolumeMultiplier(float) = 0;

    virtual float calculateScreenSizeToResolutionScalar(int const, int const) const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GlobalResourcesCrashRecovery const>
    GetGlobalResourcesCrashRecovery() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> getLevelDbEnv() = 0;

    virtual ::Bedrock::NonOwnerPointer<::ChunkSource> getClientGenChunkSource(::DimensionType const&) = 0;

    virtual bool isEditorModeEnabled() const = 0;

    virtual void setResetCallbackObject(::ResetCallbackObject*) = 0;

    virtual void resetThreadCallbacks() = 0;

    virtual void shutdownServer() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> getProfanityContext() = 0;

    virtual double getGameUpdateDurationInSeconds() const = 0;

    virtual ::std::tuple<bool, int> GetEcoModeSettings() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIMinecraftApp();

    MCNAPI static void** $vftableForINetworkGameConnector();

    MCNAPI static void** $vftableForIClientInstances();

    MCNAPI static void** $vftableForAppIsland();

    MCNAPI static void** $vftableForIGameServerStartup();

    MCNAPI static void** $vftableForISplitScreenChangedPublisher();

    MCNAPI static void** $vftableForAppExtensionsOwner();

    MCNAPI static void** $vftableForIGameEventNotifier();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForIWorldTransfer();

    MCNAPI static void** $vftableForIGameServerShutdown();
    // NOLINTEND
};
