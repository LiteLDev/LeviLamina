#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/ClientGameSetupResult.h"
#include "mc/client/game/ClientInstanceState.h"
#include "mc/client/game/ControlOptionType.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/MousePointerType.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/InventoryTabIndex.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/store/StoreErrorCodes.h"
#include "mc/client/util/ClipboardProxy.h"
#include "mc/client/world/JoinServerWorldResult.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/WYSIWYGState.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/events/NetworkType.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class Actor;
class ActorAnimationGroup;
class ActorBlockRenderer;
class ActorRenderDispatcher;
class ActorResourceDefinitionGroup;
class BlockActorRenderDispatcher;
class BlockCullingGroup;
class BlockSource;
class BlockTessellator;
class BuildActionIntention;
class CachedScenes;
class CameraRegistry;
class ClientHitDetectCoordinator;
class ClientInputHandler;
class ClientInstanceEventCoordinator;
class ClientMoveInputHandler;
class ClientNetworkEventCoordinator;
class ClientNetworkSystem;
class ClientRequirementVerifier;
class ClientScriptEventCoordinator;
class ClientScriptManager;
class DateManager;
class DeferredLighting;
class DevConsoleLogger;
class DisconnectionRequestHandler;
class EDUSystems;
class EntityContext;
class EntitySystems;
class FileDataRequest;
class FogDefinitionRegistry;
class FogManager;
class FontHandle;
class FrameUpdateContext;
class GameCallbacks;
class GameModuleClient;
class GameRenderer;
class GeometryGroup;
class GuiData;
class GuidedFlowManager;
class HitDetectSystem;
class HitResult;
class HudIconActorRenderer;
class IClientInstances;
class IConnectionEventing;
class IContentKeyProvider;
class IGameConnectionListener;
class IGameModuleApp;
class IMinecraftEventing;
class IMinecraftGame;
class IOptions;
class IResourcePackRepository;
class ISceneStack;
class ISettingsRegistry;
class ITTSEventManager;
class IUIRepository;
class ItemInHandRenderer;
class ItemRegistryRef;
class ItemRenderer;
class KeyboardManager;
class LatencyGraphDisplay;
class Level;
class LevelRenderer;
class LevelRendererCameraProxy;
class LightTexture;
class LinkedAssetValidator;
class LocalPlayer;
class MarketplaceServicesManager;
class Minecraft;
class MinecraftGraphics;
class MinecraftInputHandler;
class MobEffectsLayout;
class MultiPlayerLevel;
class MusicManager;
class Option;
class Options;
class PackManifestFactory;
class PacketSender;
class PersonaRepository;
class PixelCalc;
class Player;
class PlayerAuthentication;
class PlayerReportHandler;
class ProfanityContext;
class ProgressHandler;
class ResourcePackManager;
class SceneFactory;
class ScreenContext;
class ScreenLoadTimeTracker;
class ShaderColor;
class SkinRepository;
class SkinRepositoryClientInterface;
class SoundEngine;
class StoreCatalogItem;
class StoreCatalogRepository;
class TaskGroup;
class TextToSpeechClient;
class Timer;
class ToastManager;
class TrialManager;
class UIEventCoordinator;
class Vec2;
class Vec3;
class WeakEntityRef;
class WorldTransferAgent;
struct ActorUniqueID;
struct DisconnectionScreenParams;
struct ListenerState;
struct LocalPlayerChangedConnector;
struct PacksInfoData;
struct PlayerJoinWorldTelemetryInfo;
struct ScreenshotOptions;
struct SplitScreenInfo;
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Automation { class AutomationClient; }
namespace Bedrock::Http { class Status; }
namespace Core { class FilePathManager; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Editor { class IEditorManager; }
namespace Editor { class IEditorPlayer; }
namespace OreUI { class ITelemetry; }
namespace OreUI { class Router; }
namespace OreUI { class SceneProvider; }
namespace OreUI { class UIBlockThumbnailAtlasManager; }
namespace PlayerCapabilities { struct IClientController; }
namespace Progress { class ProgressSystem; }
namespace Realms { struct World; }
namespace Scripting { class ScriptEngine; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class User; }
namespace World { class WorldSystem; }
namespace mce { class Camera; }
namespace mce { class Texture; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
namespace mce { struct ViewportInfo; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class IClientInstance : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IClientInstance() /*override*/ = default;

    // vIndex: 1
    virtual void onInitMinecraftGame() = 0;

    // vIndex: 2
    virtual void onDestroyMinecraftGame() = 0;

    // vIndex: 3
    virtual void init(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&,
        ::ClientNetworkSystem&,
        ::Timer&,
        ::Timer&,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&,
        int,
        ::IGameModuleApp&
    ) = 0;

    // vIndex: 4
    virtual void initSceneFactory(::std::unique_ptr<::SceneFactory>, ::std::unique_ptr<::OreUI::SceneProvider>) = 0;

    // vIndex: 5
    virtual void setUiRouter(::std::unique_ptr<::OreUI::Router>) = 0;

    // vIndex: 6
    virtual void initGraphics() = 0;

    // vIndex: 7
    virtual void stop() = 0;

    // vIndex: 8
    virtual void teardown() = 0;

    // vIndex: 9
    virtual void preShutDown() = 0;

    // vIndex: 10
    virtual void setGameConnectionInfo(::Social::GameConnectionInfo const&) = 0;

    // vIndex: 11
    virtual ::std::optional<::Social::GameConnectionInfo> getGameConnectionInfo() = 0;

    // vIndex: 12
    virtual void onStartJoinGame(
        bool,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::NetworkType,
        ::Social::MultiplayerServiceIdentifier,
        bool
    ) = 0;

