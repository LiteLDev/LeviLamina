#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/DeferredTaskCategory.h"
#include "mc/client/game/IClientInstances.h"
#include "mc/client/game/IGameServerShutdown.h"
#include "mc/client/game/IGameServerStartup.h"
#include "mc/client/game/INetworkGameConnector.h"
#include "mc/client/game/ISplitScreenChangedPublisher.h"
#include "mc/client/game/IWorldTransfer.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/MousePointerType.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/client/sound/MusicRepeatMode.h"
#include "mc/common/IMinecraftApp.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/islands/AppIsland.h"
#include "mc/deps/core/platform/ARVRPlatform.h"
#include "mc/deps/core/threading/DeferredTasksManager.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"
#include "mc/platform/MultiplayerLockedContext.h"
#include "mc/server/commands/test/TestAssetCommandType.h"
#include "mc/server/commands/test/TestCommandType.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class ActorResourceDefinitionGroup;
class AppSystemRegistry;
class BlockCullingGroup;
class BrazeSDKManager;
class CDNService;
class ChunkSource;
class ClientNetworkSystem;
class CloudFileUploadManager;
class ClubsService;
class ContentAcquisition;
class ContentCatalogService;
class ContentIdentity;
class ContentLogFileEndPoint;
class CubemapBackgroundResources;
class DateManager;
class DeferredLighting;
class DevConsoleLogger;
class Dimension;
class EmoticonManager;
class EntityContext;
class ExternalContentManager;
class FlightingService;
class FontHandle;
class GameRenderer;
class GatheringManager;
class GeometryGroup;
class GlobalResourcesCrashRecovery;
class GuiData;
class HolosceneRenderer;
class IApp;
class IClientInstance;
class IContentAccessibilityProvider;
class IContentKeyProvider;
class IContentManager;
class IContentTierManager;
class IDlcValidation;
class IEntitlementManager;
class IExternalServerFile;
class IGameModuleApp;
class ILevelListCache;
class IMinecraftEventing;
class IOfferRepository;
class IResourcePackRepository;
class IThirdPartyServerRepository;
class IUIDefRepository;
class IUIRepository;
class ItemRegistryRef;
class LevelDbEnv;
class LevelLoader;
class LevelSettings;
class LibraryRepository;
class LocalPlayer;
class MarketplaceServicesManager;
class MinecraftGraphics;
class MinecraftInputHandler;
class NewPlayerSystem;
class Options;
class PackDownloadManager;
class PackManifestFactory;
class PackSourceFactory;
class ParticleEffectGroup;
class PersonaRepository;
class PersonaService;
class PixelCalc;
class Player;
class PlayerMessagingService;
class RealmsAPI;
class RenderControllerGroup;
class ResetCallbackObject;
class ResourceLoadManager;
class ResourcePackFileDownloaderManager;
class ResourcePackManager;
class SceneFactory;
class SceneStack;
class ScreenshotRecorder;
class SeasonsRenderer;
class ServerInstance;
class ServerInstanceEventCoordinator;
class ServiceDrivenImageRepository;
class ServicesManager;
class SkinRepository;
class SoundEngine;
class StoreCatalogRepository;
class SunsettingManager;
class TextToIconMapper;
class TextureAtlas;
class TreatmentPackDownloadMonitor;
class TrialManager;
class UIMeasureStrategy;
class UIProfanityContext;
class Vec3;
class WebSocketCommManager;
class WorldTemplateManager;
struct ActorUniqueID;
struct ControllerIDtoClientMap;
struct ScreenshotOptions;
namespace Bedrock::PubSub { class Subscription; }
namespace ClientBlobCache { class Cache; }
namespace ClientBlockPipeline { class SchematicsRepository; }
namespace Core { class FilePathManager; }
namespace OreUI { class DataProviderManager_DEPRECATED; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class Router; }
namespace Realms { class ContentService; }
namespace Realms { class GenericRequestServiceHandler; }
namespace Realms { class RealmsSystem; }
namespace Realms { class SubscriptionService; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerGameInfo; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class PresenceManager; }
namespace Social { class System; }
namespace Social { class User; }
namespace World { class System; }
namespace mce { class TextureGroup; }
namespace mce { class UUID; }
// clang-format on

