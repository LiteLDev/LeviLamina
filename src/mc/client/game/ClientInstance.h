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
struct FontHandle;
struct FrameUpdateContext;
struct GameModuleClient;
struct GameRenderer;
struct GuiData;
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
    MCNAPI_C ClientInstance(
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

    MCNAPI_C ::DisconnectionErrorDetails _createDisconnectionErrorDetails(::Connection::DisconnectionStage paramStage);

    MCNAPI_C ::std::unique_ptr<::LegacyClientNetworkHandler> _createNetworkHandler(
        ::PlayerAuthenticationType authType,
        ::LegacyMultiplayerToken&& token,
        ::RawGameServerToken&&     newToken
    );

    MCNAPI_C void _createSkinRepositoryClientInterface();

    MCNAPI_C void _finishDestroyingGame();

    MCNAPI_C ::Bedrock::Threading::Async<::std::pair<::LegacyMultiplayerToken, ::RawGameServerToken>>
    _getGlobalTokens(::PlayerAuthentication& playerAuthToUse);

    MCNAPI_C bool _getIsConnectedToApplicationLayer() const;

    MCNAPI_C void _handleDisconnectionScreenRequests();

    MCNAPI_C void _handlePossibleControllerDisconnect(bool isInitFinished);

    MCNAPI_C void _initSceneStack();

    MCNAPI_C bool _isEditorModeOrInEditorWorld() const;

    MCNAPI_C bool _isInEditorTestWorld() const;

    MCNAPI_C bool _isShowingScreen(::std::string_view screenName) const;

    MCNAPI_C ::std::optional<bool> _isUsingTurn() const;

    MCNAPI_C void
    _joinWorldInProgressSubclient(::std::optional<::PlayerJoinWorldTelemetryInfo> primaryClientJoinWorldInfo);

    MCNAPI_C void
    _leaveGameOnUnrecoverableError(::std::string const& displayMessage, ::std::string const& telemetryMessage);

    MCNAPI_C void _navigateToSDLCharacterCreatorOffer(::std::string const& productId);

    MCNAPI_C void _notifyTelemetryClientCanceledJoinAttempt();

    MCNAPI_C void _notifyTelemetryClientStartedJoinAttempt();

    MCNAPI_C void _notifyTelemetryClientSuccessfullyEnteredWorld();

    MCNAPI_C void _notifyTelemetryOfFlaggedDisconnect(
        ::Connection::DisconnectFailReason failReason,
        ::std::string const&               titleMessage,
        ::std::string const&               errorMessage,
        ::std::string const&               codeword
    );

    MCNAPI_C void _perspectiveOptionChanged(::Option const&);

    MCNAPI_C void _requestLeaveGameImpl(bool switchScreen, bool sync);

    MCNAPI_C void _startDestroyingGame();

    MCNAPI_C void _startLeaveGame();

    MCNAPI_C void _startWorldPrimaryClient(
        ::PlayerAuthenticationType authType,
        ::LegacyMultiplayerToken&& token,
        ::RawGameServerToken&&     newToken
    );

    MCNAPI_C void _startWorldSubClient(
        ::PlayerAuthenticationType authType,
        ::LegacyMultiplayerToken&& token,
        ::RawGameServerToken&&     newToken
    );

    MCNAPI_C void
    _tickBuildAction(::HitResult const& solidHitResult_, ::HitResult const& liquidHitResult_, bool advanceTime);

    MCNAPI_C void
    _updateScreenSizeVariables(::Vec2 const& totalScreenSize, ::Vec2 const& safeZone, float forcedGuiScale);

    MCNAPI_C void fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode);

    MCNAPI_C void flagDisconnectionAndNotifyWithTarget(
        ::DisconnectionScreenParams const& params,
        ::Connection::UIReturnTarget       uiReturnTarget
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static bool tickDestroyBlock(::ClientInstance::ClientDestroyBlockState& state, bool advanceTime);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $onInitMinecraftGame();

    MCNAPI void $onDestroyMinecraftGame();

    MCNAPI void $init(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const& filePathManager,
        ::ClientNetworkSystem&                                        network,
        ::Timer&                                                      simTimer,
        ::Timer&                                                      realTimer,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&  userManager,
        int                                                           id,
        ::IGameModuleApp&                                             gameModuleApp
    );

    MCNAPI void $initSceneFactory(
        ::std::unique_ptr<::SceneFactory>         sceneFactory,
        ::std::unique_ptr<::OreUI::SceneProvider> sceneProvider
    );

    MCNAPI void $setUiRouter(::std::unique_ptr<::OreUI::Router> uiRouter);

    MCNAPI void $initGraphics();

    MCNAPI void $stop();

    MCNAPI void $teardown();

    MCNAPI void $preShutDown();

    MCNAPI void $setGameConnectionInfo(::Social::GameConnectionInfo const& gameConnection);

    MCNAPI ::std::optional<::Social::GameConnectionInfo> $getGameConnectionInfo();

    MCNAPI void $onStartJoinGame(
        bool                                   isJoiningLocalServer,
        ::std::string const&                   multiplayerCorrelationId,
        ::std::string const&                   serverName,
        ::std::string const&                   worldName,
        ::NetworkType                          networkTypeOverride,
        ::Social::MultiplayerServiceIdentifier service,
        bool                                   isServerTransfer
    );

    MCNAPI void $onCancelJoinGame();

    MCNAPI void $requestLeaveGameAsync();

    MCNAPI void $requestLeaveGame(bool switchScreen, bool sync);

    MCNAPI void $stopPlayScreen();

    MCNAPI bool $isLeaveGameDone() const;

    MCNAPI void $setupPlayScreenForLeaveGame();

    MCNAPI void $preCacheOutOfGameViews();

    MCNAPI void $resetPrimaryClient();

    MCNAPI void $resetGameSession();

    MCNAPI void $tick();

    MCNAPI void $frameUpdate(::FrameUpdateContext& frameUpdateContext);

    MCNAPI void $preFrameTick();

    MCNAPI bool $update(bool isInitFinished);

    MCNAPI void $endFrame();

    MCNAPI float $getFrameAlpha();

    MCNAPI void $startSubClientLateJoin(
        bool                                            hasXBLBroadcast,
        ::std::unique_ptr<::GameModuleClient>           gameModuleClient,
        ::std::optional<::PlayerJoinWorldTelemetryInfo> primaryClientJoinWorldInfo
    );

    MCNAPI ::Bedrock::Threading::Async<::ClientGameSetupResult>
    $setupClientGame(bool joiningLocalServer, ::std::unique_ptr<::GameModuleClient> gameModuleClient);

    MCNAPI ::BlockSource* $getRegion();

    MCNAPI ::LocalPlayer* $getLocalPlayer() const;

    MCNAPI void $setupPrimaryClientEditorManager();

    MCNAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> $getLocalEditorPlayer() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> $getEditorManager() const;

    MCNAPI bool $isPlayerInEditor() const;

    MCNAPI ::LocalPlayerChangedConnector $getLocalPlayerChangedConnector();

    MCNAPI ::WeakEntityRef $getLocalUser() const;

    MCNAPI ::Actor* $getCameraActor() const;

    MCNAPI void $setCameraActor(::Actor* cameraActor);

    MCNAPI ::ListenerState const* $getListenerState() const;

    MCNAPI ::Actor* $getCameraTargetActor() const;

    MCNAPI void $setCameraTargetActor(::Actor* cameraTargetActor);

    MCNAPI ::WeakEntityRef $getCameraEntity() const;

    MCNAPI void $getRawCameraEntities(::WeakEntityRef& cameraEntity, ::WeakEntityRef& cameraTargetEntity) const;

    MCNAPI void $setRawCameraEntities(::WeakEntityRef cameraEntity, ::WeakEntityRef cameraTargetEntity);

    MCNAPI ::HitResult const& $getLatestHitResult() const;

    MCNAPI bool $isLeavingGame() const;

    MCNAPI bool $isDestroyingGame() const;

    MCNAPI bool $isShuttingDown() const;

    MCNAPI bool $useLowFrequencyUIRender() const;

    MCNAPI bool $isSplitScreenActive() const;

    MCNAPI bool $isExitingLevel() const;

    MCNAPI bool $isInBedScreen() const;

    MCNAPI bool $isInDeathScreen() const;

    MCNAPI bool $isKeyboardEnabled() const;

    MCNAPI bool $hasCommands() const;

    MCNAPI int $getSplitScreenCount() const;

    MCNAPI bool $isShowingLoadingScreen() const;

    MCNAPI bool $shouldDisconnectOnAppSuspended() const;

    MCNAPI bool $isGamePlayTipsEnabled() const;

    MCNAPI bool $isPlatformNX() const;

    MCNAPI bool $isLocalSplitscreenWith(::ActorUniqueID const& id) const;

    MCNAPI bool $isValidCrossPlatformSkin() const;

    MCNAPI bool $isCurrentSkinPlatformLocked() const;

    MCNAPI bool $isSelectedSkinInitialized() const;

    MCNAPI ::SplitScreenInfo $getSplitScreenInfo() const;

    MCNAPI int $getCurrentMaxGUIScaleIndex() const;

    MCNAPI bool $getHandlingControllerDisconnect();

    MCNAPI void $setOpenControllerDisconnectScreen(bool open);

    MCNAPI ::ClientPlayMode $getClientPlayMode() const;

    MCNAPI void $setClientPlayMode(::ClientPlayMode const& mode);

    MCNAPI ::std::function<void()> $getCreditsCallback();

    MCNAPI void $setCreditsCallback(::std::function<void()> callback);

    MCNAPI void $setupTransitionForCredits(::std::function<void()> callback);

    MCNAPI void $refreshScreenSizeData();

    MCNAPI void $onScreenSizeChanged(int width, int height, float forcedGuiScale);

    MCNAPI void $onGuiScaleOffsetChanged();

    MCNAPI void $onSafeZoneChanged();

    MCNAPI bool $hasDismissedNewPlayerFlow() const;

    MCNAPI void $quit(::std::string const& src, ::std::string const& reason);

    MCNAPI ::IMinecraftGame& $getMinecraftGame_DEPRECATED() const;

    MCNAPI ::IClientInstances& $getClientInstances() const;

    MCNAPI ::World::WorldSystem& $getWorldSystem() const;

    MCNAPI bool $isWorldSystemReady() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> $getAutomationClient() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::EDUSystems> $getEDUSystems();

    MCNAPI ::Bedrock::NonOwnerPointer<::EDUSystems const> $getEDUSystems() const;

    MCNAPI ::IMinecraftEventing& $getEventing() const;

    MCNAPI ::IConnectionEventing& $getConnectionEventing() const;

    MCNAPI ::FontHandle $getFontHandle() const;

    MCNAPI ::FontHandle $getRuneFontHandle() const;

    MCNAPI ::FontHandle $getUnicodeFontHandle() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> $getGeometryGroup() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> $getBlockCullingGroup() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> $getMultiplayerServiceManager() const;

    MCNAPI ::IResourcePackRepository& $getResourcePackRepository() const;

    MCNAPI ::ResourcePackManager& $getResourcePackManager() const;

    MCNAPI ::PackManifestFactory& $getPackManifestFactory();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> $getKeyProvider() const;

    MCNAPI ::PacksInfoData const& $getHostSpecifiedPacks() const;

    MCNAPI ::std::shared_ptr<::SkinRepository> $getSkinRepository() const;

    MCNAPI ::PersonaRepository& $getPersonaRepository() const;

    MCNAPI ::MarketplaceServicesManager& $getMarketplaceServicesManager() const;

    MCNAPI ::SkinRepositoryClientInterface& $getSkinRepositoryClientInterface() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> $getStoreCatalogRepository();

    MCNAPI ::std::shared_ptr<::mce::TextureGroup> $getTextureGroup() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> $getStoreCacheTextures() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> $getMinecraftGraphics() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> $getUIRepository() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> $getUserManager() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::TrialManager> $getTrialManager() const;

    MCNAPI bool $wantToQuit() const;

    MCNAPI bool $isPrimaryLevelCrossPlatformMultiplayer() const;

    MCNAPI bool $isPrimaryLevelMultiplayer() const;

    MCNAPI bool $isAdhocEnabled() const;

    MCNAPI ::std::shared_ptr<::ActorAnimationGroup> $getActorAnimationGroup() const;

    MCNAPI bool $isMarketplaceDisabled() const;

    MCNAPI ::std::pair<::StoreErrorCodes, ::std::string> const $getMarketplaceDisabledReasonWithErrorCode() const;

    MCNAPI void $linkToOffer(::std::string const& productId, bool allowWhileInGame);

    MCNAPI void $linkToPage(::std::string const& pageId);

    MCNAPI void $linkTo3PServerOffers(::std::string const& pageId, ::std::string const& creatorName);

    MCNAPI void $navigateToMarketplaceInventoryScreen(::InventoryTabIndex tabIndex);

    MCNAPI void $navigateToStoreHomeScreen();

    MCNAPI void $navigateToCoinPurchaseScreen(int neededCoins, ::std::function<void(bool, int)> callback);

    MCNAPI void $navigateToPurchaseOfferScreen(::StoreCatalogItem& item, ::StoreNavigationOrigin, bool const);

    MCNAPI void $navigateToDressingRoomOfferScreen(::std::string const& offerId);

    MCNAPI bool $navigateToProfileScreen(::std::string const&, bool const preventProgressScreen);

    MCNAPI void $navigateToServersScreen(bool const calledFromHyperlink);

    MCNAPI void $navigateToHowToPlayScreen(::std::string const& startTopic);

    MCNAPI void $navigateToGatheringInfoScreen(bool autoConnect);

    MCNAPI void $navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex tabIndex);

    MCNAPI void $navigateToRealmsStoriesTransitionScreen(::Realms::World const& world);

    MCNAPI void $tryPushLeaveGameScreen();

    MCNAPI void $tryStartDayOneExperience();

    MCNAPI bool $isReadyToRender() const;

    MCNAPI void $onDimensionChangedEvent();

    MCNAPI void $onGameEventNotification(::ui::GameEventNotification notification);

    MCNAPI ::std::string $getTopScreenName() const;

    MCNAPI void $setLeaveGameInProgressAsReadyToContinue();

    MCNAPI void $stopDestroying();

    MCNAPI void $onClientCreatedLevel(
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::OwnerPtr<::EntityContext>                                          userEntity
    );

    MCNAPI ::PlayerAuthentication& $getPlayerAuthentication();

    MCNAPI void $createPlayerAuthentication();

    MCNAPI void $createPlayerAuthentication(uint64 clientRandomId);

    MCNAPI ::std::string $getPlatformId() const;

    MCNAPI ::std::string $getPlatformOnlineId() const;

    MCNAPI bool $useController() const;

    MCNAPI bool $useTouchscreen() const;

    MCNAPI bool $getMouseGrabbed() const;

    MCNAPI bool $currentInputModeIsMouseAndKeyboard() const;

    MCNAPI bool $allowPicking() const;

    MCNAPI bool $isShowingMenu() const;

    MCNAPI bool $isShowingPauseScreen() const;

    MCNAPI bool $isShowingProgressScreen() const;

    MCNAPI bool $isShowingWorldProgressScreen() const;

    MCNAPI bool $isShowingRealmsProgressScreen() const;

    MCNAPI bool $isShowingDeathScreen() const;

    MCNAPI bool $isShowingServerForm() const;

    MCNAPI bool $isScreenReplaceable() const;

    MCNAPI bool $isInWorldAndNotShowingAnyMenuScreens() const;

    MCNAPI bool $isWorldActive() const;

    MCNAPI bool $isInRealm();

    MCNAPI bool $readyForShutdown() const;

    MCNAPI bool $isPrimaryClient() const;

    MCNAPI bool $isEduMode() const;

    MCNAPI bool $isGamepadCursorEnabled() const;

    MCNAPI bool $isInControlCustomization() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Minecraft> $getServerData();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Minecraft const> $getServerData() const;

    MCNAPI ::MultiPlayerLevel* $getLevel();

    MCNAPI ::MultiPlayerLevel const* $getLevel() const;

    MCNAPI bool $hasLevel() const;

    MCNAPI bool $isPreGame() const;

    MCNAPI bool $isInMultiplayerGame() const;

    MCNAPI bool $isMultiPlayerClient() const;

    MCNAPI ::IOptions& $getOptions();

    MCNAPI ::IOptions const& $getOptions() const;

    MCNAPI ::std::shared_ptr<::Options> $getOptionsPtr();

    MCNAPI ::std::shared_ptr<::Options const> const $getOptionsPtr() const;

    MCNAPI ::std::shared_ptr<::Social::User> const& $getUser() const;

    MCNAPI ::std::shared_ptr<::ISettingsRegistry> $getSettingsRegistry();

    MCNAPI ::Option const& $getShowLearningPromptsOption() const;

    MCNAPI ::Option& $getShowControlTipsOption();

    MCNAPI ::Option& $getShowControlTipsOverrideOption();

    MCNAPI double $getControlTipsTimeElapsed() const;

    MCNAPI void $setControlTipsTimeElapsedStart();

    MCNAPI ::GameRenderer& $getGameRenderer() const;

    MCNAPI ::LevelRenderer* $getLevelRenderer() const;

    MCNAPI ::LevelRendererCameraProxy* $getLevelRendererCameraProxy() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::CameraRegistry> $getCameraRegistry();

    MCNAPI ::Bedrock::NonOwnerPointer<::CameraRegistry const> $getCameraRegistry() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::EntitySystems> $getCameraSystems();

    MCNAPI ::LightTexture* $getLightTexture();

    MCNAPI void $setupLevelRendering(::MultiPlayerLevel& level, ::WeakEntityRef cameraTargetEntity);

    MCNAPI ::mce::ViewportInfo const& $getViewportInfo() const;

    MCNAPI void $setViewportInfo(::mce::ViewportInfo const& viewportInfo);

    MCNAPI ::Vec2 $getNormalizedViewportSize() const;

    MCNAPI void $updateChunkRadius();

    MCNAPI void $setUITexture(::mce::Texture* tex);

    MCNAPI ::mce::Texture* $getUITexture();

    MCNAPI void $setLevelTexture(::mce::Texture* tex);

    MCNAPI ::mce::Texture* $getLevelTexture();

    MCNAPI void $setUICursorTexture(::mce::TexturePtr tex);

    MCNAPI ::mce::TexturePtr $getUICursorTexture() const;

    MCNAPI ::mce::Camera& $getCamera();

    MCNAPI ::ShaderColor& $getShaderColor();

    MCNAPI ::ShaderColor& $getDarkShaderColor();

    MCNAPI void $clearGraphicsCache();

    MCNAPI void $getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef& matrix, float cursorHalfSizeTexels);

    MCNAPI bool $shouldRenderUICursor() const;

    MCNAPI bool $getRenderPlayerModel() const;

    MCNAPI ::DeferredLighting& $getDeferredLighting();

    MCNAPI float $getGuiScale() const;

    MCNAPI ::Option const& $getGuiScaleOption() const;

    MCNAPI int $getGuiScaleOffset() const;

    MCNAPI void $setGuiScaleOffset(int guiScale);

    MCNAPI void $renderImGui(::ScreenContext& screenContext, bool drawMenuBar);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::GuiData> $getGuiData();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::GuiData const> $getGuiData() const;

    MCNAPI ::GuidedFlowManager& $getGuidedFlowManager();

    MCNAPI ::PixelCalc const& $getDpadScale() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::DateManager const> $getDateManager() const;

    MCNAPI void $addOverrideHoursToDateTime(uint const hoursToAdd);

    MCNAPI ::ToastManager& $getToastManager();

    MCNAPI ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&
    $getClipboardManager();

    MCNAPI ::AbstractScene* $getTopScene();

    MCNAPI ::AbstractScene const* $getTopScene() const;

    MCNAPI ::AbstractScene* $getActiveScene();

    MCNAPI ::AbstractScene const* $getActiveScene() const;

    MCNAPI ::SceneFactory& $getSceneFactory() const;

    MCNAPI ::OreUI::SceneProvider& $getSceneProvider() const;

    MCNAPI ::ui::ScreenTechStackSelector& $getScreenTechStackSelector();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> $getClientSceneStack() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $getClientSceneStack();

    MCNAPI ::OreUI::Router& $getClientUIRouter() const;

    MCNAPI ::ISceneStack& $getMainSceneStackInterface();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $getMainSceneStack();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> $getMainSceneStack() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> $getCurrentSceneStack() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $getCurrentSceneStack();

    MCNAPI ::OreUI::Router& $getCurrentUIRouter();

    MCNAPI ::OreUI::Router const& $getCurrentUIRouter() const;

    MCNAPI ::OreUI::ITelemetry& $getOreUITelemetry();

    MCNAPI ::WeakRef<::OreUI::UIBlockThumbnailAtlasManager> $getOreUIBlockThumbnailAtlasManager() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $prepareSceneFor(
        ::ui::SceneType const                                 sceneTypeToFind,
        ::std::function<::std::shared_ptr<::AbstractScene>()> createScreenCallback
    );

    MCNAPI ::CachedScenes& $getCachedScenes();

    MCNAPI ::std::string $getScreenName() const;

    MCNAPI ::std::string $getScreenTelemetry() const;

    MCNAPI ::MobEffectsLayout& $getMobEffectsLayout();

    MCNAPI ::std::string $emoticonifyText(::std::string const& text) const;

    MCNAPI ::std::string $emoticonifyText(::std::string const& text, bool isGameTip);

    MCNAPI void $onMobEffectsChange();

    MCNAPI void $setUISizeAndScale(int w, int h, float forcedGuiScale);

    MCNAPI void $forEachVisibleScreen(::brstd::function_ref<void(::AbstractScene&)> callback);

    MCNAPI void $forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown);

    MCNAPI void $forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const;

    MCNAPI bool $updateSceneStack();

    MCNAPI void $forEachAlwaysAcceptInputScreen(
        ::std::function<void(::AbstractScene&)> callback,
        ::AbstractScene const*                  ignoreScreen
    );

    MCNAPI void $forEachAlwaysAcceptInputScreenWithTop(::std::function<void(::AbstractScene&)> callback);

    MCNAPI void $showPlayerProfile(::std::string const& xuid, ::std::string const& platformId);

    MCNAPI bool $isInGameInputEnabled() const;

    MCNAPI void $setInGameInputEnabled(bool isEnabled);

    MCNAPI ::Vec2 $getSafeZoneScale() const;

    MCNAPI void $verifySkinApproval(
        ::std::string const&                        serverType,
        ::std::function<void(::std::string)> const& notApprovedCallback,
        ::std::function<void()> const&              approvedCallback
    ) const;

    MCNAPI ::InputMode $getCurrentInputMode() const;

    MCNAPI bool $isTouchGameplayAllowed() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> $getMinecraftInput() const;

    MCNAPI ::KeyboardManager& $getKeyboardManager();

    MCNAPI void $setLastPointerLocation(float x, float y, float z);

    MCNAPI void $clearTouchPointerLocations();

    MCNAPI void $clearTouchPointerLocation(int id);

    MCNAPI void $updateTouchPointerLocation(int id, float x, float y);

    MCNAPI ::Vec3 $getLastPointerLocation();

    MCNAPI ::Vec2 $getTouchPointerLocation(int id) const;

    MCNAPI void $updateActionPointerId(int id);

    MCNAPI int $getActionPointerId() const;

    MCNAPI bool $shouldUseLastPointerLocationOnFocusChange();

    MCNAPI bool $currentScreenShouldStealMouse();

    MCNAPI ::BuildActionIntention& $getInProgressBAI() const;

    MCNAPI ::PacketSender& $getPacketSender();

    MCNAPI ::ClientNetworkSystem& $getClientNetworkSystem();

    MCNAPI ::ClientNetworkSystem const& $getClientNetworkSystem() const;

    MCNAPI ::glm::vec2 $getGamepadCursorPosition() const;

    MCNAPI void $updateControlOptionState(uint id, bool active);

    MCNAPI void $clearActiveControlOptions();

    MCNAPI ::std::set<uint> const& $getActiveControlOptions() const;

    MCNAPI ::std::vector<::OptionID> $getActiveOptionIDs(::ControlOptionType controlOptionType) const;

    MCNAPI void $setNumberOfActiveConfigs(int numberOfActiveConfigs);

    MCNAPI int $getNumberOfActiveConfigs() const;

    MCNAPI bool $isNoConfigSelected() const;

    MCNAPI void $setNumberOfEnabledConfigs(int numberOfEnabledConfigs);

    MCNAPI int $getNumberOfEnabledConfigs() const;

    MCNAPI void $setWYSIWYGState(::WYSIWYGState wysiwygState);

    MCNAPI ::WYSIWYGState $getWYSIWYGState() const;

    MCNAPI void $setOtherConfigsExistInThisCategory(bool otherConfigsExistInThisCategory);

    MCNAPI bool $getOtherConfigsExistInThisCategory() const;

    MCNAPI void $setMoveTurnInput(::std::unique_ptr<::ClientMoveInputHandler> pClientMoveInputHandler);

    MCNAPI void $setupPersistentControls(::InputMode currentMode);

    MCNAPI void $resetPlayerMovement();

    MCNAPI void $suspendPredictedMovement();

    MCNAPI void $onClientInputInitComplete();

    MCNAPI void $setClientInputHandler(::std::unique_ptr<::ClientInputHandler> pClientInputHandler);

    MCNAPI ::ClientInputHandler* $getInput() const;

    MCNAPI int $getControllerId() const;

    MCNAPI bool $hasConnectedController() const;

    MCNAPI void $setSuspendInput(bool suspendInput);

    MCNAPI void $setSuspendDirectionalInput(bool suspendDirectionalInput);

    MCNAPI void $setDisableInput(bool disableInput);

    MCNAPI void $grabMouse();

    MCNAPI void $releaseMouse();

    MCNAPI void $refocusMouse(bool lostMouse);

    MCNAPI void $setMouseType(::ui::MousePointerType type);

    MCNAPI void $resetBai(int baiFlags);

    MCNAPI void $clearInProgressBAI();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> $getSoundEngine() const;

    MCNAPI ::MusicManager const* $getMusicManager() const;

    MCNAPI ::MusicManager* $getMusicManagerNonConst() const;

    MCNAPI void $play(::std::string const& name, ::Vec3 const& pos, float volume, float pitch);

    MCNAPI void $playUI(::std::string const& name, float volume, float pitch);

    MCNAPI void $muteAudio();

    MCNAPI void $unMuteAudio();

    MCNAPI void $fadeOutMusic() const;

    MCNAPI ::TaskGroup& $getTaskGroup();

    MCNAPI void $onFullVanillaPackOnStack();

    MCNAPI bool $isFullVanillaPackOnStack() const;

    MCNAPI void $onPlayerLoaded(::Player& player);

    MCNAPI void $setClientGameMode(::GameType gameType);

    MCNAPI void $resetToDefaultGameMode();

    MCNAPI ::IGameConnectionListener& $getGameConnectionListener();

    MCNAPI void $connectToThirdPartyServer(::std::string const& ipAddress, int port);

    MCNAPI void $startExternalNetworkWorld(
        ::Social::GameConnectionInfo connection,
        ::std::string const&         serverName,
        bool                         isTransfer
    );

    MCNAPI void $connectToExperience(
        ::std::string const&                                              experienceId,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, bool)> joinServerCallback,
        ::std::function<void(::World::JoinServerWorldResult)>             onErrorCallback
    );

    MCNAPI bool $isReadyToReconnect() const;

    MCNAPI bool $checkForPiracy();

    MCNAPI void $updateChatFilterStatus(::ProfanityContext& profanityContext);

    MCNAPI void $updateControllerHandling();

    MCNAPI void $onPlayerDestruction(::Player& player);

    MCNAPI void $setBehaviorCommandCallback(::std::function<void(::std::string const&, ::BehaviorStatus)> callback);

    MCNAPI void $setBehaviorCommandStatus(::std::string const& treeName, ::BehaviorStatus status);

    MCNAPI void $setConnectGamepadScreenActive(bool active);

    MCNAPI ::Core::PathBuffer<::std::string> $requestScreenshot(::ScreenshotOptions& screenshotOptions);

    MCNAPI ::Core::PathBuffer<::std::string>
    $requestScreenshotAndCreateEncryptedChecksumFile(::ScreenshotOptions& screenshotOptions);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> $getDevConsoleLogger() const;

    MCNAPI ::std::shared_ptr<::FileDataRequest> $requestImageFromUrl(
        ::std::string const&                                                        imageUrl,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)> callback
    );

    MCNAPI void $setActiveFileStorageArea(::std::shared_ptr<::Core::FileStorageArea> storageArea);

    MCNAPI void $onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& storageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    );

    MCNAPI void $onLowDiskSpace(bool const bSet);

    MCNAPI void $onOutOfDiskSpace(bool const bSet);

    MCNAPI void $onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);

    MCNAPI void $onLevelCorrupt();

    MCNAPI void $onCriticalScriptError(char const* clientDisconnectError, char const*);

    MCNAPI void $onGameModeChanged();

    MCNAPI void $onBeforeSimTick();

    MCNAPI void $onTick(int nTick, int maxTick);

    MCNAPI void $onInternetUpdate();

    MCNAPI void $onGameSessionReset();

    MCNAPI void $onLevelExit();

    MCNAPI void $onRequestResourceReload();

    MCNAPI void $updateScreens();

    MCNAPI void $initializeRenderResources();

    MCNAPI void $postInitRenderResources();

    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppSuspensionDisconnect();

    MCNAPI void $onAppResumed();

    MCNAPI void $onActiveResourcePacksChanged(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& entityResourceDefGroup
    );

    MCNAPI void $reloadEntityRenderers(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& actorResourceDefinitionGroup
    );

    MCNAPI ::BlockTessellator& $getBlockTessellator();

    MCNAPI ::BlockActorRenderDispatcher& $getBlockEntityRenderDispatcher();

    MCNAPI ::std::shared_ptr<::ActorRenderDispatcher> $getEntityRenderDispatcher();

    MCNAPI ::ActorBlockRenderer& $getEntityBlockRenderer();

    MCNAPI ::ItemInHandRenderer* $getItemInHandRenderer();

    MCNAPI ::ItemRenderer* $getItemRenderer();

    MCNAPI ::HudIconActorRenderer* $getHudIconActorRenderer();

    MCNAPI ::std::deque<::std::string>& $getSentMessageHistory();

    MCNAPI ::std::deque<::std::string>& $getDevConsoleMessageHistory();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> $getProfanityContext() const;

    MCNAPI void $initTTSClient(::std::shared_ptr<::TextToSpeechClient> textToSpeechClient);

    MCNAPI ::std::shared_ptr<::TextToSpeechClient> $getTTSClient();

    MCNAPI ::std::shared_ptr<::TextToSpeechClient const> $getTTSClient() const;

    MCNAPI ::std::shared_ptr<::ITTSEventManager> $getTTSEventManager();

    MCNAPI void $addTTSMessage(
        ::std::string const&     message,
        ::ProfanityFilterContext profanityFilterContext,
        bool                     interruptible,
        ::std::string const&     interruptibleId,
        bool                     required,
        bool                     disregardAppFocus
    );

    MCNAPI void $initCommands();

    MCNAPI uint $getUserId() const;

    MCNAPI bool $isPrimaryUser() const;

    MCNAPI double $getServerConnectionTime() const;

    MCNAPI void $setServerPingTime(int pingTime);

    MCNAPI int $getServerPingTime() const;

    MCNAPI void $setDefaultPlayscreenTab(::PlayScreenDefaultTab defaultTab);

    MCNAPI void $setClientInstanceState(::ClientInstanceState const& newstate);

    MCNAPI void $setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<::UIEventCoordinator>&& coordinator);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> $getUIEventCoordinator();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> $getEventCoordinator();

    MCNAPI ::ClientNetworkEventCoordinator& $getClientNetworkEventCoordinator();

    MCNAPI ::ClientScriptEventCoordinator& $getClientScriptEventCoordinator();

    MCNAPI ::std::chrono::steady_clock::time_point $getNoBlockBreakUntil();

    MCNAPI void $setNoBlockBreakUntil(::std::chrono::steady_clock::time_point timePoint);

    MCNAPI ::GameCallbacks& $getGameCallbacks();

    MCNAPI ::GameModuleClient* $getGameModule();

    MCNAPI ::ClientHitDetectCoordinator& $getHitEventCoordinator();

    MCNAPI void $sendClientEnteredLevel();

    MCNAPI ::HitDetectSystem* $getHitDetectSystem();

    MCNAPI bool $isPlaying() const;

    MCNAPI ::ClientInstanceState $getClientInstanceState() const;

    MCNAPI ::LatencyGraphDisplay* $getLatencyGraphDisplay() const;

    MCNAPI ::PlayerCapabilities::IClientController const& $getClientCapabilities() const;

    MCNAPI ::std::weak_ptr<::IClientInstance> $getWeakPtrToThis();

    MCNAPI ::ClientRequirementVerifier const& $getClientRequirementVerifier() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> $getFogDefinitionRegistry() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry> $getFogDefinitionRegistry();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::FogManager const> $getFogManager() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::FogManager> $getFogManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ScreenLoadTimeTracker> $getScreenLoadTimeTracker();

    MCNAPI ::ItemRegistryRef $getItemRegistry() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> $getDisconnectionRequestHandler() const;

    MCNAPI float $getRemoteServerTimeMs() const;

    MCNAPI void $setRemoteServerTimeMs(float time);

    MCNAPI float $getRemoteServerNetworkTimeMs() const;

    MCNAPI void $setRemoteServerNetworkTimeMs(float time);

    MCNAPI ::Bedrock::NonOwnerPointer<::ClientScriptManager> $getClientScriptManager();

    MCNAPI ::Scripting::ScriptEngine* $getScriptingEngine();

    MCNAPI ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const $getWorldTransferAgent() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler> $getPlayerReportHandler();

    MCNAPI ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> $getLinkedAssetValidator();

    MCNAPI void $flagDisconnectionAndNotify(::Connection::DisconnectFailReason disconnectReason);

    MCNAPI void $flagDisconnectionAndNotifyWithParams(::DisconnectionScreenParams const& params);

    MCNAPI void $disconnectSubClient(::Connection::DisconnectFailReason disconnectReason);

    MCNAPI void $setClientUpdateAndRenderThrottling(bool enabled, int threshold, float scalar);

    MCNAPI bool $isClientUpdateAndRenderThrottlingEnabled() const;

    MCNAPI int $getClientUpdateAndRenderThrottlingThreshold() const;

    MCNAPI float $getClientUpdateAndRenderThrottlingScalar() const;

    MCNAPI bool $isUserBanned() const;

    MCNAPI bool $isEligibleForPauseFeature() const;

    MCNAPI void $setupPauseManagers();

    MCNAPI bool $requestInGamePause(bool status);

    MCNAPI void $openContentLogHistory();

    MCNAPI double $getGameUpdateDurationInSeconds() const;

    MCNAPI ::std::optional<::PlayerJoinWorldTelemetryInfo> $getPlayerJoinWorldTelemetryInfo() const;
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