    // vIndex: 13
    virtual void onCancelJoinGame() = 0;

    // vIndex: 14
    virtual void requestLeaveGameAsync() = 0;

    // vIndex: 15
    virtual void requestLeaveGame(bool, bool) = 0;

    // vIndex: 16
    virtual void stopPlayScreen() = 0;

    // vIndex: 17
    virtual bool isLeaveGameDone() const = 0;

    // vIndex: 18
    virtual void setupPlayScreenForLeaveGame() = 0;

    // vIndex: 19
    virtual void preCacheOutOfGameViews() = 0;

    // vIndex: 20
    virtual void resetPrimaryClient() = 0;

    // vIndex: 21
    virtual void resetGameSession() = 0;

    // vIndex: 22
    virtual void tick() = 0;

    // vIndex: 23
    virtual void frameUpdate(::FrameUpdateContext&) = 0;

    // vIndex: 24
    virtual bool update(bool) = 0;

    // vIndex: 25
    virtual void preFrameTick() = 0;

    // vIndex: 26
    virtual void endFrame() = 0;

    // vIndex: 27
    virtual float getFrameAlpha() = 0;

    // vIndex: 28
    virtual void startSubClientLateJoin(
        bool,
        ::std::unique_ptr<::GameModuleClient>,
        ::std::optional<::PlayerJoinWorldTelemetryInfo>
    ) = 0;

    // vIndex: 29
    virtual ::Bedrock::Threading::Async<::ClientGameSetupResult>
    setupClientGame(bool, ::std::unique_ptr<::GameModuleClient>) = 0;

    // vIndex: 30
    virtual ::BlockSource* getRegion() = 0;

    // vIndex: 31
    virtual ::LocalPlayer* getLocalPlayer() const = 0;

    // vIndex: 32
    virtual void setupPrimaryClientEditorManager() = 0;

    // vIndex: 33
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getLocalEditorPlayer() const = 0;

    // vIndex: 34
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> getEditorManager() const = 0;

    // vIndex: 35
    virtual bool isPlayerInEditor() const = 0;

    // vIndex: 36
    virtual ::LocalPlayerChangedConnector getLocalPlayerChangedConnector() = 0;

    // vIndex: 37
    virtual ::WeakEntityRef getLocalUser() const = 0;

    // vIndex: 38
    virtual ::Actor* getCameraActor() const = 0;

    // vIndex: 39
    virtual void setCameraActor(::Actor*) = 0;

    // vIndex: 40
    virtual ::ListenerState const* getListenerState() const = 0;

    // vIndex: 41
    virtual ::Actor* getCameraTargetActor() const = 0;

    // vIndex: 42
    virtual void setCameraTargetActor(::Actor*) = 0;

    // vIndex: 43
    virtual ::WeakEntityRef getCameraEntity() const = 0;

    // vIndex: 44
    virtual void getRawCameraEntities(::WeakEntityRef&, ::WeakEntityRef&) const = 0;

    // vIndex: 45
    virtual void setRawCameraEntities(::WeakEntityRef, ::WeakEntityRef) = 0;

    // vIndex: 46
    virtual ::HitResult const& getLatestHitResult() const = 0;

    // vIndex: 47
    virtual bool isLeavingGame() const = 0;

    // vIndex: 48
    virtual bool isDestroyingGame() const = 0;

    // vIndex: 49
    virtual bool isShuttingDown() const = 0;

    // vIndex: 50
    virtual bool useLowFrequencyUIRender() const = 0;

    // vIndex: 51
    virtual bool isSplitScreenActive() const = 0;

    // vIndex: 52
    virtual bool isExitingLevel() const = 0;

    // vIndex: 53
    virtual bool isInBedScreen() const = 0;

    // vIndex: 54
    virtual bool isInDeathScreen() const = 0;

    // vIndex: 55
    virtual bool isKeyboardEnabled() const = 0;

    // vIndex: 56
    virtual bool hasCommands() const = 0;

    // vIndex: 57
    virtual int getSplitScreenCount() const = 0;

    // vIndex: 58
    virtual bool isShowingLoadingScreen() const = 0;

    // vIndex: 59
    virtual bool shouldDisconnectOnAppSuspended() const = 0;

    // vIndex: 60
    virtual bool isGamePlayTipsEnabled() const = 0;

    // vIndex: 61
    virtual bool isPlatformNX() const = 0;

    // vIndex: 62
    virtual bool isLocalSplitscreenWith(::ActorUniqueID const&) const = 0;

    // vIndex: 63
    virtual bool isValidCrossPlatformSkin() const = 0;

    // vIndex: 64
    virtual bool isCurrentSkinPlatformLocked() const = 0;

    // vIndex: 65
    virtual bool isSelectedSkinInitialized() const = 0;

    // vIndex: 66
    virtual ::SplitScreenInfo getSplitScreenInfo() const = 0;

    // vIndex: 67
    virtual int getCurrentMaxGUIScaleIndex() const = 0;

    // vIndex: 68
    virtual bool getHandlingControllerDisconnect() = 0;

    // vIndex: 69
    virtual void setOpenControllerDisconnectScreen(bool) = 0;

    // vIndex: 70
    virtual ::ClientPlayMode getClientPlayMode() const = 0;

    // vIndex: 71
    virtual void setClientPlayMode(::ClientPlayMode const&) = 0;

    // vIndex: 72
    virtual ::std::function<void()> getCreditsCallback() = 0;

    // vIndex: 73
    virtual void setCreditsCallback(::std::function<void()>) = 0;