class IMinecraftGame : public ::Bedrock::EnableNonOwnerReferences,
                       public ::Bedrock::AppIsland,
                       public ::IMinecraftApp,
                       public ::IGameServerStartup,
                       public ::IGameServerShutdown,
                       public ::INetworkGameConnector,
                       public ::IClientInstances,
                       public ::IWorldTransfer,
                       public ::ISplitScreenChangedPublisher {
public:
    // prevent constructor by default
    IMinecraftGame& operator=(IMinecraftGame const&);
    IMinecraftGame(IMinecraftGame const&);
    IMinecraftGame();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initialize(int, char**) = 0;

    // vIndex: 0
    virtual ~IMinecraftGame() /*override*/ = default;

    // vIndex: 2
    virtual void update() = 0;

    // vIndex: 3
    virtual bool isWaitingForPresent() const = 0;

    // vIndex: 4
    virtual bool isVRMode() const = 0;

    // vIndex: 5
    virtual bool isHoloPlatformSessionVisible() const = 0;

    // vIndex: 6
    virtual ::AppSystemRegistry& getAppSystemRegistry() = 0;

    // vIndex: 7
    virtual ::EntityContext& getEntity() const = 0;

    // vIndex: 8
    virtual void logoffAllSubclients() = 0;

    // vIndex: 9
    virtual void buildTreatmentPackStack(bool) const = 0;

    // vIndex: 10
    virtual void queueSubclientRemoval(::SubClientId) = 0;

    // vIndex: 11
    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() const = 0;

    // vIndex: 12
    virtual ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> getResourceLoadManager() = 0;

    // vIndex: 13
    virtual void handleReloadUIDefinitions() = 0;

    // vIndex: 14
    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository> getUIDefRepo() const = 0;

    // vIndex: 15
    virtual bool canActivateKeyboard() = 0;

    // vIndex: 16
    virtual void releaseClientSubId(::SubClientId) = 0;

    // vIndex: 17
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> getContentTierManager() const = 0;

    // vIndex: 18
    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const = 0;

    // vIndex: 19
    virtual void setDisableInputForAllOtherClients(int, bool) = 0;

    // vIndex: 20
    virtual ::DeferredTasksManager<::DeferredTaskCategory>& getDeferredTasks() = 0;

    // vIndex: 21
    virtual bool shouldShowRatingsPrompt() const = 0;

    // vIndex: 22
    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerInstanceEventCoordinator> getServerInstanceEventCoordinator() = 0;

    // vIndex: 5
    virtual bool isHostingLocalDedicatedServer() const = 0;

    // vIndex: 23
    virtual bool isLeaveGameDone() const = 0;

    // vIndex: 24
    virtual void destroyGame() = 0;

    // vIndex: 25
    virtual bool isInGame() const = 0;

    // vIndex: 26
    virtual void startLeaveGame() = 0;

    // vIndex: 27
    virtual bool isAudioInitialized() const = 0;

    // vIndex: 28
    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> getSoundEngine() const = 0;

    // vIndex: 29
    virtual void setTextboxText(::std::string const&, int const, ::TextboxTextUpdateReason) = 0;

    // vIndex: 30
    virtual void onKeyboardDismissed(int const) = 0;

    // vIndex: 31
    virtual void openPauseMenu() = 0;

    // vIndex: 32
    virtual void setIsInGame(bool) = 0;

    // vIndex: 33
    virtual void createClientItemRegistry() = 0;

    // vIndex: 34
    virtual bool hasNetworkPrivileges(bool) = 0;

    // vIndex: 36
    virtual ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository const>
    getThirdPartyServerRepository() const = 0;

    // vIndex: 35
    virtual ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository> getThirdPartyServerRepository() = 0;

    // vIndex: 37
    virtual ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> retrieveCIDToClientMap() = 0;

    // vIndex: 38
    virtual ::std::map<::SubClientId, ::std::shared_ptr<::IClientInstance>> const& getClientInstanceMap() const = 0;

    // vIndex: 39
    virtual void joinMultiplayerFromUI(::Social::MultiplayerGameInfo const&) = 0;

    // vIndex: 40
    virtual void joinMultiplayerWithAddress(::Social::GameConnectionInfo, bool, int, bool) = 0;

    // vIndex: 41
    virtual ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> getOfferRepository() const = 0;

    // vIndex: 42
    virtual ::Bedrock::NotNullNonOwnerPtr<::TrialManager> getTrialManager() const = 0;

    // vIndex: 43
    virtual ::InputMode getCurrentInputMode() const = 0;

    // vIndex: 44
    virtual void handleInputPaneHidden() = 0;

    // vIndex: 45
    virtual bool getSuspended() const = 0;

    // vIndex: 46
    virtual bool isResuming() const = 0;

    // vIndex: 47
    virtual void
    setTestExecuteCommandCallback(::std::function<
                                  void(::TestCommandType, ::std::vector<::std::string> const&, int)> const&) = 0;

    // vIndex: 48
    virtual void
    setTestAssetCommandCallback(::std::function<
                                void(::TestAssetCommandType, ::std::vector<::std::string> const&)> const&) = 0;

    // vIndex: 49
    virtual void runTestExecuteCommandCallback(::TestCommandType, ::std::vector<::std::string> const&, int) const = 0;

    // vIndex: 50
    virtual void runTestAssetCommandCallback(::TestAssetCommandType, ::std::vector<::std::string> const&) const = 0;

    // vIndex: 51
    virtual uint64 getClientInstanceCount() const = 0;

    // vIndex: 52
    virtual void setProfilerIsOn(bool) = 0;

    // vIndex: 54
    virtual ::LocalPlayer* getPrimaryLocalPlayer() = 0;

    // vIndex: 53
    virtual ::LocalPlayer const* getPrimaryLocalPlayer() const = 0;

    // vIndex: 55
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() const = 0;

    // vIndex: 2
    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> getPrimaryClientInstance() = 0;

    // vIndex: 1
    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance const> getPrimaryClientInstance() const = 0;

    // vIndex: 3
    virtual ::ItemRegistryRef getClientItemRegistry() const = 0;

    // vIndex: 56
    virtual bool isPrimaryClientInstanceReady() const = 0;

    // vIndex: 57
    virtual void ensureAllClientsAreLeaving() const = 0;

    // vIndex: 58
    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientNetworkSystem> getClientNetworkSystemPtr() = 0;

    // vIndex: 60
    virtual ::ClientNetworkSystem& getClientNetworkSystem() = 0;

    // vIndex: 59
    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const = 0;

    // vIndex: 61
    virtual bool hasAllValidCrossPlatformSkin() const = 0;

    // vIndex: 63
    virtual ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem> getNewPlayerSystem() = 0;

    // vIndex: 62
    virtual ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem const> getNewPlayerSystem() const = 0;

    // vIndex: 64
    virtual void
    createAndUploadWorldToRealm(::std::string const&, ::std::string const&, ::ContentIdentity const&, ::LevelSettings const&, ::Realms::World, ::std::function<void(::Realms::World)>) = 0;

    // vIndex: 65
    virtual ::ILevelListCache& getLevelListCache() = 0;

    // vIndex: 66
    virtual ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> getFilePathManager() = 0;

    // vIndex: 67
    virtual void setUseFontOverrides(bool) = 0;

    // vIndex: 68
    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getFontHandle() const = 0;

    // vIndex: 69
    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getUIFontHandle() const = 0;

    // vIndex: 70
    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getRuneFontHandle() const = 0;

    // vIndex: 71
    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getUnicodeFontHandle() const = 0;

    // vIndex: 72
    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getSmoothFontHandle() const = 0;

    // vIndex: 73
    virtual void onClientLevelExit(::IClientInstance&, uint) = 0;

    // vIndex: 74
    virtual bool isLocalPlayer(::ActorUniqueID const&) const = 0;

    // vIndex: 75
    virtual ::IMinecraftEventing& getEventing() const = 0;

    // vIndex: 76
    virtual void reloadAnimationAndGeometryData(bool) = 0;

    // vIndex: 77
    virtual ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> getGeometryGroup() const = 0;

    // vIndex: 78
    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> getBlockCullingGroup() const = 0;

    // vIndex: 79
    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientBlockPipeline::SchematicsRepository>
    getSchematicsRepository() const = 0;

    // vIndex: 80
    virtual ::ParticleEffectGroup& getParticleEffectGroup() const = 0;

    // vIndex: 81
    virtual ::DeferredLighting& getDeferredLighting() const = 0;

    // vIndex: 82
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> getMultiplayerServiceManager() const = 0;

    // vIndex: 83
    virtual ::IResourcePackRepository& getResourcePackRepository() const = 0;

    // vIndex: 84
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const = 0;

    // vIndex: 85
    virtual ::ResourcePackManager& getResourcePackManager() const = 0;

    // vIndex: 86
    virtual ::ResourcePackManager& getServerResourcePackManager() = 0;

    // vIndex: 87
    virtual ::PackManifestFactory& getPackManifestFactory() = 0;

    // vIndex: 88
    virtual ::PlayerMessagingService& getPlayerMessagingService() = 0;

    // vIndex: 89
    virtual ::std::shared_ptr<::SkinRepository> getSkinRepository() const = 0;

    // vIndex: 90
    virtual ::PersonaRepository& getPersonaRepository() const = 0;

    // vIndex: 91
    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const = 0;

    // vIndex: 92
    virtual ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> getStoreCacheTextures() const = 0;

    // vIndex: 93
    virtual ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> getMinecraftGraphics() = 0;

    // vIndex: 94
    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> getUIRepository() const = 0;

    // vIndex: 95
    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const = 0;

    // vIndex: 96
    virtual bool isPrimaryLevelMultiplayer() const = 0;

    // vIndex: 97
    virtual ::std::string getMultiplayerDisabledTextTitle(::MultiplayerLockedContext) const = 0;

    // vIndex: 98
    virtual ::std::string getMultiplayerDisabledTextBody(::MultiplayerLockedContext) const = 0;

    // vIndex: 99
    virtual void setRenderingSize(int, int) = 0;

    // vIndex: 100
    virtual void recalculateScene() = 0;

    // vIndex: 101
    virtual void setUISizeAndScale(int, int, float) = 0;

    // vIndex: 102
    virtual bool isReadyToRender() const = 0;

    // vIndex: 103
    virtual void onDimensionChanged() = 0;

    // vIndex: 104
    virtual void setLeaveGameInProgressAsReadyToContinue() = 0;

    // vIndex: 105
    virtual void onClientCreatedLevel(::IClientInstance&) = 0;

    // vIndex: 106
    virtual uint64 generateClientId(bool, bool&, uint64, ::std::shared_ptr<::Social::User>) = 0;

    // vIndex: 107
    virtual ::std::weak_ptr<::RealmsAPI> getRealms() = 0;

    // vIndex: 108
    virtual ::Realms::ContentService& getRealmsContentService() = 0;

    // vIndex: 109
    virtual bool getMouseGrabbed() const = 0;

    // vIndex: 110
    virtual void navigateToPlayScreenFriendsTab() = 0;

    // vIndex: 111
    virtual bool getForceMonoscopic() const = 0;

    // vIndex: 112
    virtual bool isInRealm() const = 0;

    // vIndex: 113
    virtual bool isShowingLoadingScreen() const = 0;

    // vIndex: 114
    virtual bool isRenderingLoadingScreen() const = 0;

    // vIndex: 115
    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalog() const = 0;

    // vIndex: 116
    virtual ::ServiceDrivenImageRepository& getServiceImageRepository() const = 0;

    // vIndex: 117
    virtual ::Bedrock::NotNullNonOwnerPtr<::LibraryRepository> getLibraryRepository() const = 0;

    // vIndex: 118
    virtual ::GameRenderer& getGameRenderer() const = 0;

    // vIndex: 119
    virtual ::Bedrock::NonOwnerPointer<::HolosceneRenderer> getHolosceneRenderer() const = 0;

    // vIndex: 121
    virtual ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> getTextureAtlas() const = 0;

    // vIndex: 120
    virtual ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas> getTextureAtlas() = 0;

    // vIndex: 122
    virtual bool hasActorResourceDefinitionGroup() const = 0;

    // vIndex: 123
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const>
    getActorResourceDefinitionGroup() const = 0;

    // vIndex: 124
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> getActorResourceDefinitionGroupMutable() = 0;

    // vIndex: 126
    virtual ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup const> getRenderControllerGroup() const = 0;

    // vIndex: 125
    virtual ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup> getRenderControllerGroup() = 0;

    // vIndex: 127
    virtual int getMaxPlayerCount() const = 0;

    // vIndex: 128
    virtual void
    queueScreenshotRequest(::ScreenshotOptions&, ::std::function<void(::Core::PathBuffer<::std::string> const&)>) = 0;

    // vIndex: 129
    virtual ::Core::PathBuffer<::std::string> requestScreenshot(::ScreenshotOptions&) = 0;

    // vIndex: 130
    virtual ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> getOreUIResourceAllowList() = 0;

    // vIndex: 131
    virtual ::Bedrock::NotNullNonOwnerPtr<::DateManager> getDateManager() const = 0;

    // vIndex: 132
    virtual ::PixelCalc const& getDpadScale() const = 0;

    // vIndex: 133
    virtual void setKeyboardForcedHeight(float, bool) = 0;

    // vIndex: 135
    virtual ::Bedrock::NotNullNonOwnerPtr<::SceneStack const> getMainSceneStack() const = 0;

    // vIndex: 134
    virtual ::Bedrock::NotNullNonOwnerPtr<::SceneStack> getMainSceneStack() = 0;

    // vIndex: 136
    virtual ::OreUI::Router& getUIRouter() = 0;

    // vIndex: 137
    virtual ::OreUI::DataProviderManager_DEPRECATED& getDataProviderManager() = 0;

    // vIndex: 138
    virtual uint getUIRenderClientMask() const = 0;

    // vIndex: 139
    virtual bool useMinecraftVersionOfXBLUI() const = 0;

    // vIndex: 140
    virtual ::Bedrock::NotNullNonOwnerPtr<::PersonaService> getPersonaService() const = 0;

    // vIndex: 141
    virtual ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> getGatheringManager() const = 0;

    // vIndex: 142
    virtual ::Bedrock::NotNullNonOwnerPtr<::CDNService> getCDNService() const = 0;

    // vIndex: 143
    virtual ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> getContentCatalogService() const = 0;

    // vIndex: 144
    virtual ::Bedrock::NotNullNonOwnerPtr<::FlightingService> getFlightingService() const = 0;

    // vIndex: 145
    virtual ::std::shared_ptr<::FlightingService> getFlightingServicePtr() const = 0;

    // vIndex: 146
    virtual ::Bedrock::NotNullNonOwnerPtr<::TreatmentPackDownloadMonitor const>
    getTreatmentPackDownloadMonitor() const = 0;

    // vIndex: 147
    virtual ::SceneFactory& getPrimarySceneFactory() const = 0;

    // vIndex: 148
    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getInput() const = 0;

    // vIndex: 149
    virtual void grabMouse() = 0;

    // vIndex: 150
    virtual void releaseMouse() = 0;

    // vIndex: 151
    virtual void refocusMouse(bool) = 0;

    // vIndex: 152
    virtual void setMouseType(::ui::MousePointerType) = 0;

    // vIndex: 153
    virtual void play(::std::string const&, ::Vec3 const&, float, float) = 0;

    // vIndex: 154
    virtual void playUI(::std::string const&, float, float) = 0;

    // vIndex: 155
    virtual void fadeOutMusic() = 0;

    // vIndex: 156
    virtual void onPlayerLoaded(::IClientInstance&, ::Player&) = 0;

    // vIndex: 157
    virtual bool checkForPiracy() const = 0;

    // vIndex: 158
    virtual ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> getCubemapBackgroundResources() = 0;

    // vIndex: 159
    virtual void setAppWillTerminate(bool) = 0;

    // vIndex: 160
    virtual ::ServerInstance* getServerInstance() = 0;

    // vIndex: 161
    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerInstance> getServerInstanceNonOwnPtr() = 0;

    // vIndex: 162
    virtual void setLaunchedForHMD(::ARVRPlatform) = 0;

    // vIndex: 163
    virtual ::ARVRPlatform getLaunchedForHMDPlatform() const = 0;

    // vIndex: 164
    virtual void setLaunchedFromLegacyVersion(bool) = 0;

    // vIndex: 165
    virtual ::UIMeasureStrategy& getUIMeasureStrategy() = 0;

    // vIndex: 166
    virtual void registerUpsellScreen() = 0;

    // vIndex: 167
    virtual float getHoloscreenHalfWidth() = 0;

    // vIndex: 168
    virtual void setHoloscreenHalfWidth(float) = 0;

    // vIndex: 169
    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> getWorldTemplateManager() const = 0;

    // vIndex: 170
    virtual ::World::System& getWorldSystem() const = 0;

    // vIndex: 171
    virtual ::Social::System& getSocialSystem() const = 0;

    // vIndex: 172
    virtual ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsSystem> getRealmsSystem() const = 0;

    // vIndex: 173
    virtual ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> getEntitlementManager() = 0;

    // vIndex: 174
    virtual ::IDlcValidation& getDlcValidation() = 0;

    // vIndex: 175
    virtual ::ServicesManager& getServicesManager() = 0;

    // vIndex: 176
    virtual ::BrazeSDKManager& getBrazeSDKManager() = 0;

    // vIndex: 177
    virtual ::Bedrock::NotNullNonOwnerPtr<::SunsettingManager> getSunsettingManager() = 0;

    // vIndex: 178
    virtual void pauseContentDownloads() = 0;

    // vIndex: 179
    virtual void resumeContentDownloads() = 0;

    // vIndex: 180
    virtual ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile> getExternalServer() const = 0;

    // vIndex: 181
    virtual ::Bedrock::NotNullNonOwnerPtr<::CloudFileUploadManager> getCloudFileUploadManager() const = 0;

    // vIndex: 182
    virtual bool isStartingGame() const = 0;

    // vIndex: 183
    virtual bool isSplitscreenJoinEnabled() const = 0;

    // vIndex: 184
    virtual bool canAddSplitscreenSubClient(int) const = 0;

    // vIndex: 185
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelLoader> getLevelLoader() = 0;

    // vIndex: 186
    virtual ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager> getContentManager() = 0;

    // vIndex: 187
    virtual ::std::shared_ptr<::IClientInstance> tryGetClientInstanceFromPlayerUUID(::mce::UUID const&) const = 0;

    // vIndex: 189
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider const> getAccessibilityProvider() const = 0;

    // vIndex: 188
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> getAccessibilityProvider() = 0;

    // vIndex: 190
    virtual ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition> getContentAcquisition() const = 0;

    // vIndex: 191
    virtual void onGameEventNotification(::ui::GameEventNotification) = 0;

    // vIndex: 192
    virtual void setRealmsLoadingLink(bool) = 0;

    // vIndex: 193
    virtual ::Bedrock::NotNullNonOwnerPtr<::IApp> getApp() = 0;

    // vIndex: 194
    virtual void clearCache() = 0;

    // vIndex: 195
    virtual ::IContentManager& getResourceContentManager() = 0;

    // vIndex: 196
    virtual ::Bedrock::NotNullNonOwnerPtr<::EmoticonManager const> getEmoticonManager() const = 0;

    // vIndex: 198
    virtual ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper const> getTextToIconMapper() const = 0;

    // vIndex: 197
    virtual ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper> getTextToIconMapper() = 0;

    // vIndex: 199
    virtual ::std::string getDevConsoleLogFileName() const = 0;

    // vIndex: 200
    virtual void setOptionsSetForAutomation(bool) = 0;

    // vIndex: 201
    virtual bool IsRunningOnTestCloud() const = 0;

    // vIndex: 202
    virtual void SetRunningOnTestCloud(bool) = 0;

    // vIndex: 203
    virtual void onPrimaryUserReconnect(::Social::UserPlatformConnectionResult, bool) = 0;

    // vIndex: 204
    virtual void setSmoothFontStyle() = 0;

    // vIndex: 205
    virtual void setUIFontStyle() = 0;

    // vIndex: 206
    virtual void copyInternalSettingsFolderToExternalLocation() const = 0;

    // vIndex: 207
    virtual void joinRealmFromInvite(::Realms::World const&) = 0;

    // vIndex: 208
    virtual void joinRealmFromConnectLink(::Realms::World const&) = 0;

    // vIndex: 209
    virtual ::Bedrock::NotNullNonOwnerPtr<::ClubsService> getClubsService() = 0;

    // vIndex: 210
    virtual ::std::shared_ptr<::Realms::GenericRequestServiceHandler> getGenericRealmsService() = 0;

    // vIndex: 211
    virtual ::Bedrock::NotNullNonOwnerPtr<::Realms::SubscriptionService> getRealmsSubscriptionService() = 0;

    // vIndex: 212
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> getActiveDirectoryIdentity() = 0;

    // vIndex: 213
    virtual ::Bedrock::NonOwnerPointer<::ActiveDirectoryIdentity> getNullableActiveDirectoryIdentity() = 0;

    // vIndex: 214
    virtual ::PackSourceFactory& getPackSourceFactory() const = 0;

    // vIndex: 215
    virtual ::std::weak_ptr<::ResourcePackFileDownloaderManager>
    getResourcePackDownloadManager(::std::string const&) const = 0;

    // vIndex: 216
    virtual void displayActiveDirectoryLoginDialog() = 0;

    // vIndex: 217
    virtual void resetInput() = 0;

    // vIndex: 218
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::PresenceManager> getPresenceManager() = 0;

    // vIndex: 219
    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getPrimaryGuiData() = 0;

    // vIndex: 220
    virtual bool isPrimaryUserSigninInProgress() const = 0;

    // vIndex: 221
    virtual void setupCommandParser(::IClientInstance&) = 0;

    // vIndex: 222
    virtual void stopSound(::std::string const&) = 0;

    // vIndex: 223
    virtual void stopSounds() = 0;

    // vIndex: 224
    virtual ::PackDownloadManager& getPackDownloadManager() = 0;

    // vIndex: 225
    virtual void addSubClientInstanceAndAssociateToUser(int) = 0;

    // vIndex: 226
    virtual void forEachClientInstance(::std::function<void(::IClientInstance&)>) = 0;

    // vIndex: 227
    virtual bool isInitialized() const = 0;

    // vIndex: 229
    virtual ::std::shared_ptr<::Options> getPrimaryUserOptions() = 0;

    // vIndex: 228
    virtual ::std::shared_ptr<::Options const> getPrimaryUserOptions() const = 0;

    // vIndex: 230
    virtual ::Bedrock::NotNullNonOwnerPtr<::SeasonsRenderer> getSeasonsRenderer() = 0;

    // vIndex: 231
    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() const = 0;

    // vIndex: 232
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationControllerGroup> getActorAnimationControllerGroup() const = 0;

    // vIndex: 233
    virtual bool isMultiplayerServiceManagerReady() const = 0;

    // vIndex: 234
    virtual ::Bedrock::NotNullNonOwnerPtr<::WebSocketCommManager> getWebSocketCommManager() = 0;

    // vIndex: 235
    virtual void doPrimaryClientReadyWork(::std::function<void()>) = 0;

    // vIndex: 236
    virtual void doUserManagerReadyWork(::std::function<void()>) = 0;

    // vIndex: 237
    virtual ::Bedrock::NotNullNonOwnerPtr<::ScreenshotRecorder> getScreenshotRecorder() = 0;

    // vIndex: 238
    virtual ::std::shared_ptr<::ClientBlobCache::Cache> getClientBlobCache() = 0;

    // vIndex: 239
    virtual ::Bedrock::NonOwnerPointer<::ContentLogFileEndPoint> const getContentFileLogEndPoint() const = 0;

    // vIndex: 240
    virtual void tryShowXblFirstLaunchScreen(bool) = 0;

    // vIndex: 0
    virtual ::Bedrock::PubSub::Subscription registerSplitScreenChangedListener(::std::function<void(uchar)>) const = 0;

    // vIndex: 1
    virtual uchar getSplitScreenCount() const = 0;

    // vIndex: 241
    virtual ::IGameModuleApp& getGameModule() = 0;

    // vIndex: 242
    virtual ::std::shared_ptr<void*> requestMusicDeferment() = 0;

    // vIndex: 243
    virtual bool isMusicEnabled() const = 0;

    // vIndex: 244
    virtual void queueCustomMusic(::std::string const&, float, float, ::MusicRepeatMode) = 0;

    // vIndex: 245
    virtual void playCustomMusic(::std::string const&, float, float, ::MusicRepeatMode) = 0;

    // vIndex: 246
    virtual void stopCustomMusic(float) = 0;

    // vIndex: 247
    virtual void setMusicCommandVolumeMultiplier(float) = 0;

    // vIndex: 248
    virtual float calculateScreenSizeToResolutionScalar(int const, int const) const = 0;

    // vIndex: 249
    virtual ::Bedrock::NotNullNonOwnerPtr<::GlobalResourcesCrashRecovery const>
    GetGlobalResourcesCrashRecovery() const = 0;

    // vIndex: 250
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> getLevelDbEnv() = 0;

    // vIndex: 251
    virtual ::Bedrock::NonOwnerPointer<::ChunkSource> getClientGenChunkSource(::DimensionType const&) = 0;

    // vIndex: 252
    virtual bool isEditorModeEnabled() const = 0;

    // vIndex: 253
    virtual void setResetCallbackObject(::ResetCallbackObject*) = 0;

    // vIndex: 254
    virtual void resetThreadCallbacks() = 0;

    // vIndex: 255
    virtual void shutdownServer() = 0;

    // vIndex: 256
    virtual ::Bedrock::NotNullNonOwnerPtr<::UIProfanityContext> getUIProfanityContext() = 0;

    // vIndex: 257
    virtual double getGameUpdateDurationInSeconds() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
