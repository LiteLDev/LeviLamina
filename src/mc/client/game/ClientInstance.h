#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/client/game/ClientGameSetupResult.h"
#include "mc/client/game/ClientInstanceState.h"
#include "mc/client/game/ControlOptionType.h"
#include "mc/client/game/DiskStatus.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/MousePointerType.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/InventoryTabIndex.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/connection/UIReturnTarget.h"
#include "mc/client/store/StoreErrorCodes.h"
#include "mc/client/util/ClipboardProxy.h"
#include "mc/client/world/JoinServerWorldResult.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/threading/Async.h"
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
#include "mc/network/connection/DisconnectionStage.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/GameCallbacks.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/player/PlayerListener.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorAnimationGroup;
class BlockSource;
class ClientHitDetectCoordinator;
class ClientInstanceEventCoordinator;
class ClientNetworkEventCoordinator;
class ClientNetworkSystem;
class ClientScriptEventCoordinator;
class DateManager;
class EDUSystems;
class EntityContext;
class EntitySystems;
class GeometryGroup;
class HitResult;
class IAdvancedGraphicsOptions;
class IClientInstances;
class IConnectionEventing;
class IContentKeyProvider;
class IMinecraftApp;
class IMinecraftEventing;
class IMinecraftGame;
class IOptions;
class IResourcePackRepository;
class ISceneStack;
class ItemRegistryRef;
class LegacyMultiplayerToken;
class Level;
class LevelListener;
class LinkedAssetValidator;
class LocalPlayer;
class Minecraft;
class MultiPlayerLevel;
class NetworkSessionOwner;
class Option;
class Options;
class PackManifestFactory;
class PacketSender;
class Player;
class ResourcePackManager;
class ShaderColor;
class TaskGroup;
class Timer;
class ToastManager;
class UIEventCoordinator;
class Vec2;
class Vec3;
class WeakEntityRef;
struct ActorUniqueID;
struct DisconnectionErrorDetails;
struct DisconnectionScreenParams;
struct LocalPlayerChangedConnector;
struct PacksInfoData;
struct PlayerJoinWorldTelemetryInfo;
struct RawGameServerToken;
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
namespace Realms { struct World; }
namespace Scripting { class ScriptEngine; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class User; }
namespace mce { class Camera; }
namespace mce { class TexturePtr; }
namespace mce { struct ViewportInfo; }
class BuildActionIntention;
class ClientInputHandler;
class ClientMoveInputHandler;
class FontHandle;
class GuiData;
class ItemInHandRenderer;
class KeyboardManager;
class LevelRenderer;
class LevelRendererCameraProxy;
class LightTexture;
class MinecraftInputHandler;
class ScreenContext;
struct AbstractScene;
struct ActorBlockRenderer;
struct ActorRenderDispatcher;
struct ActorResourceDefinitionGroup;
struct BlockActorRenderDispatcher;
struct BlockCullingGroup;
struct BlockTessellator;
struct CachedScenes;
struct CameraRegistry;
struct ClientRequirementVerifier;
struct ClientScriptManager;
struct DeferredLighting;
struct DevConsoleLogger;
struct DisconnectionRequestHandler;
struct FileDataRequest;
struct FogDefinitionRegistry;
struct FogManager;
struct FrameUpdateContext;
struct GameModuleClient;
struct GameRenderer;
struct GuidedFlowManager;
struct HitDetectSystem;
struct HudIconActorRenderer;
struct IGameConnectionListener;
struct IGameModuleApp;
struct ISettingsRegistry;
struct ITTSEventManager;
struct IUIRepository;
struct ItemRenderer;
struct LatencyGraphDisplay;
struct LegacyClientNetworkHandler;
struct ListenerState;
struct MarketplaceServicesManager;
struct MinecraftGraphics;
struct MobEffectsLayout;
struct MusicManager;
struct PersonaRepository;
struct PixelCalc;
struct PlayerAuthentication;
struct PlayerReportHandler;
struct ProfanityContext;
struct ProgressHandler;
struct SceneFactory;
struct ScreenLoadTimeTracker;
struct SkinRepository;
struct SkinRepositoryClientInterface;
struct SoundEngine;
struct StoreCatalogItem;
struct StoreCatalogRepository;
struct TextToSpeechClient;
struct TrialManager;
struct VideoCaptureSessionManager;
struct WorldTransferAgent;
namespace Bedrock::DevTools { struct CommandExecutor; }
namespace OreUI { struct Router; }
namespace OreUI { struct SceneProvider; }
namespace OreUI { struct UIBlockThumbnailAtlasManager; }
namespace PlayerCapabilities { struct IClientController; }
namespace Social { struct MultiplayerServiceManager; }
namespace World { struct WorldSystem; }
namespace mce { class Texture; }
namespace mce { class TextureGroup; }
namespace ui { struct ScreenTechStackSelector; }
// clang-format on