    // vIndex: 74
    virtual void setupTransitionForCredits(::std::function<void()>) = 0;

    // vIndex: 75
    virtual void refreshScreenSizeData() = 0;

    // vIndex: 76
    virtual void onScreenSizeChanged(int, int, float) = 0;

    // vIndex: 77
    virtual void onGuiScaleOffsetChanged() = 0;

    // vIndex: 78
    virtual void onSafeZoneChanged() = 0;

    // vIndex: 79
    virtual bool hasDismissedNewPlayerFlow() const = 0;

    // vIndex: 80
    virtual void quit(::std::string const&, ::std::string const&) = 0;

    // vIndex: 81
    virtual ::IMinecraftGame& getMinecraftGame_DEPRECATED() const = 0;

    // vIndex: 82
    virtual ::IClientInstances& getClientInstances() const = 0;

    // vIndex: 83
    virtual ::World::WorldSystem& getWorldSystem() const = 0;

    // vIndex: 84
    virtual bool isWorldSystemReady() const = 0;

    // vIndex: 85
    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const = 0;

    // vIndex: 87
    virtual ::Bedrock::NonOwnerPointer<::EDUSystems> getEDUSystems() = 0;

    // vIndex: 86
    virtual ::Bedrock::NonOwnerPointer<::EDUSystems const> getEDUSystems() const = 0;

    // vIndex: 88
    virtual ::Bedrock::NonOwnerPointer<::Progress::ProgressSystem> getProgressSystem() const = 0;

    // vIndex: 89
    virtual bool isProgressSystemReady() const = 0;

    // vIndex: 90
    virtual ::IMinecraftEventing& getEventing() const = 0;

    // vIndex: 91
    virtual ::IConnectionEventing& getConnectionEventing() const = 0;

    // vIndex: 92
    virtual ::FontHandle getFontHandle() const = 0;

    // vIndex: 93
    virtual ::FontHandle getRuneFontHandle() const = 0;

    // vIndex: 94
    virtual ::FontHandle getUnicodeFontHandle() const = 0;

    // vIndex: 95
    virtual ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> getGeometryGroup() const = 0;

    // vIndex: 96
    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> getBlockCullingGroup() const = 0;

    // vIndex: 97
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> getMultiplayerServiceManager() const = 0;

    // vIndex: 98
    virtual ::IResourcePackRepository& getResourcePackRepository() const = 0;

    // vIndex: 99
    virtual ::ResourcePackManager& getResourcePackManager() const = 0;

    // vIndex: 100
    virtual ::PackManifestFactory& getPackManifestFactory() = 0;

    // vIndex: 101
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const = 0;

    // vIndex: 102
    virtual ::PacksInfoData const& getHostSpecifiedPacks() const = 0;

    // vIndex: 103
    virtual ::std::shared_ptr<::SkinRepository> getSkinRepository() const = 0;

    // vIndex: 104
    virtual ::SkinRepositoryClientInterface& getSkinRepositoryClientInterface() const = 0;

    // vIndex: 105
    virtual ::PersonaRepository& getPersonaRepository() const = 0;

    // vIndex: 106
    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const = 0;

    // vIndex: 107
    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() = 0;

    // vIndex: 108
    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() const = 0;

    // vIndex: 109
    virtual ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> getStoreCacheTextures() const = 0;

    // vIndex: 110
    virtual ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> getMinecraftGraphics() const = 0;

    // vIndex: 111
    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> getUIRepository() const = 0;

    // vIndex: 112
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() const = 0;

    // vIndex: 113
    virtual ::Bedrock::NotNullNonOwnerPtr<::TrialManager> getTrialManager() const = 0;

    // vIndex: 114
    virtual bool wantToQuit() const = 0;

    // vIndex: 115
    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const = 0;

    // vIndex: 116
    virtual bool isPrimaryLevelMultiplayer() const = 0;

    // vIndex: 117
    virtual bool isAdhocEnabled() const = 0;

    // vIndex: 118
    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() const = 0;

    // vIndex: 119
    virtual bool isMarketplaceDisabled() const = 0;

    // vIndex: 120
    virtual ::std::pair<::StoreErrorCodes, ::std::string> const getMarketplaceDisabledReasonWithErrorCode() const = 0;

    // vIndex: 121
    virtual void linkToOffer(::std::string const&, bool) = 0;

    // vIndex: 122
    virtual void linkToPage(::std::string const&) = 0;

    // vIndex: 123
    virtual void linkTo3PServerOffers(::std::string const&, ::std::string const&) = 0;

    // vIndex: 124
    virtual void navigateToMarketplaceInventoryScreen(::InventoryTabIndex) = 0;

    // vIndex: 125
    virtual void navigateToStoreHomeScreen() = 0;

    // vIndex: 126
    virtual void navigateToCoinPurchaseScreen(int, ::std::function<void(bool, int)>) = 0;

    // vIndex: 127
    virtual void navigateToPurchaseOfferScreen(::StoreCatalogItem&, ::StoreNavigationOrigin, bool const) = 0;

    // vIndex: 128
    virtual void navigateToDressingRoomOfferScreen(::std::string const&) = 0;

    // vIndex: 129
    virtual bool navigateToProfileScreen(::std::string const&, bool const) = 0;

    // vIndex: 130
    virtual void navigateToServersScreen(bool const) = 0;

    // vIndex: 131
    virtual void navigateToHowToPlayScreen(::std::string const&) = 0;

    // vIndex: 132
    virtual void navigateToGatheringInfoScreen(bool) = 0;

    // vIndex: 133
    virtual void navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex) = 0;

    // vIndex: 134
    virtual void navigateToRealmsStoriesTransitionScreen(::Realms::World const&) = 0;

    // vIndex: 135
    virtual void tryPushLeaveGameScreen() = 0;

    // vIndex: 136
    virtual void tryStartDayOneExperience() = 0;

    // vIndex: 137
    virtual bool isReadyToRender() const = 0;

    // vIndex: 138
    virtual void onDimensionChangedEvent() = 0;

    // vIndex: 139
    virtual void onGameEventNotification(::ui::GameEventNotification) = 0;

    // vIndex: 140
    virtual ::std::string getTopScreenName() const = 0;

    // vIndex: 141
    virtual void setLeaveGameInProgressAsReadyToContinue() = 0;

    // vIndex: 142
    virtual void stopDestroying() = 0;

    // vIndex: 143
    virtual void onClientCreatedLevel(
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>>,
        ::OwnerPtr<::EntityContext>
    ) = 0;

    // vIndex: 144
    virtual uint64 getClientRandomId() const = 0;

    // vIndex: 145
    virtual ::PlayerAuthentication& getPlayerAuthentication() = 0;

    // vIndex: 146
    virtual ::std::weak_ptr<::PlayerAuthentication> getWeakPlayerAuthentication() = 0;

    // vIndex: 148
    virtual void createPlayerAuthentication() = 0;

    // vIndex: 147
    virtual void createPlayerAuthentication(uint64) = 0;

    // vIndex: 149
    virtual ::std::string getPlatformId() const = 0;

    // vIndex: 150
    virtual ::std::string getPlatformOnlineId() const = 0;

    // vIndex: 151
    virtual bool useController() const = 0;

    // vIndex: 152
    virtual bool useTouchscreen() const = 0;

    // vIndex: 153
    virtual bool getMouseGrabbed() const = 0;

    // vIndex: 154
    virtual bool currentInputModeIsGamePadOrMotionController() const = 0;

    // vIndex: 155
    virtual bool currentInputModeIsMouseAndKeyboard() const = 0;

    // vIndex: 156
    virtual bool allowPicking() const = 0;

    // vIndex: 157
    virtual bool isShowingMenu() const = 0;

    // vIndex: 158
    virtual bool isShowingPauseScreen() const = 0;

    // vIndex: 159
    virtual bool isShowingProgressScreen() const = 0;

    // vIndex: 160
    virtual bool isShowingWorldProgressScreen() const = 0;

    // vIndex: 161
    virtual bool isShowingRealmsProgressScreen() const = 0;

    // vIndex: 162
    virtual bool isShowingDeathScreen() const = 0;

    // vIndex: 163
    virtual bool isShowingServerForm() const = 0;

    // vIndex: 164
    virtual bool isScreenReplaceable() const = 0;

    // vIndex: 165
    virtual bool isInWorldAndNotShowingAnyMenuScreens() const = 0;

    // vIndex: 166
    virtual bool isWorldActive() const = 0;

    // vIndex: 167
    virtual bool isInRealm() = 0;

    // vIndex: 168
    virtual bool readyForShutdown() const = 0;

    // vIndex: 169
    virtual bool isPrimaryClient() const = 0;

    // vIndex: 170
    virtual bool isEduMode() const = 0;

    // vIndex: 171
    virtual bool isGamepadCursorEnabled() const = 0;

    // vIndex: 172
    virtual bool isInControlCustomization() const = 0;

    // vIndex: 174
    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getServerData() = 0;

    // vIndex: 173
    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft const> getServerData() const = 0;

    // vIndex: 176
    virtual ::MultiPlayerLevel* getLevel() = 0;

    // vIndex: 175
    virtual ::MultiPlayerLevel const* getLevel() const = 0;

    // vIndex: 177
    virtual bool hasLevel() const = 0;

    // vIndex: 178
    virtual bool isPreGame() const = 0;

    // vIndex: 179
    virtual bool isInMultiplayerGame() const = 0;

    // vIndex: 180
    virtual bool isMultiPlayerClient() const = 0;

    // vIndex: 182
    virtual ::IOptions& getOptions() = 0;

    // vIndex: 181
    virtual ::IOptions const& getOptions() const = 0;

    // vIndex: 184
    virtual ::std::shared_ptr<::Options> getOptionsPtr() = 0;

    // vIndex: 183
    virtual ::std::shared_ptr<::Options const> const getOptionsPtr() const = 0;

    // vIndex: 185
    virtual ::std::shared_ptr<::Social::User> const& getUser() const = 0;

    // vIndex: 186
    virtual ::std::shared_ptr<::ISettingsRegistry> getSettingsRegistry() = 0;

    // vIndex: 187
    virtual ::Option const& getShowLearningPromptsOption() const = 0;

    // vIndex: 188
    virtual ::Option& getShowControlTipsOption() = 0;

    // vIndex: 189
    virtual ::Option& getShowControlTipsOverrideOption() = 0;

    // vIndex: 190
    virtual double getControlTipsTimeElapsed() const = 0;

    // vIndex: 191
    virtual void setControlTipsTimeElapsedStart() = 0;

    // vIndex: 192
    virtual ::GameRenderer& getGameRenderer() const = 0;

    // vIndex: 193
    virtual ::LevelRenderer* getLevelRenderer() const = 0;

    // vIndex: 194
    virtual ::LevelRendererCameraProxy* getLevelRendererCameraProxy() const = 0;

    // vIndex: 196
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() = 0;

    // vIndex: 195
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const = 0;

    // vIndex: 197
    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() = 0;

    // vIndex: 198
    virtual ::LightTexture* getLightTexture() = 0;