class ClientInstance : public ::IClientInstance,
                       public ::Core::StorageAreaStateListener,
                       public ::GameCallbacks,
                       public ::PlayerListener,
                       public ::std::enable_shared_from_this<::ClientInstance> {
public:
    // ClientInstance inner types declare
    // clang-format off
    struct ClientDestroyBlockState;
    struct ClientRenderResources;
    // clang-format on

    // ClientInstance inner types define
    struct ClientDestroyBlockState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkff7778;
        ::ll::UntypedStorage<8, 8>  mUnk241918;
        ::ll::UntypedStorage<1, 1>  mUnkb9c8a1;
        ::ll::UntypedStorage<8, 8>  mUnk4fdef3;
        ::ll::UntypedStorage<8, 64> mUnk4fd828;
        ::ll::UntypedStorage<8, 64> mUnk738e7f;
        ::ll::UntypedStorage<8, 64> mUnk525e8f;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientDestroyBlockState& operator=(ClientDestroyBlockState const&);
        ClientDestroyBlockState(ClientDestroyBlockState const&);
        ClientDestroyBlockState();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~ClientDestroyBlockState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

    struct ClientRenderResources {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk9600de;
        ::ll::UntypedStorage<8, 32> mUnkc84d55;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientRenderResources& operator=(ClientRenderResources const&);
        ClientRenderResources(ClientRenderResources const&);
        ClientRenderResources();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~ClientRenderResources();
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
    ::ll::UntypedStorage<4, 4>  mUnkeb8701;
    ::ll::UntypedStorage<8, 8>  mUnk40ac05;
    ::ll::UntypedStorage<8, 8>  mUnk9379d1;
    ::ll::UntypedStorage<8, 24> mUnk421768;
    ::ll::UntypedStorage<8, 8>  mUnke2a76f;
    ::ll::UntypedStorage<8, 8>  mUnk599652;
    ::ll::UntypedStorage<1, 1>  mUnk13fce4;
    ::ll::UntypedStorage<8, 8>  mUnkd1e630;
    ::ll::UntypedStorage<8, 8>  mUnk703d29;
    ::ll::UntypedStorage<8, 8>  mUnk6d90fa;
    ::ll::UntypedStorage<8, 8>  mUnkace9a6;
    ::ll::UntypedStorage<8, 8>  mUnk59f993;
    ::ll::UntypedStorage<8, 8>  mUnk5310df;
    ::ll::UntypedStorage<8, 8>  mUnk12a970;
    ::ll::UntypedStorage<8, 16> mUnk3a3d21;
    ::ll::UntypedStorage<8, 8>  mUnk9fe1ff;
    ::ll::UntypedStorage<8, 8>  mUnk29790b;
    ::ll::UntypedStorage<8, 24> mUnk10018d;
    ::ll::UntypedStorage<8, 24> mUnk6d935d;
    ::ll::UntypedStorage<8, 24> mUnk9bcffe;
    ::ll::UntypedStorage<8, 48> mUnk586e60;
    ::ll::UntypedStorage<8, 8>  mUnkba00d2;
    ::ll::UntypedStorage<4, 4>  mUnkfbfba1;
    ::ll::UntypedStorage<1, 1>  mUnkd6f5bb;
    ::ll::UntypedStorage<1, 1>  mUnkc69553;
    ::ll::UntypedStorage<1, 1>  mUnk20b577;
    ::ll::UntypedStorage<1, 1>  mUnka7e48d;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<1, 4> mUnk9e92ce;
#else // LL_PLAT_C
    ::ll::UntypedStorage<4, 4> mUnk9e92ce;
#endif
    ::ll::UntypedStorage<8, 32>  mUnkdbed7b;
    ::ll::UntypedStorage<1, 1>   mUnk48d2a2;
    ::ll::UntypedStorage<1, 1>   mUnk44a215;
    ::ll::UntypedStorage<8, 64>  mUnkc2143d;
    ::ll::UntypedStorage<8, 8>   mUnkfe7255;
    ::ll::UntypedStorage<4, 24>  mUnk8d7d51;
    ::ll::UntypedStorage<8, 40>  mUnk4418d8;
    ::ll::UntypedStorage<8, 8>   mUnkd8008b;
    ::ll::UntypedStorage<8, 512> mUnk2b811b;
    ::ll::UntypedStorage<4, 20>  mUnk6f5e44;
    ::ll::UntypedStorage<4, 20>  mUnk76317a;
    ::ll::UntypedStorage<4, 12>  mUnkd1e9b9;
    ::ll::UntypedStorage<8, 32>  mUnk445360;
    ::ll::UntypedStorage<8, 16>  mUnke10317;
    ::ll::UntypedStorage<4, 4>   mUnk47ffc0;
    ::ll::UntypedStorage<8, 8>   mUnk1052cb;
    ::ll::UntypedStorage<8, 8>   mUnkc24d28;
    ::ll::UntypedStorage<8, 8>   mUnkadcd43;
    ::ll::UntypedStorage<8, 16>  mUnkdb25a3;
    ::ll::UntypedStorage<8, 16>  mUnked2a78;
    ::ll::UntypedStorage<8, 8>   mUnkdcfcea;
    ::ll::UntypedStorage<8, 8>   mUnk82dfd0;
    ::ll::UntypedStorage<8, 8>   mUnk984c7a;
    ::ll::UntypedStorage<8, 16>  mUnkb79e26;
    ::ll::UntypedStorage<8, 8>   mUnk149f78;
    ::ll::UntypedStorage<8, 8>   mUnk5a8bdb;
    ::ll::UntypedStorage<8, 8>   mUnk8fed4e;
    ::ll::UntypedStorage<8, 8>   mUnk269b14;
    ::ll::UntypedStorage<8, 8>   mUnk32b0ff;
    ::ll::UntypedStorage<8, 8>   mUnkbbb9b5;
    ::ll::UntypedStorage<8, 8>   mUnk2b5396;
    ::ll::UntypedStorage<8, 16>  mUnk5da2d9;
    ::ll::UntypedStorage<1, 1>   mUnkfa0970;
    ::ll::UntypedStorage<8, 8>   mUnkf4ba26;
    ::ll::UntypedStorage<8, 8>   mUnk79da84;
    ::ll::UntypedStorage<8, 8>   mUnk8d9725;
    ::ll::UntypedStorage<8, 8>   mUnkbc94b5;
    ::ll::UntypedStorage<1, 1>   mUnk563a7c;
    ::ll::UntypedStorage<8, 8>   mUnkda37dc;
    ::ll::UntypedStorage<4, 4>   mUnk97285b;
    ::ll::UntypedStorage<4, 4>   mUnke5e0bf;
    ::ll::UntypedStorage<8, 16>  mUnk968bec;
    ::ll::UntypedStorage<1, 1>   mUnk343fce;
    ::ll::UntypedStorage<1, 1>   mUnkbca286;
    ::ll::UntypedStorage<1, 1>   mUnk7610a3;
    ::ll::UntypedStorage<1, 1>   mUnk3a5c32;
    ::ll::UntypedStorage<1, 1>   mUnk3430d4;
    ::ll::UntypedStorage<1, 1>   mUnk9f2b54;
    ::ll::UntypedStorage<1, 1>   mUnk962bb4;
    ::ll::UntypedStorage<8, 480> mUnkcc66f1;
    ::ll::UntypedStorage<1, 1>   mUnke203b0;
    ::ll::UntypedStorage<1, 1>   mUnk1ef4d7;
    ::ll::UntypedStorage<1, 1>   mUnk29fbcb;
    ::ll::UntypedStorage<4, 4>   mUnkc07c6b;
    ::ll::UntypedStorage<1, 1>   mUnk923860;
    ::ll::UntypedStorage<8, 8>   mUnk108e78;
    ::ll::UntypedStorage<4, 4>   mUnk7d3d83;
    ::ll::UntypedStorage<8, 40>  mUnke83ed9;
    ::ll::UntypedStorage<8, 40>  mUnk3e9e2f;
    ::ll::UntypedStorage<8, 16>  mUnkcf1108;
    ::ll::UntypedStorage<8, 64>  mUnk393002;
    ::ll::UntypedStorage<8, 16>  mUnk1e3691;
    ::ll::UntypedStorage<8, 8>   mUnkbe2831;
    ::ll::UntypedStorage<8, 8>   mUnke03b83;
    ::ll::UntypedStorage<8, 8>   mUnkee44b0;
    ::ll::UntypedStorage<8, 8>   mUnka8bb72;
    ::ll::UntypedStorage<8, 8>   mUnk5e2ef9;
    ::ll::UntypedStorage<8, 16>  mUnkf8f09a;
    ::ll::UntypedStorage<4, 8>   mUnk973753;
    ::ll::UntypedStorage<4, 8>   mUnk600c92;
    ::ll::UntypedStorage<4, 4>   mUnk737de1;
    ::ll::UntypedStorage<8, 8>   mUnk6aa9fd;
    ::ll::UntypedStorage<8, 8>   mUnkd40519;
    ::ll::UntypedStorage<8, 24>  mUnk5c4c80;
    ::ll::UntypedStorage<8, 8>   mUnk1f7c97;
    ::ll::UntypedStorage<8, 16>  mUnk52193b;
    ::ll::UntypedStorage<8, 8>   mUnk8d9ec3;
    ::ll::UntypedStorage<8, 8>   mUnkc5b1ea;
    ::ll::UntypedStorage<8, 8>   mUnkb1ffcd;
    ::ll::UntypedStorage<8, 24>  mUnk7ffd34;
    ::ll::UntypedStorage<8, 16>  mUnk99ef24;
    ::ll::UntypedStorage<8, 16>  mUnk6182e1;
    ::ll::UntypedStorage<8, 8>   mUnkc5852d;
    ::ll::UntypedStorage<8, 8>   mUnkc94ec9;
    ::ll::UntypedStorage<8, 136> mUnkea7af0;
    ::ll::UntypedStorage<8, 16>  mUnk8b8d16;
    ::ll::UntypedStorage<8, 16>  mUnk2caa57;
    ::ll::UntypedStorage<8, 8>   mUnkf8bdff;
    ::ll::UntypedStorage<8, 24>  mUnkfbc948;
    ::ll::UntypedStorage<8, 24>  mUnk5bb96b;
    ::ll::UntypedStorage<8, 24>  mUnk1e1098;
    ::ll::UntypedStorage<1, 1>   mUnkc75c08;
    ::ll::UntypedStorage<4, 4>   mUnkcef468;
    ::ll::UntypedStorage<4, 4>   mUnk573d1d;
    ::ll::UntypedStorage<8, 16>  mUnkdc75f9;
    ::ll::UntypedStorage<8, 80>  mUnk3892fa;
    ::ll::UntypedStorage<8, 16>  mUnka5c62e;
    ::ll::UntypedStorage<8, 16>  mUnk7dafcc;
    ::ll::UntypedStorage<8, 8>   mUnk513b4d;
    ::ll::UntypedStorage<8, 24>  mUnk7433ce;
    ::ll::UntypedStorage<8, 8>   mUnk4efc95;
    ::ll::UntypedStorage<8, 16>  mUnk3ae8c5;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ClientInstance() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ClientInstance() /*override*/;
#endif

    virtual void onInitMinecraftGame() /*override*/;

    virtual void onDestroyMinecraftGame() /*override*/;

    virtual void init(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const& filePathManager,
        ::ClientNetworkSystem&                                        network,
        ::Timer&                                                      simTimer,
        ::Timer&                                                      realTimer,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&  userManager,
        int                                                           id,
        ::IGameModuleApp&                                             gameModuleApp
    ) /*override*/;

    virtual void initSceneFactory(
        ::std::unique_ptr<::SceneFactory>         sceneFactory,
        ::std::unique_ptr<::OreUI::SceneProvider> sceneProvider
    ) /*override*/;

    virtual void setUiRouter(::std::unique_ptr<::OreUI::Router> uiRouter) /*override*/;

    virtual void initGraphics() /*override*/;

    virtual void stop() /*override*/;

    virtual void teardown() /*override*/;

    virtual void preShutDown() /*override*/;

    virtual void setGameConnectionInfo(::Social::GameConnectionInfo const& gameConnection) /*override*/;

    virtual ::std::optional<::Social::GameConnectionInfo> getGameConnectionInfo() /*override*/;

    virtual void onStartJoinGame(
        bool                                   isJoiningLocalServer,
        ::std::string const&                   multiplayerCorrelationId,
        ::std::string const&                   serverName,
        ::std::string const&                   worldName,
        ::NetworkType                          networkTypeOverride,
        ::Social::MultiplayerServiceIdentifier service,
        bool                                   isServerTransfer
    ) /*override*/;

    virtual void onCancelJoinGame() /*override*/;

    virtual void requestLeaveGameAsync() /*override*/;

    virtual void requestLeaveGame(bool switchScreen, bool sync) /*override*/;

    virtual void stopPlayScreen() /*override*/;

    virtual bool isLeaveGameDone() const /*override*/;

    virtual void setupPlayScreenForLeaveGame() /*override*/;

    virtual void preCacheOutOfGameViews() /*override*/;

    virtual void resetPrimaryClient() /*override*/;

    virtual void resetGameSession() /*override*/;

    virtual void tick() /*override*/;

    virtual void frameUpdate(::FrameUpdateContext& frameUpdateContext) /*override*/;

    virtual void preFrameTick() /*override*/;

    virtual bool update(bool isInitFinished) /*override*/;

    virtual void endFrame() /*override*/;

    virtual float getFrameAlpha() /*override*/;

    virtual void startSubClientLateJoin(
        bool                                            hasXBLBroadcast,
        ::std::unique_ptr<::GameModuleClient>           gameModuleClient,
        ::std::optional<::PlayerJoinWorldTelemetryInfo> primaryClientJoinWorldInfo
    ) /*override*/;

    virtual ::Bedrock::Threading::Async<::ClientGameSetupResult>
    setupClientGame(bool joiningLocalServer, ::std::unique_ptr<::GameModuleClient> gameModuleClient) /*override*/;

    virtual ::BlockSource* getRegion() /*override*/;

    virtual ::LocalPlayer* getLocalPlayer() const /*override*/;

    virtual void setupPrimaryClientEditorManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getLocalEditorPlayer() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> getEditorManager() const /*override*/;

    virtual bool isPlayerInEditor() const /*override*/;

    virtual ::LocalPlayerChangedConnector getLocalPlayerChangedConnector() /*override*/;

    virtual ::WeakEntityRef getLocalUser() const /*override*/;

    virtual ::Actor* getCameraActor() const /*override*/;

    virtual void setCameraActor(::Actor* cameraActor) /*override*/;

    virtual ::ListenerState const* getListenerState() const /*override*/;

    virtual ::Actor* getCameraTargetActor() const /*override*/;

    virtual void setCameraTargetActor(::Actor* cameraTargetActor) /*override*/;

    virtual ::WeakEntityRef getCameraEntity() const /*override*/;

    virtual void getRawCameraEntities(::WeakEntityRef& cameraEntity, ::WeakEntityRef& cameraTargetEntity) const
        /*override*/;

    virtual void setRawCameraEntities(::WeakEntityRef cameraEntity, ::WeakEntityRef cameraTargetEntity) /*override*/;

    virtual ::HitResult const& getLatestHitResult() const /*override*/;

    virtual bool isLeavingGame() const /*override*/;

    virtual bool isDestroyingGame() const /*override*/;

    virtual bool isShuttingDown() const /*override*/;

    virtual bool useLowFrequencyUIRender() const /*override*/;

    virtual bool isSplitScreenActive() const /*override*/;

    virtual bool isExitingLevel() const /*override*/;

    virtual bool isInBedScreen() const /*override*/;

    virtual bool isInDeathScreen() const /*override*/;

    virtual bool isKeyboardEnabled() const /*override*/;

    virtual bool hasCommands() const /*override*/;

    virtual int getSplitScreenCount() const /*override*/;

    virtual bool isShowingLoadingScreen() const /*override*/;

    virtual bool shouldDisconnectOnAppSuspended() const /*override*/;

    virtual bool isGamePlayTipsEnabled() const /*override*/;

    virtual bool isPlatformNX() const /*override*/;

    virtual bool isLocalSplitscreenWith(::ActorUniqueID const& id) const /*override*/;

    virtual bool isValidCrossPlatformSkin() const /*override*/;

    virtual bool isCurrentSkinPlatformLocked() const /*override*/;

    virtual bool isSelectedSkinInitialized() const /*override*/;

    virtual ::SplitScreenInfo getSplitScreenInfo() const /*override*/;

    virtual int getCurrentMaxGUIScaleIndex() const /*override*/;

    virtual bool getHandlingControllerDisconnect() /*override*/;

    virtual void setOpenControllerDisconnectScreen(bool open) /*override*/;

    virtual ::ClientPlayMode getClientPlayMode() const /*override*/;

    virtual void setClientPlayMode(::ClientPlayMode const& mode) /*override*/;

    virtual ::std::function<void()> getCreditsCallback() /*override*/;

    virtual void setCreditsCallback(::std::function<void()> callback) /*override*/;

    virtual void setupTransitionForCredits(::std::function<void()> callback) /*override*/;

    virtual void refreshScreenSizeData() /*override*/;

    virtual void onScreenSizeChanged(int width, int height, float forcedGuiScale) /*override*/;

    virtual void onGuiScaleOffsetChanged() /*override*/;

    virtual void onSafeZoneChanged() /*override*/;

    virtual bool hasDismissedNewPlayerFlow() const /*override*/;

    virtual void quit(::std::string const& src, ::std::string const& reason) /*override*/;

    virtual ::IMinecraftGame& getMinecraftGame_DEPRECATED() const /*override*/;

    virtual ::IClientInstances& getClientInstances() const /*override*/;

    virtual ::World::WorldSystem& getWorldSystem() const /*override*/;

    virtual bool isWorldSystemReady() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems> getEDUSystems() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems const> getEDUSystems() const /*override*/;

    virtual ::IMinecraftEventing& getEventing() const /*override*/;

    virtual ::IConnectionEventing& getConnectionEventing() const /*override*/;

    virtual ::FontHandle getFontHandle() const /*override*/;

    virtual ::FontHandle getRuneFontHandle() const /*override*/;

    virtual ::FontHandle getUnicodeFontHandle() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> getGeometryGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> getBlockCullingGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> getMultiplayerServiceManager() const
        /*override*/;

    virtual ::IResourcePackRepository& getResourcePackRepository() const /*override*/;

    virtual ::ResourcePackManager& getResourcePackManager() const /*override*/;

    virtual ::PackManifestFactory& getPackManifestFactory() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const /*override*/;

    virtual ::PacksInfoData const& getHostSpecifiedPacks() const /*override*/;

    virtual ::std::shared_ptr<::SkinRepository> getSkinRepository() const /*override*/;

    virtual ::PersonaRepository& getPersonaRepository() const /*override*/;

    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const /*override*/;

    virtual ::SkinRepositoryClientInterface& getSkinRepositoryClientInterface() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() /*override*/;

    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> getStoreCacheTextures() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> getMinecraftGraphics() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> getUIRepository() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TrialManager> getTrialManager() const /*override*/;

    virtual bool wantToQuit() const /*override*/;

    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const /*override*/;

    virtual bool isPrimaryLevelMultiplayer() const /*override*/;

    virtual bool isAdhocEnabled() const /*override*/;

    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() const /*override*/;

    virtual bool isMarketplaceDisabled() const /*override*/;

    virtual ::std::pair<::StoreErrorCodes, ::std::string> const getMarketplaceDisabledReasonWithErrorCode() const
        /*override*/;

    virtual void linkToOffer(::std::string const& productId, bool allowWhileInGame) /*override*/;

    virtual void linkToPage(::std::string const& pageId) /*override*/;

    virtual void linkTo3PServerOffers(::std::string const& pageId, ::std::string const& creatorName) /*override*/;

    virtual void navigateToMarketplaceInventoryScreen(::InventoryTabIndex tabIndex) /*override*/;

    virtual void navigateToStoreHomeScreen() /*override*/;

    virtual void navigateToCoinPurchaseScreen(int neededCoins, ::std::function<void(bool, int)> callback) /*override*/;

    virtual void
    navigateToPurchaseOfferScreen(::StoreCatalogItem& item, ::StoreNavigationOrigin, bool const) /*override*/;

    virtual void navigateToDressingRoomOfferScreen(::std::string const& offerId) /*override*/;

    virtual bool navigateToProfileScreen(::std::string const&, bool const preventProgressScreen) /*override*/;

    virtual void navigateToServersScreen(bool const calledFromHyperlink) /*override*/;

    virtual void navigateToHowToPlayScreen(::std::string const& startTopic) /*override*/;

    virtual void navigateToGatheringInfoScreen(bool autoConnect) /*override*/;

    virtual void navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex tabIndex) /*override*/;

    virtual void navigateToRealmsStoriesTransitionScreen(::Realms::World const& world) /*override*/;

    virtual void tryPushLeaveGameScreen() /*override*/;

    virtual void tryStartDayOneExperience() /*override*/;

    virtual bool isReadyToRender() const /*override*/;

    virtual void onDimensionChangedEvent() /*override*/;

    virtual void onGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::std::string getTopScreenName() const /*override*/;

    virtual void setLeaveGameInProgressAsReadyToContinue() /*override*/;

    virtual void stopDestroying() /*override*/;

    virtual void onClientCreatedLevel(
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::OwnerPtr<::EntityContext>                                          userEntity
    ) /*override*/;

    virtual ::PlayerAuthentication& getPlayerAuthentication() /*override*/;

    virtual void createPlayerAuthentication() /*override*/;

    virtual void createPlayerAuthentication(uint64 clientRandomId) /*override*/;

    virtual ::std::string getPlatformId() const /*override*/;

    virtual ::std::string getPlatformOnlineId() const /*override*/;

    virtual bool useController() const /*override*/;

    virtual bool useTouchscreen() const /*override*/;

    virtual bool getMouseGrabbed() const /*override*/;

    virtual bool currentInputModeIsMouseAndKeyboard() const /*override*/;

    virtual bool allowPicking() const /*override*/;

    virtual bool isShowingMenu() const /*override*/;

    virtual bool isShowingPauseScreen() const /*override*/;

    virtual bool isShowingProgressScreen() const /*override*/;

    virtual bool isShowingWorldProgressScreen() const /*override*/;

    virtual bool isShowingRealmsProgressScreen() const /*override*/;

    virtual bool isShowingDeathScreen() const /*override*/;

    virtual bool isShowingServerForm() const /*override*/;

    virtual bool isScreenReplaceable() const /*override*/;

    virtual bool isInWorldAndNotShowingAnyMenuScreens() const /*override*/;

    virtual bool isWorldActive() const /*override*/;

    virtual bool isInRealm() /*override*/;

    virtual bool readyForShutdown() const /*override*/;

    virtual bool isPrimaryClient() const /*override*/;

    virtual bool isEduMode() const /*override*/;

    virtual bool isGamepadCursorEnabled() const /*override*/;

    virtual bool isInControlCustomization() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getServerData() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft const> getServerData() const /*override*/;

    virtual ::MultiPlayerLevel* getLevel() /*override*/;

    virtual ::MultiPlayerLevel const* getLevel() const /*override*/;

    virtual bool hasLevel() const /*override*/;

    virtual bool isPreGame() const /*override*/;

    virtual bool isInMultiplayerGame() const /*override*/;

    virtual bool isMultiPlayerClient() const /*override*/;

    virtual ::IOptions& getOptions() /*override*/;

    virtual ::IOptions const& getOptions() const /*override*/;

    virtual ::std::shared_ptr<::Options> getOptionsPtr() /*override*/;

    virtual ::std::shared_ptr<::Options const> const getOptionsPtr() const /*override*/;

    virtual ::std::shared_ptr<::Social::User> const& getUser() const /*override*/;

    virtual ::std::shared_ptr<::ISettingsRegistry> getSettingsRegistry() /*override*/;

    virtual ::Option const& getShowLearningPromptsOption() const /*override*/;

    virtual ::Option& getShowControlTipsOption() /*override*/;

    virtual ::Option& getShowControlTipsOverrideOption() /*override*/;

    virtual double getControlTipsTimeElapsed() const /*override*/;

    virtual void setControlTipsTimeElapsedStart() /*override*/;

    virtual ::GameRenderer& getGameRenderer() const /*override*/;

    virtual ::LevelRenderer* getLevelRenderer() const /*override*/;

    virtual ::LevelRendererCameraProxy* getLevelRendererCameraProxy() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() /*override*/;

    virtual ::LightTexture* getLightTexture() /*override*/;

    virtual void setupLevelRendering(::MultiPlayerLevel& level, ::WeakEntityRef cameraTargetEntity) /*override*/;

    virtual ::mce::ViewportInfo const& getViewportInfo() const /*override*/;

    virtual void setViewportInfo(::mce::ViewportInfo const& viewportInfo) /*override*/;

    virtual ::Vec2 getNormalizedViewportSize() const /*override*/;

    virtual void updateChunkRadius() /*override*/;

    virtual void setUITexture(::mce::Texture* tex) /*override*/;

    virtual ::mce::Texture* getUITexture() /*override*/;

    virtual void setLevelTexture(::mce::Texture* tex) /*override*/;

    virtual ::mce::Texture* getLevelTexture() /*override*/;

    virtual void setUICursorTexture(::mce::TexturePtr tex) /*override*/;

    virtual ::mce::TexturePtr getUICursorTexture() const /*override*/;

    virtual ::mce::Camera& getCamera() /*override*/;

    virtual ::ShaderColor& getShaderColor() /*override*/;

    virtual ::ShaderColor& getDarkShaderColor() /*override*/;

    virtual void clearGraphicsCache() /*override*/;

    virtual void
    getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef& matrix, float cursorHalfSizeTexels) /*override*/;

    virtual bool shouldRenderUICursor() const /*override*/;

    virtual bool getRenderPlayerModel() const /*override*/;

    virtual ::DeferredLighting& getDeferredLighting() /*override*/;

    virtual float getGuiScale() const /*override*/;

    virtual ::Option const& getGuiScaleOption() const /*override*/;

    virtual int getGuiScaleOffset() const /*override*/;

    virtual void setGuiScaleOffset(int guiScale) /*override*/;

    virtual void renderImGui(::ScreenContext& screenContext, bool drawMenuBar) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getGuiData() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData const> getGuiData() const /*override*/;

    virtual ::GuidedFlowManager& getGuidedFlowManager() /*override*/;

    virtual ::PixelCalc const& getDpadScale() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DateManager const> getDateManager() const /*override*/;

    virtual void addOverrideHoursToDateTime(uint const hoursToAdd) /*override*/;

    virtual ::ToastManager& getToastManager() /*override*/;

    virtual ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&
    getClipboardManager() /*override*/;

    virtual ::AbstractScene* getTopScene() /*override*/;

    virtual ::AbstractScene const* getTopScene() const /*override*/;

    virtual ::AbstractScene* getActiveScene() /*override*/;

    virtual ::AbstractScene const* getActiveScene() const /*override*/;

    virtual ::SceneFactory& getSceneFactory() const /*override*/;

    virtual ::OreUI::SceneProvider& getSceneProvider() const /*override*/;

    virtual ::ui::ScreenTechStackSelector& getScreenTechStackSelector() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getClientSceneStack() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getClientSceneStack() /*override*/;

    virtual ::OreUI::Router& getClientUIRouter() const /*override*/;

    virtual ::ISceneStack& getMainSceneStackInterface() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getMainSceneStack() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getMainSceneStack() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getCurrentSceneStack() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getCurrentSceneStack() /*override*/;

    virtual ::OreUI::Router& getCurrentUIRouter() /*override*/;

    virtual ::OreUI::Router const& getCurrentUIRouter() const /*override*/;

    virtual ::OreUI::ITelemetry& getOreUITelemetry() /*override*/;

    virtual ::WeakRef<::OreUI::UIBlockThumbnailAtlasManager> getOreUIBlockThumbnailAtlasManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> prepareSceneFor(
        ::ui::SceneType const                                 sceneTypeToFind,
        ::std::function<::std::shared_ptr<::AbstractScene>()> createScreenCallback
    ) /*override*/;

    virtual ::CachedScenes& getCachedScenes() /*override*/;

    virtual ::std::string getScreenName() const /*override*/;

    virtual ::std::string getScreenTelemetry() const /*override*/;

    virtual ::ui::SceneType getTopSceneType() const /*override*/;

    virtual ::MobEffectsLayout& getMobEffectsLayout() /*override*/;

    virtual ::std::string emoticonifyText(::std::string const& text) const /*override*/;

    virtual ::std::string emoticonifyText(::std::string const& text, bool isGameTip) /*override*/;

    virtual void onMobEffectsChange() /*override*/;

    virtual void setUISizeAndScale(int w, int h, float forcedGuiScale) /*override*/;

    virtual void forEachVisibleScreen(::brstd::function_ref<void(::AbstractScene&)> callback) /*override*/;

    virtual void forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown) /*override*/;

    virtual void forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const
        /*override*/;

    virtual bool updateSceneStack() /*override*/;

    virtual void forEachAlwaysAcceptInputScreen(
        ::std::function<void(::AbstractScene&)> callback,
        ::AbstractScene const*                  ignoreScreen
    ) /*override*/;

    virtual void forEachAlwaysAcceptInputScreenWithTop(::std::function<void(::AbstractScene&)> callback) /*override*/;

    virtual void showPlayerProfile(::std::string const& xuid, ::std::string const& platformId) /*override*/;

    virtual bool isInGameInputEnabled() const /*override*/;

    virtual void setInGameInputEnabled(bool isEnabled) /*override*/;

    virtual ::Vec2 getSafeZoneScale() const /*override*/;

    virtual void verifySkinApproval(
        ::std::string const&                        serverType,
        ::std::function<void(::std::string)> const& notApprovedCallback,
        ::std::function<void()> const&              approvedCallback
    ) const /*override*/;

    virtual ::InputMode getCurrentInputMode() const /*override*/;

    virtual bool isTouchGameplayAllowed() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getMinecraftInput() const /*override*/;

    virtual ::KeyboardManager& getKeyboardManager() /*override*/;

    virtual void setLastPointerLocation(float x, float y, float z) /*override*/;

    virtual void clearTouchPointerLocations() /*override*/;

    virtual void clearTouchPointerLocation(int id) /*override*/;

    virtual void updateTouchPointerLocation(int id, float x, float y) /*override*/;

    virtual ::Vec3 getLastPointerLocation() /*override*/;

    virtual ::Vec2 getTouchPointerLocation(int id) const /*override*/;

    virtual void updateActionPointerId(int id) /*override*/;

    virtual int getActionPointerId() const /*override*/;

    virtual bool shouldUseLastPointerLocationOnFocusChange() /*override*/;

    virtual bool currentScreenShouldStealMouse() /*override*/;

    virtual ::BuildActionIntention& getInProgressBAI() const /*override*/;

    virtual ::PacketSender& getPacketSender() /*override*/;

    virtual ::ClientNetworkSystem& getClientNetworkSystem() /*override*/;

    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const /*override*/;

    virtual ::glm::vec2 getGamepadCursorPosition() const /*override*/;

    virtual void updateControlOptionState(uint id, bool active) /*override*/;

    virtual void clearActiveControlOptions() /*override*/;

    virtual ::std::set<uint> const& getActiveControlOptions() const /*override*/;

    virtual ::std::vector<::OptionID> getActiveOptionIDs(::ControlOptionType controlOptionType) const /*override*/;

    virtual void setNumberOfActiveConfigs(int numberOfActiveConfigs) /*override*/;

    virtual int getNumberOfActiveConfigs() const /*override*/;

    virtual bool isNoConfigSelected() const /*override*/;

    virtual void setNumberOfEnabledConfigs(int numberOfEnabledConfigs) /*override*/;

    virtual int getNumberOfEnabledConfigs() const /*override*/;

    virtual void setWYSIWYGState(::WYSIWYGState wysiwygState) /*override*/;

    virtual ::WYSIWYGState getWYSIWYGState() const /*override*/;

    virtual void setOtherConfigsExistInThisCategory(bool otherConfigsExistInThisCategory) /*override*/;

    virtual bool getOtherConfigsExistInThisCategory() const /*override*/;

    virtual void setMoveTurnInput(::std::unique_ptr<::ClientMoveInputHandler> pClientMoveInputHandler) /*override*/;

    virtual void setupPersistentControls(::InputMode currentMode) /*override*/;

    virtual void resetPlayerMovement() /*override*/;

    virtual void suspendPredictedMovement() /*override*/;

    virtual void onClientInputInitComplete() /*override*/;

    virtual void setClientInputHandler(::std::unique_ptr<::ClientInputHandler> pClientInputHandler) /*override*/;

    virtual ::ClientInputHandler* getInput() const /*override*/;

    virtual int getControllerId() const /*override*/;

    virtual bool hasConnectedController() const /*override*/;

    virtual ::SubClientId getClientSubId() const /*override*/;

    virtual void setSuspendInput(bool suspendInput) /*override*/;

    virtual void setSuspendDirectionalInput(bool suspendDirectionalInput) /*override*/;

    virtual void setDisableInput(bool disableInput) /*override*/;

    virtual void grabMouse() /*override*/;

    virtual void releaseMouse() /*override*/;

    virtual void refocusMouse(bool lostMouse) /*override*/;

    virtual void setMouseType(::ui::MousePointerType type) /*override*/;

    virtual void resetBai(int baiFlags) /*override*/;

    virtual void clearInProgressBAI() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> getSoundEngine() const /*override*/;

    virtual ::MusicManager const* getMusicManager() const /*override*/;

    virtual ::MusicManager* getMusicManagerNonConst() const /*override*/;

    virtual void play(::std::string const& name, ::Vec3 const& pos, float volume, float pitch) /*override*/;

    virtual void playUI(::std::string const& name, float volume, float pitch) /*override*/;

    virtual void muteAudio() /*override*/;

    virtual void unMuteAudio() /*override*/;

    virtual void fadeOutMusic() const /*override*/;

    virtual ::TaskGroup& getTaskGroup() /*override*/;

    virtual void onFullVanillaPackOnStack() /*override*/;

    virtual bool isFullVanillaPackOnStack() const /*override*/;

    virtual void onPlayerLoaded(::Player& player) /*override*/;

    virtual void setClientGameMode(::GameType gameType) /*override*/;

    virtual void resetToDefaultGameMode() /*override*/;

    virtual ::IGameConnectionListener& getGameConnectionListener() /*override*/;

    virtual void connectToThirdPartyServer(::std::string const& ipAddress, int port) /*override*/;

    virtual void startExternalNetworkWorld(
        ::Social::GameConnectionInfo connection,
        ::std::string const&         serverName,
        bool                         isTransfer
    ) /*override*/;

    virtual void connectToExperience(
        ::std::string const&                                              experienceId,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, bool)> joinServerCallback,
        ::std::function<void(::World::JoinServerWorldResult)>             onErrorCallback
    ) /*override*/;

    virtual bool isReadyToReconnect() const /*override*/;

    virtual bool checkForPiracy() /*override*/;

    virtual void updateChatFilterStatus(::ProfanityContext& profanityContext) /*override*/;

    virtual void updateControllerHandling() /*override*/;

    virtual void onPlayerDestruction(::Player& player) /*override*/;

    virtual void
    setBehaviorCommandCallback(::std::function<void(::std::string const&, ::BehaviorStatus)> callback) /*override*/;

    virtual void setBehaviorCommandStatus(::std::string const& treeName, ::BehaviorStatus status) /*override*/;

    virtual void setConnectGamepadScreenActive(bool active) /*override*/;

    virtual ::Core::PathBuffer<::std::string> requestScreenshot(::ScreenshotOptions& screenshotOptions) /*override*/;

    virtual ::Core::PathBuffer<::std::string>
    requestScreenshotAndCreateEncryptedChecksumFile(::ScreenshotOptions& screenshotOptions) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const /*override*/;

    virtual ::std::shared_ptr<::FileDataRequest> requestImageFromUrl(
        ::std::string const&                                                        imageUrl,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)> callback
    ) /*override*/;

    virtual void setActiveFileStorageArea(::std::shared_ptr<::Core::FileStorageArea> storageArea) /*override*/;

    virtual void onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& storageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    ) /*override*/;

    virtual void onLowDiskSpace(bool const bSet) /*override*/;

    virtual void onOutOfDiskSpace(bool const bSet) /*override*/;

    virtual void onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode) /*override*/;

    virtual void onLevelCorrupt() /*override*/;

    virtual void onCriticalScriptError(char const* clientDisconnectError, char const*) /*override*/;

    virtual void onGameModeChanged() /*override*/;

    virtual void onBeforeSimTick() /*override*/;

    virtual void onTick(int nTick, int maxTick) /*override*/;

    virtual void onInternetUpdate() /*override*/;

    virtual void onGameSessionReset() /*override*/;

    virtual void onLevelExit() /*override*/;

    virtual void onRequestResourceReload() /*override*/;

    virtual void updateScreens() /*override*/;

    virtual void initializeRenderResources() /*override*/;

    virtual void postInitRenderResources() /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppSuspensionDisconnect() /*override*/;

    virtual void onAppResumed() /*override*/;

    virtual void onActiveResourcePacksChanged(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& entityResourceDefGroup
    ) /*override*/;

    virtual void reloadEntityRenderers(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& actorResourceDefinitionGroup
    ) /*override*/;

    virtual ::BlockTessellator& getBlockTessellator() /*override*/;

    virtual ::BlockActorRenderDispatcher& getBlockEntityRenderDispatcher() /*override*/;

    virtual ::std::shared_ptr<::ActorRenderDispatcher> getEntityRenderDispatcher() /*override*/;

    virtual ::ActorBlockRenderer& getEntityBlockRenderer() /*override*/;

    virtual ::ItemInHandRenderer* getItemInHandRenderer() /*override*/;

    virtual ::ItemRenderer* getItemRenderer() /*override*/;

    virtual ::HudIconActorRenderer* getHudIconActorRenderer() /*override*/;

    virtual ::std::deque<::std::string>& getSentMessageHistory() /*override*/;

    virtual ::std::deque<::std::string>& getDevConsoleMessageHistory() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> getProfanityContext() const /*override*/;

    virtual void initTTSClient(::std::shared_ptr<::TextToSpeechClient> textToSpeechClient) /*override*/;

    virtual ::std::shared_ptr<::TextToSpeechClient> getTTSClient() /*override*/;

    virtual ::std::shared_ptr<::TextToSpeechClient const> getTTSClient() const /*override*/;

    virtual ::std::shared_ptr<::ITTSEventManager> getTTSEventManager() /*override*/;

    virtual void addTTSMessage(
        ::std::string const&     message,
        ::ProfanityFilterContext profanityFilterContext,
        bool                     interruptible,
        ::std::string const&     interruptibleId,
        bool                     required,
        bool                     disregardAppFocus
    ) /*override*/;

    virtual void initCommands() /*override*/;

    virtual uint getUserId() const /*override*/;

    virtual bool isPrimaryUser() const /*override*/;

    virtual double getServerConnectionTime() const /*override*/;

    virtual void setServerPingTime(int pingTime) /*override*/;

    virtual int getServerPingTime() const /*override*/;

    virtual void setDefaultPlayscreenTab(::PlayScreenDefaultTab defaultTab) /*override*/;

    virtual void setClientInstanceState(::ClientInstanceState const& newstate) /*override*/;

    virtual void setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<::UIEventCoordinator>&& coordinator) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> getUIEventCoordinator() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> getEventCoordinator() /*override*/;

    virtual ::ClientNetworkEventCoordinator& getClientNetworkEventCoordinator() /*override*/;

    virtual ::ClientScriptEventCoordinator& getClientScriptEventCoordinator() /*override*/;

    virtual ::std::chrono::steady_clock::time_point getNoBlockBreakUntil() /*override*/;

    virtual void setNoBlockBreakUntil(::std::chrono::steady_clock::time_point timePoint) /*override*/;

    virtual ::GameCallbacks& getGameCallbacks() /*override*/;

    virtual ::GameModuleClient* getGameModule() /*override*/;

    virtual ::ClientHitDetectCoordinator& getHitEventCoordinator() /*override*/;

    virtual void sendClientEnteredLevel() /*override*/;

    virtual ::HitDetectSystem* getHitDetectSystem() /*override*/;

    virtual bool isPlaying() const /*override*/;

    virtual ::ClientInstanceState getClientInstanceState() const /*override*/;

    virtual ::LatencyGraphDisplay* getLatencyGraphDisplay() const /*override*/;

    virtual ::PlayerCapabilities::IClientController const& getClientCapabilities() const /*override*/;

    virtual ::cg::math::Rect<float>
    calculateViewPortModifiers(::SubClientId const, uint64 const, ::SplitScreenDirection const) const /*override*/;

    virtual ::std::weak_ptr<::IClientInstance> getWeakPtrToThis() /*override*/;

    virtual ::ClientRequirementVerifier const& getClientRequirementVerifier() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> getFogDefinitionRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry> getFogDefinitionRegistry() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager const> getFogManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager> getFogManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ScreenLoadTimeTracker> getScreenLoadTimeTracker() /*override*/;

    virtual ::ItemRegistryRef getItemRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> getDisconnectionRequestHandler() const
        /*override*/;

    virtual float getRemoteServerTimeMs() const /*override*/;

    virtual void setRemoteServerTimeMs(float time) /*override*/;

    virtual float getRemoteServerNetworkTimeMs() const /*override*/;

    virtual void setRemoteServerNetworkTimeMs(float time) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ClientScriptManager> getClientScriptManager() /*override*/;

    virtual ::Scripting::ScriptEngine* getScriptingEngine() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler> getPlayerReportHandler() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() /*override*/;

    virtual void flagDisconnectionAndNotify(::Connection::DisconnectFailReason disconnectReason) /*override*/;

    virtual void flagDisconnectionAndNotifyWithParams(::DisconnectionScreenParams const& params) /*override*/;

    virtual void disconnectSubClient(::Connection::DisconnectFailReason disconnectReason) /*override*/;

    virtual void setClientUpdateAndRenderThrottling(bool enabled, int threshold, float scalar) /*override*/;

    virtual bool isClientUpdateAndRenderThrottlingEnabled() const /*override*/;

    virtual int getClientUpdateAndRenderThrottlingThreshold() const /*override*/;

    virtual float getClientUpdateAndRenderThrottlingScalar() const /*override*/;

    virtual bool isUserBanned() const /*override*/;

    virtual bool isEligibleForPauseFeature() const /*override*/;

    virtual void setupPauseManagers() /*override*/;

    virtual bool requestInGamePause(bool status) /*override*/;

    virtual void openContentLogHistory() /*override*/;

    virtual double getGameUpdateDurationInSeconds() const /*override*/;

    virtual ::std::optional<::PlayerJoinWorldTelemetryInfo> getPlayerJoinWorldTelemetryInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ClientInstance(
        ::IMinecraftGame&                                                      mg,
        ::IMinecraftApp&                                                       app,
        ::LevelListener&                                                       levelListener,
        ::SubClientId                                                          subid,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&       advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> const& coordinator,
        ::LatencyGraphDisplay*                                                 latencyGraphDisplay,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>                   networkSessionOwner,
        ::Bedrock::NotNullNonOwnerPtr<::Bedrock::DevTools::CommandExecutor>    devToolsCommandExecutor,
        ::Bedrock::NotNullNonOwnerPtr<::VideoCaptureSessionManager>            videoCaptureSessionManager
    );

    MCAPI_C ::DisconnectionErrorDetails _createDisconnectionErrorDetails(::Connection::DisconnectionStage paramStage);

    MCAPI_C ::std::unique_ptr<::LegacyClientNetworkHandler> _createNetworkHandler(
        ::PlayerAuthenticationType authType,
        ::LegacyMultiplayerToken&& token,
        ::RawGameServerToken&&     newToken
    );

    MCAPI_C void _createSkinRepositoryClientInterface();

    MCAPI_C void _finishDestroyingGame();

    MCAPI_C ::Bedrock::Threading::Async<::std::pair<::LegacyMultiplayerToken, ::RawGameServerToken>>
    _getGlobalTokens(::PlayerAuthentication& playerAuthToUse);

    MCAPI_C bool _getIsConnectedToApplicationLayer() const;

    MCAPI_C void _handleDisconnectionScreenRequests();

    MCAPI_C void _handlePossibleControllerDisconnect(bool isInitFinished);

    MCAPI_C void _initSceneStack();

    MCAPI_C bool _isEditorModeOrInEditorWorld() const;

    MCAPI_C bool _isInEditorTestWorld() const;

    MCAPI_C bool _isShowingScreen(::std::string_view screenName) const;

    MCAPI_C ::std::optional<bool> _isUsingTurn() const;

    MCAPI_C void
    _joinWorldInProgressSubclient(::std::optional<::PlayerJoinWorldTelemetryInfo> primaryClientJoinWorldInfo);

    MCAPI_C void
    _leaveGameOnUnrecoverableError(::std::string const& displayMessage, ::std::string const& telemetryMessage);

    MCAPI_C void _navigateToSDLCharacterCreatorOffer(::std::string const& productId);

    MCAPI_C void _notifyTelemetryClientCanceledJoinAttempt();

    MCAPI_C void _notifyTelemetryClientStartedJoinAttempt();

    MCAPI_C void _notifyTelemetryClientSuccessfullyEnteredWorld();

    MCAPI_C void _notifyTelemetryOfFlaggedDisconnect(
        ::Connection::DisconnectFailReason failReason,
        ::std::string const&               titleMessage,
        ::std::string const&               errorMessage,
        ::std::string const&               codeword
    );

    MCAPI_C void _perspectiveOptionChanged(::Option const&);

    MCAPI_C void _requestLeaveGameImpl(bool switchScreen, bool sync);

    MCAPI_C void _startDestroyingGame();

    MCAPI_C void _startLeaveGame();

    MCAPI_C void _startWorldPrimaryClient(
        ::PlayerAuthenticationType authType,
        ::LegacyMultiplayerToken&& token,
        ::RawGameServerToken&&     newToken
    );

    MCAPI_C void _startWorldSubClient(
        ::PlayerAuthenticationType authType,
        ::LegacyMultiplayerToken&& token,
        ::RawGameServerToken&&     newToken
    );

    MCAPI_C void
    _tickBuildAction(::HitResult const& solidHitResult_, ::HitResult const& liquidHitResult_, bool advanceTime);

    MCAPI_C void
    _updateScreenSizeVariables(::Vec2 const& totalScreenSize, ::Vec2 const& safeZone, float forcedGuiScale);

    MCAPI_C void fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode);

    MCAPI_C void flagDisconnectionAndNotifyWithTarget(
        ::DisconnectionScreenParams const& params,
        ::Connection::UIReturnTarget       uiReturnTarget
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static bool tickDestroyBlock(::ClientInstance::ClientDestroyBlockState& state, bool advanceTime);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(
        ::IMinecraftGame&                                                      mg,
        ::IMinecraftApp&                                                       app,
        ::LevelListener&                                                       levelListener,
        ::SubClientId                                                          subid,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&       advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> const& coordinator,
        ::LatencyGraphDisplay*                                                 latencyGraphDisplay,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>                   networkSessionOwner,
        ::Bedrock::NotNullNonOwnerPtr<::Bedrock::DevTools::CommandExecutor>    devToolsCommandExecutor,
        ::Bedrock::NotNullNonOwnerPtr<::VideoCaptureSessionManager>            videoCaptureSessionManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $onInitMinecraftGame();

    MCAPI void $onDestroyMinecraftGame();

    MCAPI void $init(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const& filePathManager,
        ::ClientNetworkSystem&                                        network,
        ::Timer&                                                      simTimer,
        ::Timer&                                                      realTimer,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&  userManager,
        int                                                           id,
        ::IGameModuleApp&                                             gameModuleApp
    );

    MCAPI void $initSceneFactory(
        ::std::unique_ptr<::SceneFactory>         sceneFactory,
        ::std::unique_ptr<::OreUI::SceneProvider> sceneProvider
    );

    MCAPI void $setUiRouter(::std::unique_ptr<::OreUI::Router> uiRouter);

    MCAPI void $initGraphics();

    MCFOLD void $stop();

    MCAPI void $teardown();

    MCAPI void $preShutDown();

    MCAPI void $setGameConnectionInfo(::Social::GameConnectionInfo const& gameConnection);

    MCAPI ::std::optional<::Social::GameConnectionInfo> $getGameConnectionInfo();

    MCAPI void $onStartJoinGame(
        bool                                   isJoiningLocalServer,
        ::std::string const&                   multiplayerCorrelationId,
        ::std::string const&                   serverName,
        ::std::string const&                   worldName,
        ::NetworkType                          networkTypeOverride,
        ::Social::MultiplayerServiceIdentifier service,
        bool                                   isServerTransfer
    );

    MCAPI void $onCancelJoinGame();

    MCAPI void $requestLeaveGameAsync();

    MCAPI void $requestLeaveGame(bool switchScreen, bool sync);

    MCAPI void $stopPlayScreen();

    MCAPI bool $isLeaveGameDone() const;

    MCAPI void $setupPlayScreenForLeaveGame();

    MCAPI void $preCacheOutOfGameViews();

    MCAPI void $resetPrimaryClient();

    MCAPI void $resetGameSession();

    MCFOLD void $tick();

    MCAPI void $frameUpdate(::FrameUpdateContext& frameUpdateContext);

    MCAPI void $preFrameTick();

    MCAPI bool $update(bool isInitFinished);

    MCFOLD void $endFrame();

    MCAPI float $getFrameAlpha();

    MCAPI void $startSubClientLateJoin(
        bool                                            hasXBLBroadcast,
        ::std::unique_ptr<::GameModuleClient>           gameModuleClient,
        ::std::optional<::PlayerJoinWorldTelemetryInfo> primaryClientJoinWorldInfo
    );

    MCAPI ::Bedrock::Threading::Async<::ClientGameSetupResult>
    $setupClientGame(bool joiningLocalServer, ::std::unique_ptr<::GameModuleClient> gameModuleClient);

    MCAPI ::BlockSource* $getRegion();

    MCAPI ::LocalPlayer* $getLocalPlayer() const;

    MCAPI void $setupPrimaryClientEditorManager();

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> $getLocalEditorPlayer() const;

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> $getEditorManager() const;

    MCAPI bool $isPlayerInEditor() const;

    MCAPI ::LocalPlayerChangedConnector $getLocalPlayerChangedConnector();

    MCAPI ::WeakEntityRef $getLocalUser() const;

    MCAPI ::Actor* $getCameraActor() const;

    MCAPI void $setCameraActor(::Actor* cameraActor);

    MCAPI ::ListenerState const* $getListenerState() const;

    MCAPI ::Actor* $getCameraTargetActor() const;

    MCAPI void $setCameraTargetActor(::Actor* cameraTargetActor);

    MCAPI ::WeakEntityRef $getCameraEntity() const;

    MCAPI void $getRawCameraEntities(::WeakEntityRef& cameraEntity, ::WeakEntityRef& cameraTargetEntity) const;

    MCAPI void $setRawCameraEntities(::WeakEntityRef cameraEntity, ::WeakEntityRef cameraTargetEntity);

    MCAPI ::HitResult const& $getLatestHitResult() const;

    MCAPI bool $isLeavingGame() const;

    MCAPI bool $isDestroyingGame() const;

    MCAPI bool $isShuttingDown() const;

    MCAPI bool $useLowFrequencyUIRender() const;

    MCAPI bool $isSplitScreenActive() const;

    MCAPI bool $isExitingLevel() const;

    MCAPI bool $isInBedScreen() const;

    MCAPI bool $isInDeathScreen() const;

    MCAPI bool $isKeyboardEnabled() const;

    MCAPI bool $hasCommands() const;

    MCAPI int $getSplitScreenCount() const;

    MCAPI bool $isShowingLoadingScreen() const;

    MCFOLD bool $shouldDisconnectOnAppSuspended() const;

    MCAPI bool $isGamePlayTipsEnabled() const;

    MCAPI bool $isPlatformNX() const;

    MCAPI bool $isLocalSplitscreenWith(::ActorUniqueID const& id) const;

    MCAPI bool $isValidCrossPlatformSkin() const;

    MCAPI bool $isCurrentSkinPlatformLocked() const;

    MCAPI bool $isSelectedSkinInitialized() const;

    MCAPI ::SplitScreenInfo $getSplitScreenInfo() const;

    MCAPI int $getCurrentMaxGUIScaleIndex() const;

    MCAPI bool $getHandlingControllerDisconnect();

    MCAPI void $setOpenControllerDisconnectScreen(bool open);

    MCAPI ::ClientPlayMode $getClientPlayMode() const;

    MCAPI void $setClientPlayMode(::ClientPlayMode const& mode);

    MCAPI ::std::function<void()> $getCreditsCallback();

    MCAPI void $setCreditsCallback(::std::function<void()> callback);

    MCAPI void $setupTransitionForCredits(::std::function<void()> callback);

    MCAPI void $refreshScreenSizeData();

    MCAPI void $onScreenSizeChanged(int width, int height, float forcedGuiScale);

    MCAPI void $onGuiScaleOffsetChanged();

    MCAPI void $onSafeZoneChanged();

    MCAPI bool $hasDismissedNewPlayerFlow() const;

    MCAPI void $quit(::std::string const& src, ::std::string const& reason);

    MCFOLD ::IMinecraftGame& $getMinecraftGame_DEPRECATED() const;

    MCAPI ::IClientInstances& $getClientInstances() const;

    MCAPI ::World::WorldSystem& $getWorldSystem() const;

    MCAPI bool $isWorldSystemReady() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> $getAutomationClient() const;

    MCAPI ::Bedrock::NonOwnerPointer<::EDUSystems> $getEDUSystems();

    MCAPI ::Bedrock::NonOwnerPointer<::EDUSystems const> $getEDUSystems() const;

    MCAPI ::IMinecraftEventing& $getEventing() const;

    MCAPI ::IConnectionEventing& $getConnectionEventing() const;

    MCAPI ::FontHandle $getFontHandle() const;

    MCAPI ::FontHandle $getRuneFontHandle() const;

    MCAPI ::FontHandle $getUnicodeFontHandle() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> $getGeometryGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> $getBlockCullingGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> $getMultiplayerServiceManager() const;

    MCAPI ::IResourcePackRepository& $getResourcePackRepository() const;

    MCAPI ::ResourcePackManager& $getResourcePackManager() const;

    MCAPI ::PackManifestFactory& $getPackManifestFactory();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> $getKeyProvider() const;

    MCAPI ::PacksInfoData const& $getHostSpecifiedPacks() const;

    MCAPI ::std::shared_ptr<::SkinRepository> $getSkinRepository() const;

    MCAPI ::PersonaRepository& $getPersonaRepository() const;

    MCAPI ::MarketplaceServicesManager& $getMarketplaceServicesManager() const;

    MCFOLD ::SkinRepositoryClientInterface& $getSkinRepositoryClientInterface() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> $getStoreCatalogRepository();

    MCAPI ::std::shared_ptr<::mce::TextureGroup> $getTextureGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> $getStoreCacheTextures() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> $getMinecraftGraphics() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> $getUIRepository() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> $getUserManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TrialManager> $getTrialManager() const;

    MCAPI bool $wantToQuit() const;

    MCAPI bool $isPrimaryLevelCrossPlatformMultiplayer() const;

    MCAPI bool $isPrimaryLevelMultiplayer() const;

    MCAPI bool $isAdhocEnabled() const;

    MCAPI ::std::shared_ptr<::ActorAnimationGroup> $getActorAnimationGroup() const;

    MCAPI bool $isMarketplaceDisabled() const;

    MCAPI ::std::pair<::StoreErrorCodes, ::std::string> const $getMarketplaceDisabledReasonWithErrorCode() const;

    MCAPI void $linkToOffer(::std::string const& productId, bool allowWhileInGame);

    MCAPI void $linkToPage(::std::string const& pageId);

    MCAPI void $linkTo3PServerOffers(::std::string const& pageId, ::std::string const& creatorName);

    MCAPI void $navigateToMarketplaceInventoryScreen(::InventoryTabIndex tabIndex);

    MCAPI void $navigateToStoreHomeScreen();

    MCAPI void $navigateToCoinPurchaseScreen(int neededCoins, ::std::function<void(bool, int)> callback);

    MCAPI void $navigateToPurchaseOfferScreen(::StoreCatalogItem& item, ::StoreNavigationOrigin, bool const);

    MCAPI void $navigateToDressingRoomOfferScreen(::std::string const& offerId);

    MCAPI bool $navigateToProfileScreen(::std::string const&, bool const preventProgressScreen);

    MCAPI void $navigateToServersScreen(bool const calledFromHyperlink);

    MCAPI void $navigateToHowToPlayScreen(::std::string const& startTopic);

    MCAPI void $navigateToGatheringInfoScreen(bool autoConnect);

    MCAPI void $navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex tabIndex);

    MCAPI void $navigateToRealmsStoriesTransitionScreen(::Realms::World const& world);

    MCAPI void $tryPushLeaveGameScreen();

    MCAPI void $tryStartDayOneExperience();

    MCAPI bool $isReadyToRender() const;

    MCAPI void $onDimensionChangedEvent();

    MCAPI void $onGameEventNotification(::ui::GameEventNotification notification);

    MCAPI ::std::string $getTopScreenName() const;

    MCAPI void $setLeaveGameInProgressAsReadyToContinue();

    MCAPI void $stopDestroying();

    MCAPI void $onClientCreatedLevel(
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::OwnerPtr<::EntityContext>                                          userEntity
    );

    MCAPI ::PlayerAuthentication& $getPlayerAuthentication();

    MCAPI void $createPlayerAuthentication();

    MCAPI void $createPlayerAuthentication(uint64 clientRandomId);

    MCAPI ::std::string $getPlatformId() const;

    MCAPI ::std::string $getPlatformOnlineId() const;

    MCAPI bool $useController() const;

    MCAPI bool $useTouchscreen() const;

    MCAPI bool $getMouseGrabbed() const;

    MCAPI bool $currentInputModeIsMouseAndKeyboard() const;

    MCAPI bool $allowPicking() const;

    MCAPI bool $isShowingMenu() const;

    MCAPI bool $isShowingPauseScreen() const;

    MCAPI bool $isShowingProgressScreen() const;

    MCAPI bool $isShowingWorldProgressScreen() const;

    MCAPI bool $isShowingRealmsProgressScreen() const;

    MCAPI bool $isShowingDeathScreen() const;

    MCAPI bool $isShowingServerForm() const;

    MCAPI bool $isScreenReplaceable() const;

    MCAPI bool $isInWorldAndNotShowingAnyMenuScreens() const;

    MCAPI bool $isWorldActive() const;

    MCAPI bool $isInRealm();

    MCAPI bool $readyForShutdown() const;

    MCAPI bool $isPrimaryClient() const;

    MCAPI bool $isEduMode() const;

    MCFOLD bool $isGamepadCursorEnabled() const;

    MCAPI bool $isInControlCustomization() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::Minecraft> $getServerData();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::Minecraft const> $getServerData() const;

    MCFOLD ::MultiPlayerLevel* $getLevel();

    MCFOLD ::MultiPlayerLevel const* $getLevel() const;

    MCAPI bool $hasLevel() const;

    MCAPI bool $isPreGame() const;

    MCAPI bool $isInMultiplayerGame() const;

    MCAPI bool $isMultiPlayerClient() const;

    MCFOLD ::IOptions& $getOptions();

    MCFOLD ::IOptions const& $getOptions() const;

    MCAPI ::std::shared_ptr<::Options> $getOptionsPtr();

    MCAPI ::std::shared_ptr<::Options const> const $getOptionsPtr() const;

    MCAPI ::std::shared_ptr<::Social::User> const& $getUser() const;

    MCAPI ::std::shared_ptr<::ISettingsRegistry> $getSettingsRegistry();

    MCAPI ::Option const& $getShowLearningPromptsOption() const;

    MCAPI ::Option& $getShowControlTipsOption();

    MCAPI ::Option& $getShowControlTipsOverrideOption();

    MCAPI double $getControlTipsTimeElapsed() const;

    MCAPI void $setControlTipsTimeElapsedStart();

    MCAPI ::GameRenderer& $getGameRenderer() const;

    MCFOLD ::LevelRenderer* $getLevelRenderer() const;

    MCAPI ::LevelRendererCameraProxy* $getLevelRendererCameraProxy() const;

    MCAPI ::Bedrock::NonOwnerPointer<::CameraRegistry> $getCameraRegistry();

    MCAPI ::Bedrock::NonOwnerPointer<::CameraRegistry const> $getCameraRegistry() const;

    MCAPI ::Bedrock::NonOwnerPointer<::EntitySystems> $getCameraSystems();

    MCAPI ::LightTexture* $getLightTexture();

    MCAPI void $setupLevelRendering(::MultiPlayerLevel& level, ::WeakEntityRef cameraTargetEntity);

    MCAPI ::mce::ViewportInfo const& $getViewportInfo() const;

    MCAPI void $setViewportInfo(::mce::ViewportInfo const& viewportInfo);

    MCAPI ::Vec2 $getNormalizedViewportSize() const;

    MCAPI void $updateChunkRadius();

    MCAPI void $setUITexture(::mce::Texture* tex);

    MCAPI ::mce::Texture* $getUITexture();

    MCAPI void $setLevelTexture(::mce::Texture* tex);

    MCAPI ::mce::Texture* $getLevelTexture();

    MCAPI void $setUICursorTexture(::mce::TexturePtr tex);

    MCAPI ::mce::TexturePtr $getUICursorTexture() const;

    MCAPI ::mce::Camera& $getCamera();

    MCAPI ::ShaderColor& $getShaderColor();

    MCFOLD ::ShaderColor& $getDarkShaderColor();

    MCAPI void $clearGraphicsCache();

    MCAPI void $getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef& matrix, float cursorHalfSizeTexels);

    MCFOLD bool $shouldRenderUICursor() const;

    MCAPI bool $getRenderPlayerModel() const;

    MCAPI ::DeferredLighting& $getDeferredLighting();

    MCAPI float $getGuiScale() const;

    MCAPI ::Option const& $getGuiScaleOption() const;

    MCAPI int $getGuiScaleOffset() const;

    MCAPI void $setGuiScaleOffset(int guiScale);

    MCFOLD void $renderImGui(::ScreenContext& screenContext, bool drawMenuBar);

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::GuiData> $getGuiData();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::GuiData const> $getGuiData() const;

    MCAPI ::GuidedFlowManager& $getGuidedFlowManager();

    MCAPI ::PixelCalc const& $getDpadScale() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DateManager const> $getDateManager() const;

    MCAPI void $addOverrideHoursToDateTime(uint const hoursToAdd);

    MCAPI ::ToastManager& $getToastManager();

    MCAPI ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&
    $getClipboardManager();

    MCAPI ::AbstractScene* $getTopScene();

    MCAPI ::AbstractScene const* $getTopScene() const;

    MCAPI ::AbstractScene* $getActiveScene();

    MCAPI ::AbstractScene const* $getActiveScene() const;

    MCFOLD ::SceneFactory& $getSceneFactory() const;

    MCAPI ::OreUI::SceneProvider& $getSceneProvider() const;

    MCAPI ::ui::ScreenTechStackSelector& $getScreenTechStackSelector();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> $getClientSceneStack() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $getClientSceneStack();

    MCAPI ::OreUI::Router& $getClientUIRouter() const;

    MCAPI ::ISceneStack& $getMainSceneStackInterface();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $getMainSceneStack();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> $getMainSceneStack() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> $getCurrentSceneStack() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $getCurrentSceneStack();

    MCFOLD ::OreUI::Router& $getCurrentUIRouter();

    MCFOLD ::OreUI::Router const& $getCurrentUIRouter() const;

    MCAPI ::OreUI::ITelemetry& $getOreUITelemetry();

    MCAPI ::WeakRef<::OreUI::UIBlockThumbnailAtlasManager> $getOreUIBlockThumbnailAtlasManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $prepareSceneFor(
        ::ui::SceneType const                                 sceneTypeToFind,
        ::std::function<::std::shared_ptr<::AbstractScene>()> createScreenCallback
    );

    MCFOLD ::CachedScenes& $getCachedScenes();

    MCAPI ::std::string $getScreenName() const;

    MCAPI ::std::string $getScreenTelemetry() const;

    MCFOLD ::MobEffectsLayout& $getMobEffectsLayout();

    MCAPI ::std::string $emoticonifyText(::std::string const& text) const;

    MCAPI ::std::string $emoticonifyText(::std::string const& text, bool isGameTip);

    MCAPI void $onMobEffectsChange();

    MCAPI void $setUISizeAndScale(int w, int h, float forcedGuiScale);

    MCAPI void $forEachVisibleScreen(::brstd::function_ref<void(::AbstractScene&)> callback);

    MCAPI void $forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown);

    MCAPI void $forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const;

    MCAPI bool $updateSceneStack();

    MCAPI void $forEachAlwaysAcceptInputScreen(
        ::std::function<void(::AbstractScene&)> callback,
        ::AbstractScene const*                  ignoreScreen
    );

    MCAPI void $forEachAlwaysAcceptInputScreenWithTop(::std::function<void(::AbstractScene&)> callback);

    MCAPI void $showPlayerProfile(::std::string const& xuid, ::std::string const& platformId);

    MCAPI bool $isInGameInputEnabled() const;

    MCAPI void $setInGameInputEnabled(bool isEnabled);

    MCAPI ::Vec2 $getSafeZoneScale() const;

    MCAPI void $verifySkinApproval(
        ::std::string const&                        serverType,
        ::std::function<void(::std::string)> const& notApprovedCallback,
        ::std::function<void()> const&              approvedCallback
    ) const;

    MCAPI ::InputMode $getCurrentInputMode() const;

    MCAPI bool $isTouchGameplayAllowed() const;

    MCAPI ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> $getMinecraftInput() const;

    MCAPI ::KeyboardManager& $getKeyboardManager();

    MCAPI void $setLastPointerLocation(float x, float y, float z);

    MCAPI void $clearTouchPointerLocations();

    MCAPI void $clearTouchPointerLocation(int id);

    MCAPI void $updateTouchPointerLocation(int id, float x, float y);

    MCAPI ::Vec3 $getLastPointerLocation();

    MCAPI ::Vec2 $getTouchPointerLocation(int id) const;

    MCAPI void $updateActionPointerId(int id);

    MCAPI int $getActionPointerId() const;

    MCAPI bool $shouldUseLastPointerLocationOnFocusChange();

    MCAPI bool $currentScreenShouldStealMouse();

    MCFOLD ::BuildActionIntention& $getInProgressBAI() const;

    MCAPI ::PacketSender& $getPacketSender();

    MCFOLD ::ClientNetworkSystem& $getClientNetworkSystem();

    MCFOLD ::ClientNetworkSystem const& $getClientNetworkSystem() const;

    MCAPI ::glm::vec2 $getGamepadCursorPosition() const;

    MCAPI void $updateControlOptionState(uint id, bool active);

    MCAPI void $clearActiveControlOptions();

    MCAPI ::std::set<uint> const& $getActiveControlOptions() const;

    MCAPI ::std::vector<::OptionID> $getActiveOptionIDs(::ControlOptionType controlOptionType) const;

    MCAPI void $setNumberOfActiveConfigs(int numberOfActiveConfigs);

    MCAPI int $getNumberOfActiveConfigs() const;

    MCAPI bool $isNoConfigSelected() const;

    MCAPI void $setNumberOfEnabledConfigs(int numberOfEnabledConfigs);

    MCFOLD int $getNumberOfEnabledConfigs() const;

    MCAPI void $setWYSIWYGState(::WYSIWYGState wysiwygState);

    MCAPI ::WYSIWYGState $getWYSIWYGState() const;

    MCAPI void $setOtherConfigsExistInThisCategory(bool otherConfigsExistInThisCategory);

    MCAPI bool $getOtherConfigsExistInThisCategory() const;

    MCAPI void $setMoveTurnInput(::std::unique_ptr<::ClientMoveInputHandler> pClientMoveInputHandler);

    MCAPI void $setupPersistentControls(::InputMode currentMode);

    MCAPI void $resetPlayerMovement();

    MCAPI void $suspendPredictedMovement();

    MCAPI void $onClientInputInitComplete();

    MCAPI void $setClientInputHandler(::std::unique_ptr<::ClientInputHandler> pClientInputHandler);

    MCFOLD ::ClientInputHandler* $getInput() const;

    MCAPI int $getControllerId() const;

    MCAPI bool $hasConnectedController() const;

    MCAPI void $setSuspendInput(bool suspendInput);

    MCAPI void $setSuspendDirectionalInput(bool suspendDirectionalInput);

    MCAPI void $setDisableInput(bool disableInput);

    MCAPI void $grabMouse();

    MCAPI void $releaseMouse();

    MCAPI void $refocusMouse(bool lostMouse);

    MCAPI void $setMouseType(::ui::MousePointerType type);

    MCAPI void $resetBai(int baiFlags);

    MCAPI void $clearInProgressBAI();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> $getSoundEngine() const;

    MCAPI ::MusicManager const* $getMusicManager() const;

    MCAPI ::MusicManager* $getMusicManagerNonConst() const;

    MCAPI void $play(::std::string const& name, ::Vec3 const& pos, float volume, float pitch);

    MCAPI void $playUI(::std::string const& name, float volume, float pitch);

    MCAPI void $muteAudio();

    MCAPI void $unMuteAudio();

    MCAPI void $fadeOutMusic() const;

    MCAPI ::TaskGroup& $getTaskGroup();

    MCAPI void $onFullVanillaPackOnStack();

    MCFOLD bool $isFullVanillaPackOnStack() const;

    MCAPI void $onPlayerLoaded(::Player& player);

    MCAPI void $setClientGameMode(::GameType gameType);

    MCAPI void $resetToDefaultGameMode();

    MCAPI ::IGameConnectionListener& $getGameConnectionListener();

    MCAPI void $connectToThirdPartyServer(::std::string const& ipAddress, int port);

    MCAPI void $startExternalNetworkWorld(
        ::Social::GameConnectionInfo connection,
        ::std::string const&         serverName,
        bool                         isTransfer
    );

    MCAPI void $connectToExperience(
        ::std::string const&                                              experienceId,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, bool)> joinServerCallback,
        ::std::function<void(::World::JoinServerWorldResult)>             onErrorCallback
    );

    MCAPI bool $isReadyToReconnect() const;

    MCAPI bool $checkForPiracy();

    MCAPI void $updateChatFilterStatus(::ProfanityContext& profanityContext);

    MCAPI void $updateControllerHandling();

    MCAPI void $onPlayerDestruction(::Player& player);

    MCAPI void $setBehaviorCommandCallback(::std::function<void(::std::string const&, ::BehaviorStatus)> callback);

    MCAPI void $setBehaviorCommandStatus(::std::string const& treeName, ::BehaviorStatus status);

    MCAPI void $setConnectGamepadScreenActive(bool active);

    MCAPI ::Core::PathBuffer<::std::string> $requestScreenshot(::ScreenshotOptions& screenshotOptions);

    MCAPI ::Core::PathBuffer<::std::string>
    $requestScreenshotAndCreateEncryptedChecksumFile(::ScreenshotOptions& screenshotOptions);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> $getDevConsoleLogger() const;

    MCAPI ::std::shared_ptr<::FileDataRequest> $requestImageFromUrl(
        ::std::string const&                                                        imageUrl,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)> callback
    );

    MCAPI void $setActiveFileStorageArea(::std::shared_ptr<::Core::FileStorageArea> storageArea);

    MCAPI void $onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& storageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    );

    MCAPI void $onLowDiskSpace(bool const bSet);

    MCAPI void $onOutOfDiskSpace(bool const bSet);

    MCAPI void $onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);

    MCAPI void $onLevelCorrupt();

    MCAPI void $onCriticalScriptError(char const* clientDisconnectError, char const*);

    MCAPI void $onGameModeChanged();

    MCAPI void $onBeforeSimTick();

    MCAPI void $onTick(int nTick, int maxTick);

    MCAPI void $onInternetUpdate();

    MCAPI void $onGameSessionReset();

    MCAPI void $onLevelExit();

    MCFOLD void $onRequestResourceReload();

    MCAPI void $updateScreens();

    MCAPI void $initializeRenderResources();

    MCAPI void $postInitRenderResources();

    MCAPI void $onAppSuspended();

    MCAPI void $onAppSuspensionDisconnect();

    MCAPI void $onAppResumed();

    MCAPI void $onActiveResourcePacksChanged(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& entityResourceDefGroup
    );

    MCAPI void $reloadEntityRenderers(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& actorResourceDefinitionGroup
    );

    MCAPI ::BlockTessellator& $getBlockTessellator();

    MCAPI ::BlockActorRenderDispatcher& $getBlockEntityRenderDispatcher();

    MCAPI ::std::shared_ptr<::ActorRenderDispatcher> $getEntityRenderDispatcher();

    MCAPI ::ActorBlockRenderer& $getEntityBlockRenderer();

    MCAPI ::ItemInHandRenderer* $getItemInHandRenderer();

    MCAPI ::ItemRenderer* $getItemRenderer();

    MCAPI ::HudIconActorRenderer* $getHudIconActorRenderer();

    MCAPI ::std::deque<::std::string>& $getSentMessageHistory();

    MCAPI ::std::deque<::std::string>& $getDevConsoleMessageHistory();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> $getProfanityContext() const;

    MCAPI void $initTTSClient(::std::shared_ptr<::TextToSpeechClient> textToSpeechClient);

    MCFOLD ::std::shared_ptr<::TextToSpeechClient> $getTTSClient();

    MCFOLD ::std::shared_ptr<::TextToSpeechClient const> $getTTSClient() const;

    MCAPI ::std::shared_ptr<::ITTSEventManager> $getTTSEventManager();

    MCAPI void $addTTSMessage(
        ::std::string const&     message,
        ::ProfanityFilterContext profanityFilterContext,
        bool                     interruptible,
        ::std::string const&     interruptibleId,
        bool                     required,
        bool                     disregardAppFocus
    );

    MCAPI void $initCommands();

    MCAPI uint $getUserId() const;

    MCAPI bool $isPrimaryUser() const;

    MCAPI double $getServerConnectionTime() const;

    MCAPI void $setServerPingTime(int pingTime);

    MCAPI int $getServerPingTime() const;

    MCAPI void $setDefaultPlayscreenTab(::PlayScreenDefaultTab defaultTab);

    MCAPI void $setClientInstanceState(::ClientInstanceState const& newstate);

    MCAPI void $setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<::UIEventCoordinator>&& coordinator);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> $getUIEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> $getEventCoordinator();

    MCFOLD ::ClientNetworkEventCoordinator& $getClientNetworkEventCoordinator();

    MCAPI ::ClientScriptEventCoordinator& $getClientScriptEventCoordinator();

    MCAPI ::std::chrono::steady_clock::time_point $getNoBlockBreakUntil();

    MCAPI void $setNoBlockBreakUntil(::std::chrono::steady_clock::time_point timePoint);

    MCFOLD ::GameCallbacks& $getGameCallbacks();

    MCAPI ::GameModuleClient* $getGameModule();

    MCAPI ::ClientHitDetectCoordinator& $getHitEventCoordinator();

    MCAPI void $sendClientEnteredLevel();

    MCAPI ::HitDetectSystem* $getHitDetectSystem();

    MCAPI bool $isPlaying() const;

    MCFOLD ::ClientInstanceState $getClientInstanceState() const;

    MCAPI ::LatencyGraphDisplay* $getLatencyGraphDisplay() const;

    MCAPI ::PlayerCapabilities::IClientController const& $getClientCapabilities() const;

    MCAPI ::std::weak_ptr<::IClientInstance> $getWeakPtrToThis();

    MCAPI ::ClientRequirementVerifier const& $getClientRequirementVerifier() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> $getFogDefinitionRegistry() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry> $getFogDefinitionRegistry();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::FogManager const> $getFogManager() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::FogManager> $getFogManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ScreenLoadTimeTracker> $getScreenLoadTimeTracker();

    MCAPI ::ItemRegistryRef $getItemRegistry() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> $getDisconnectionRequestHandler() const;

    MCAPI float $getRemoteServerTimeMs() const;

    MCAPI void $setRemoteServerTimeMs(float time);

    MCAPI float $getRemoteServerNetworkTimeMs() const;

    MCAPI void $setRemoteServerNetworkTimeMs(float time);

    MCAPI ::Bedrock::NonOwnerPointer<::ClientScriptManager> $getClientScriptManager();

    MCAPI ::Scripting::ScriptEngine* $getScriptingEngine();

    MCAPI ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const $getWorldTransferAgent() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler> $getPlayerReportHandler();

    MCAPI ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> $getLinkedAssetValidator();

    MCAPI void $flagDisconnectionAndNotify(::Connection::DisconnectFailReason disconnectReason);

    MCAPI void $flagDisconnectionAndNotifyWithParams(::DisconnectionScreenParams const& params);

    MCAPI void $disconnectSubClient(::Connection::DisconnectFailReason disconnectReason);

    MCAPI void $setClientUpdateAndRenderThrottling(bool enabled, int threshold, float scalar);

    MCAPI bool $isClientUpdateAndRenderThrottlingEnabled() const;

    MCFOLD int $getClientUpdateAndRenderThrottlingThreshold() const;

    MCAPI float $getClientUpdateAndRenderThrottlingScalar() const;

    MCAPI bool $isUserBanned() const;

    MCAPI bool $isEligibleForPauseFeature() const;

    MCAPI void $setupPauseManagers();

    MCAPI bool $requestInGamePause(bool status);

    MCAPI void $openContentLogHistory();

    MCAPI double $getGameUpdateDurationInSeconds() const;

    MCAPI ::std::optional<::PlayerJoinWorldTelemetryInfo> $getPlayerJoinWorldTelemetryInfo() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForGameCallbacks();

    MCNAPI static void** $vftableForStorageAreaStateListener();

    MCNAPI static void** $vftableForIClientInstance();

    MCNAPI static void** $vftableForPlayerListener();
    // NOLINTEND
};