    // vIndex: 199
    virtual void setupLevelRendering(::MultiPlayerLevel&, ::WeakEntityRef) = 0;

    // vIndex: 200
    virtual ::mce::ViewportInfo const& getViewportInfo() const = 0;

    // vIndex: 201
    virtual void setViewportInfo(::mce::ViewportInfo const&) = 0;

    // vIndex: 202
    virtual ::Vec2 getNormalizedViewportSize() const = 0;

    // vIndex: 203
    virtual void updateChunkRadius() = 0;

    // vIndex: 204
    virtual void setUITexture(::mce::Texture*) = 0;

    // vIndex: 205
    virtual ::mce::Texture* getUITexture() = 0;

    // vIndex: 206
    virtual void setLevelTexture(::mce::Texture*) = 0;

    // vIndex: 207
    virtual ::mce::Texture* getLevelTexture() = 0;

    // vIndex: 208
    virtual void setUICursorTexture(::mce::TexturePtr) = 0;

    // vIndex: 209
    virtual ::mce::TexturePtr getUICursorTexture() const = 0;

    // vIndex: 210
    virtual ::mce::Camera& getCamera() = 0;

    // vIndex: 211
    virtual ::ShaderColor& getShaderColor() = 0;

    // vIndex: 212
    virtual ::ShaderColor& getDarkShaderColor() = 0;

    // vIndex: 213
    virtual void clearGraphicsCache() = 0;

    // vIndex: 214
    virtual void getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef&, float) = 0;

    // vIndex: 215
    virtual bool shouldRenderUICursor() const = 0;

    // vIndex: 216
    virtual bool getRenderPlayerModel() const = 0;

    // vIndex: 217
    virtual ::DeferredLighting& getDeferredLighting() = 0;

    // vIndex: 218
    virtual float getGuiScale() const = 0;

    // vIndex: 219
    virtual ::Option const& getGuiScaleOption() const = 0;

    // vIndex: 220
    virtual int getGuiScaleOffset() const = 0;

    // vIndex: 221
    virtual void setGuiScaleOffset(int) = 0;

    // vIndex: 222
    virtual void renderImGui(::ScreenContext&, bool) = 0;

    // vIndex: 224
    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getGuiData() = 0;

    // vIndex: 223
    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData const> getGuiData() const = 0;

    // vIndex: 225
    virtual ::GuidedFlowManager& getGuidedFlowManager() = 0;

    // vIndex: 226
    virtual ::PixelCalc const& getDpadScale() const = 0;

    // vIndex: 227
    virtual ::Bedrock::NotNullNonOwnerPtr<::DateManager const> getDateManager() const = 0;

    // vIndex: 228
    virtual void addOverrideHoursToDateTime(uint const) = 0;

    // vIndex: 229
    virtual ::ToastManager& getToastManager() = 0;

    // vIndex: 230
    virtual ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&
    getClipboardManager() = 0;

    // vIndex: 232
    virtual ::AbstractScene* getTopScene() = 0;

    // vIndex: 231
    virtual ::AbstractScene const* getTopScene() const = 0;

    // vIndex: 234
    virtual ::AbstractScene* getActiveScene() = 0;

    // vIndex: 233
    virtual ::AbstractScene const* getActiveScene() const = 0;

    // vIndex: 235
    virtual ::SceneFactory& getSceneFactory() const = 0;

    // vIndex: 236
    virtual ::OreUI::SceneProvider& getSceneProvider() const = 0;

    // vIndex: 237
    virtual ::WeakRef<::OreUI::UIBlockThumbnailAtlasManager> getOreUIBlockThumbnailAtlasManager() const = 0;

    // vIndex: 238
    virtual ::ui::ScreenTechStackSelector& getScreenTechStackSelector() = 0;

    // vIndex: 240
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getClientSceneStack() const = 0;

    // vIndex: 239
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getClientSceneStack() = 0;

    // vIndex: 241
    virtual ::OreUI::Router& getClientUIRouter() const = 0;

    // vIndex: 242
    virtual ::ISceneStack& getMainSceneStackInterface() = 0;

    // vIndex: 244
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getMainSceneStack() = 0;

    // vIndex: 243
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getMainSceneStack() const = 0;

    // vIndex: 246
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getCurrentSceneStack() const = 0;

    // vIndex: 245
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getCurrentSceneStack() = 0;

    // vIndex: 248
    virtual ::OreUI::Router& getCurrentUIRouter() = 0;

    // vIndex: 247
    virtual ::OreUI::Router const& getCurrentUIRouter() const = 0;

    // vIndex: 249
    virtual ::OreUI::ITelemetry& getOreUITelemetry() = 0;

    // vIndex: 250
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>
    prepareSceneFor(::ui::SceneType const, ::std::function<::std::shared_ptr<::AbstractScene>()>) = 0;

    // vIndex: 251
    virtual ::CachedScenes& getCachedScenes() = 0;

    // vIndex: 252
    virtual ::std::string getScreenName() const = 0;

    // vIndex: 253
    virtual ::std::string getScreenTelemetry() const = 0;

    // vIndex: 254
    virtual ::ui::SceneType getTopSceneType() const = 0;

    // vIndex: 255
    virtual ::MobEffectsLayout& getMobEffectsLayout() = 0;

    // vIndex: 257
    virtual ::std::string emoticonifyText(::std::string const&) const = 0;

    // vIndex: 256
    virtual ::std::string emoticonifyText(::std::string const&, bool) = 0;

    // vIndex: 258
    virtual void onMobEffectsChange() = 0;

    // vIndex: 259
    virtual void setUISizeAndScale(int, int, float) = 0;

    // vIndex: 260
    virtual void forEachVisibleScreen(::std::function<void(::AbstractScene&)>) = 0;

    // vIndex: 261
    virtual void forEachScreen(::std::function<bool(::AbstractScene&)>, bool) = 0;

    // vIndex: 262
    virtual void forEachScreenConst(::std::function<bool(::AbstractScene const&)>, bool) const = 0;

    // vIndex: 263
    virtual bool updateSceneStack() = 0;

    // vIndex: 264
    virtual void forEachAlwaysAcceptInputScreen(::std::function<void(::AbstractScene&)>, ::AbstractScene const*) = 0;

    // vIndex: 265
    virtual void forEachAlwaysAcceptInputScreenWithTop(::std::function<void(::AbstractScene&)>) = 0;

    // vIndex: 266
    virtual void showPlayerProfile(::std::string const&, ::std::string const&) = 0;

    // vIndex: 267
    virtual bool isInGameInputEnabled() const = 0;

    // vIndex: 268
    virtual void setInGameInputEnabled(bool) = 0;

    // vIndex: 269
    virtual ::Vec2 getSafeZoneScale() const = 0;

    // vIndex: 270
    virtual void verifySkinApproval(
        ::std::string const&,
        ::std::function<void(::std::string)> const&,
        ::std::function<void()> const&
    ) const = 0;

    // vIndex: 271
    virtual ::InputMode getCurrentInputMode() const = 0;

    // vIndex: 272
    virtual bool isTouchGameplayAllowed() const = 0;

    // vIndex: 273
    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getMinecraftInput() const = 0;

    // vIndex: 274
    virtual ::KeyboardManager& getKeyboardManager() = 0;

    // vIndex: 275
    virtual void setLastPointerLocation(float, float, float) = 0;

    // vIndex: 276
    virtual ::Vec3 getLastPointerLocation() = 0;

    // vIndex: 277
    virtual void clearTouchPointerLocations() = 0;

    // vIndex: 278
    virtual void clearTouchPointerLocation(int) = 0;

    // vIndex: 279
    virtual void updateControlOptionState(uint, bool) = 0;

    // vIndex: 280
    virtual void clearActiveControlOptions() = 0;

    // vIndex: 281
    virtual ::std::set<uint> const& getActiveControlOptions() const = 0;

    // vIndex: 282
    virtual ::std::vector<::OptionID> getActiveOptionIDs(::ControlOptionType) const = 0;

    // vIndex: 283
    virtual void setNumberOfActiveConfigs(int) = 0;

    // vIndex: 284
    virtual int getNumberOfActiveConfigs() const = 0;

    // vIndex: 285
    virtual bool isNoConfigSelected() const = 0;

    // vIndex: 286
    virtual void setNumberOfEnabledConfigs(int) = 0;

    // vIndex: 287
    virtual int getNumberOfEnabledConfigs() const = 0;

    // vIndex: 288
    virtual void setWYSIWYGState(::WYSIWYGState) = 0;

    // vIndex: 289
    virtual ::WYSIWYGState getWYSIWYGState() const = 0;

    // vIndex: 290
    virtual void setOtherConfigsExistInThisCategory(bool) = 0;

    // vIndex: 291
    virtual bool getOtherConfigsExistInThisCategory() const = 0;

    // vIndex: 292
    virtual void updateTouchPointerLocation(int, float, float) = 0;

    // vIndex: 293
    virtual ::Vec2 getTouchPointerLocation(int) const = 0;

    // vIndex: 294
    virtual void updateActionPointerId(int) = 0;

    // vIndex: 295
    virtual int getActionPointerId() const = 0;

    // vIndex: 296
    virtual bool shouldUseLastPointerLocationOnFocusChange() = 0;

    // vIndex: 297
    virtual bool currentScreenShouldStealMouse() = 0;

    // vIndex: 298
    virtual ::BuildActionIntention& getInProgressBAI() const = 0;

    // vIndex: 299
    virtual ::PacketSender& getPacketSender() = 0;

    // vIndex: 301
    virtual ::ClientNetworkSystem& getClientNetworkSystem() = 0;

    // vIndex: 300
    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const = 0;

    // vIndex: 302
    virtual void setMoveTurnInput(::std::unique_ptr<::ClientMoveInputHandler>) = 0;

    // vIndex: 303
    virtual void setupPersistentControls(::InputMode) = 0;

    // vIndex: 304
    virtual void resetPlayerMovement() = 0;

    // vIndex: 305
    virtual void suspendPredictedMovement() = 0;

    // vIndex: 306
    virtual void onClientInputInitComplete() = 0;

    // vIndex: 307
    virtual ::glm::vec2 getGamepadCursorPosition() const = 0;

    // vIndex: 308
    virtual void setClientInputHandler(::std::unique_ptr<::ClientInputHandler>) = 0;

    // vIndex: 309
    virtual ::ClientInputHandler* getInput() const = 0;

    // vIndex: 310
    virtual int getControllerId() const = 0;

    // vIndex: 311
    virtual bool hasConnectedController() const = 0;

    // vIndex: 312
    virtual ::SubClientId getClientSubId() const = 0;

    // vIndex: 313
    virtual void setSuspendInput(bool) = 0;

    // vIndex: 314
    virtual void setSuspendDirectionalInput(bool) = 0;

    // vIndex: 315
    virtual void setDisableInput(bool) = 0;

    // vIndex: 316
    virtual void grabMouse() = 0;

    // vIndex: 317
    virtual void releaseMouse() = 0;

    // vIndex: 318
    virtual void refocusMouse(bool) = 0;

    // vIndex: 319
    virtual void setMouseType(::ui::MousePointerType) = 0;

    // vIndex: 320
    virtual void resetBai(int) = 0;

    // vIndex: 321
    virtual void clearInProgressBAI() = 0;

    // vIndex: 322
    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> getSoundEngine() const = 0;

    // vIndex: 323
    virtual ::MusicManager const* getMusicManager() const = 0;

    // vIndex: 324
    virtual ::MusicManager* getMusicManagerNonConst() const = 0;

    // vIndex: 325
    virtual void play(::std::string const&, ::Vec3 const&, float, float) = 0;

    // vIndex: 326
    virtual void playUI(::std::string const&, float, float) = 0;

    // vIndex: 327
    virtual void muteAudio() = 0;

    // vIndex: 328
    virtual void unMuteAudio() = 0;

    // vIndex: 329
    virtual void fadeOutMusic() const = 0;

    // vIndex: 330
    virtual ::TaskGroup& getTaskGroup() = 0;

    // vIndex: 331
    virtual void onFullVanillaPackOnStack() = 0;

    // vIndex: 332
    virtual bool isFullVanillaPackOnStack() const = 0;

    // vIndex: 333
    virtual void onPlayerLoaded(::Player&) = 0;

    // vIndex: 334
    virtual void setClientGameMode(::GameType) = 0;

    // vIndex: 335
    virtual void resetToDefaultGameMode() = 0;

    // vIndex: 336
    virtual ::IGameConnectionListener& getGameConnectionListener() = 0;

    // vIndex: 337
    virtual void connectToThirdPartyServer(::std::string const&, ::std::string const&, int) = 0;

    // vIndex: 338
    virtual void connectToExperience(
        ::std::string const&,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, bool)>,
        ::std::function<void(::World::JoinServerWorldResult)>
    ) = 0;

    // vIndex: 339
    virtual void startExternalNetworkWorld(::Social::GameConnectionInfo, ::std::string const&, bool) = 0;

    // vIndex: 340
    virtual bool isReadyToReconnect() const = 0;

    // vIndex: 341
    virtual bool checkForPiracy() = 0;

    // vIndex: 342
    virtual void updateChatFilterStatus(::ProfanityContext&) = 0;

    // vIndex: 343
    virtual void updateControllerHandling() = 0;

    // vIndex: 344
    virtual void setBehaviorCommandCallback(::std::function<void(::std::string const&, ::BehaviorStatus)>) = 0;

    // vIndex: 345
    virtual void setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus) = 0;

    // vIndex: 346
    virtual void setConnectGamepadScreenActive(bool) = 0;

    // vIndex: 347
    virtual ::Core::PathBuffer<::std::string> requestScreenshot(::ScreenshotOptions&) = 0;

    // vIndex: 348
    virtual ::Core::PathBuffer<::std::string> requestScreenshotAndCreateEncryptedChecksumFile(::ScreenshotOptions&) = 0;

    // vIndex: 349
    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const = 0;

    // vIndex: 350
    virtual ::std::shared_ptr<::FileDataRequest> requestImageFromUrl(
        ::std::string const&,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)>
    ) = 0;

    // vIndex: 351
    virtual void initializeRenderResources() = 0;

    // vIndex: 352
    virtual void postInitRenderResources() = 0;

    // vIndex: 353
    virtual void onAppSuspended() = 0;

    // vIndex: 354
    virtual void onAppSuspensionDisconnect() = 0;

    // vIndex: 355
    virtual void onAppResumed() = 0;

    // vIndex: 356
    virtual void onActiveResourcePacksChanged(::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&) = 0;

    // vIndex: 357
    virtual void reloadEntityRenderers(::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&);

    // vIndex: 358
    virtual ::BlockTessellator& getBlockTessellator() = 0;

    // vIndex: 359
    virtual ::BlockActorRenderDispatcher& getBlockEntityRenderDispatcher() = 0;

    // vIndex: 360
    virtual ::std::shared_ptr<::ActorRenderDispatcher> getEntityRenderDispatcher() = 0;

    // vIndex: 361
    virtual ::ActorBlockRenderer& getEntityBlockRenderer() = 0;

    // vIndex: 362
    virtual ::ItemInHandRenderer* getItemInHandRenderer() = 0;

    // vIndex: 363
    virtual ::ItemRenderer* getItemRenderer() = 0;

    // vIndex: 364
    virtual ::HudIconActorRenderer* getHudIconActorRenderer() = 0;

    // vIndex: 365
    virtual ::std::deque<::std::string>& getSentMessageHistory() = 0;

    // vIndex: 366
    virtual ::std::deque<::std::string>& getDevConsoleMessageHistory() = 0;

    // vIndex: 367
    virtual ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> getProfanityContext() const = 0;

    // vIndex: 368
    virtual void initTTSClient(::std::shared_ptr<::TextToSpeechClient>) = 0;

    // vIndex: 370
    virtual ::std::shared_ptr<::TextToSpeechClient> getTTSClient() = 0;

    // vIndex: 369
    virtual ::std::shared_ptr<::TextToSpeechClient const> getTTSClient() const = 0;

    // vIndex: 371
    virtual ::std::shared_ptr<::ITTSEventManager> getTTSEventManager() = 0;

    // vIndex: 372
    virtual void
    addTTSMessage(::std::string const&, ::ProfanityFilterContext, bool, ::std::string const&, bool, bool) = 0;

    // vIndex: 373
    virtual void initCommands() = 0;

    // vIndex: 374
    virtual uint getUserId() const = 0;

    // vIndex: 375
    virtual bool isPrimaryUser() const = 0;

    // vIndex: 376
    virtual double getServerConnectionTime() const = 0;

    // vIndex: 377
    virtual void setServerPingTime(int) = 0;

    // vIndex: 378
    virtual int getServerPingTime() const = 0;

    // vIndex: 379
    virtual void setDefaultPlayscreenTab(::PlayScreenDefaultTab) = 0;

    // vIndex: 380
    virtual void setClientInstanceState(::ClientInstanceState const&) = 0;

    // vIndex: 381
    virtual void setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<::UIEventCoordinator>&&) = 0;

    // vIndex: 382
    virtual ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> getUIEventCoordinator() = 0;

    // vIndex: 383
    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> getEventCoordinator() = 0;

    // vIndex: 384
    virtual ::ClientNetworkEventCoordinator& getClientNetworkEventCoordinator() = 0;

    // vIndex: 385
    virtual ::ClientScriptEventCoordinator& getClientScriptEventCoordinator() = 0;

    // vIndex: 386
    virtual ::std::chrono::steady_clock::time_point getNoBlockBreakUntil() = 0;

    // vIndex: 387
    virtual void setNoBlockBreakUntil(::std::chrono::steady_clock::time_point) = 0;

    // vIndex: 388
    virtual ::GameModuleClient* getGameModule() = 0;

    // vIndex: 389
    virtual ::ClientHitDetectCoordinator& getHitEventCoordinator() = 0;

    // vIndex: 390
    virtual ::GameCallbacks& getGameCallbacks() = 0;

    // vIndex: 391
    virtual void setActiveFileStorageArea(::std::shared_ptr<::Core::FileStorageArea>) = 0;

    // vIndex: 392
    virtual void sendClientEnteredLevel() = 0;

    // vIndex: 393
    virtual ::HitDetectSystem* getHitDetectSystem() = 0;

    // vIndex: 394
    virtual bool isPlaying() const = 0;

    // vIndex: 395
    virtual ::ClientInstanceState getClientInstanceState() const = 0;

    // vIndex: 396
    virtual ::LatencyGraphDisplay* getLatencyGraphDisplay() const = 0;

    // vIndex: 397
    virtual ::PlayerCapabilities::IClientController const& getClientCapabilities() const = 0;

    // vIndex: 398
    virtual ::cg::math::Rect<float>
    calculateViewPortModifiers(::SubClientId const, uint64 const, ::SplitScreenDirection const) const = 0;

    // vIndex: 399
    virtual ::std::weak_ptr<::IClientInstance> getWeakPtrToThis() = 0;

    // vIndex: 400
    virtual ::ClientRequirementVerifier const& getClientRequirementVerifier() const = 0;

    // vIndex: 402
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> getFogDefinitionRegistry() const = 0;

    // vIndex: 401
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry> getFogDefinitionRegistry() = 0;

    // vIndex: 404
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager const> getFogManager() const = 0;

    // vIndex: 403
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager> getFogManager() = 0;

    // vIndex: 405
    virtual ::Bedrock::NotNullNonOwnerPtr<::ScreenLoadTimeTracker> getScreenLoadTimeTracker() = 0;

    // vIndex: 406
    virtual ::ItemRegistryRef getItemRegistry() const = 0;

    // vIndex: 407
    virtual ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> getDisconnectionRequestHandler() const = 0;

    // vIndex: 408
    virtual float getRemoteServerTimeMs() const = 0;

    // vIndex: 409
    virtual void setRemoteServerTimeMs(float) = 0;

    // vIndex: 410
    virtual float getRemoteServerNetworkTimeMs() const = 0;

    // vIndex: 411
    virtual void setRemoteServerNetworkTimeMs(float) = 0;

    // vIndex: 412
    virtual ::Bedrock::NonOwnerPointer<::ClientScriptManager> getClientScriptManager() = 0;

    // vIndex: 413
    virtual ::Scripting::ScriptEngine* getScriptingEngine() = 0;

    // vIndex: 414
    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const = 0;

    // vIndex: 415
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler> getPlayerReportHandler() = 0;

    // vIndex: 416
    virtual void flagDisconnectionAndNotify(::Connection::DisconnectFailReason) = 0;

    // vIndex: 417
    virtual void flagDisconnectionAndNotifyWithParams(::DisconnectionScreenParams const&) = 0;

    // vIndex: 418
    virtual void disconnectSubClient(::Connection::DisconnectFailReason) = 0;

    // vIndex: 419
    virtual void setClientUpdateAndRenderThrottling(bool, int, float) = 0;

    // vIndex: 420
    virtual bool isClientUpdateAndRenderThrottlingEnabled() const = 0;

    // vIndex: 421
    virtual int getClientUpdateAndRenderThrottlingThreshold() const = 0;

    // vIndex: 422
    virtual float getClientUpdateAndRenderThrottlingScalar() const = 0;

    // vIndex: 423
    virtual bool isUserBanned() const = 0;

    // vIndex: 424
    virtual void setupPauseManagers() = 0;

    // vIndex: 425
    virtual bool isEligibleForPauseFeature() const = 0;

    // vIndex: 426
    virtual bool requestInGamePause(bool) = 0;

    // vIndex: 427
    virtual void openContentLogHistory() = 0;

    // vIndex: 428
    virtual double getGameUpdateDurationInSeconds() const = 0;

    // vIndex: 429
    virtual ::std::optional<::PlayerJoinWorldTelemetryInfo> getPlayerJoinWorldTelemetryInfo() const = 0;

    // vIndex: 430
    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
