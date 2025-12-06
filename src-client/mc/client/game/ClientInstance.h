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
class EntityContext;
class EntitySystems;
class HitResult;
class ItemInHandRenderer;
class ItemRegistryRef;
class LegacyMultiplayerToken;
class Level;
class LevelListener;
class LevelRenderer;
class LevelRendererCameraProxy;
class LightTexture;
class LocalPlayer;
class Minecraft;
class PacketSender;
class Player;
class ScreenContext;
class ShaderColor;
class TaskGroup;
class Timer;
class UIEventCoordinator;
class Vec2;
class Vec3;
class WeakEntityRef;
struct AbstractScene;
struct ActorBlockRenderer;
struct ActorRenderDispatcher;
struct ActorResourceDefinitionGroup;
struct ActorUniqueID;
struct BlockActorRenderDispatcher;
struct BlockCullingGroup;
struct BlockTessellator;
struct BuildActionIntention;
struct CachedScenes;
struct CameraRegistry;
struct ClientInputHandler;
struct ClientMoveInputHandler;
struct ClientRequirementVerifier;
struct ClientScriptManager;
struct DateManager;
struct DeferredLighting;
struct DevConsoleLogger;
struct DisconnectionErrorDetails;
struct DisconnectionRequestHandler;
struct DisconnectionScreenParams;
struct EDUSystems;
struct FileDataRequest;
struct FogDefinitionRegistry;
struct FogManager;
struct FontHandle;
struct FrameUpdateContext;
struct GameModuleClient;
struct GameRenderer;
struct GeometryGroup;
struct GuiData;
struct GuidedFlowManager;
struct HitDetectSystem;
struct HudIconActorRenderer;
struct IAdvancedGraphicsOptions;
struct IClientInstances;
struct IConnectionEventing;
struct IContentKeyProvider;
struct IGameConnectionListener;
struct IGameModuleApp;
struct IMinecraftApp;
struct IMinecraftEventing;
struct IMinecraftGame;
struct IOptions;
struct IResourcePackRepository;
struct ISceneStack;
struct ISettingsRegistry;
struct ITTSEventManager;
struct IUIRepository;
struct ItemRenderer;
struct KeyboardManager;
struct LatencyGraphDisplay;
struct LegacyClientNetworkHandler;
struct LinkedAssetValidator;
struct ListenerState;
struct LocalPlayerChangedConnector;
struct MarketplaceServicesManager;
struct MinecraftGraphics;
struct MinecraftInputHandler;
struct MobEffectsLayout;
struct MultiPlayerLevel;
struct MusicManager;
struct NetworkSessionOwner;
struct Option;
struct Options;
struct PackManifestFactory;
struct PacksInfoData;
struct PersonaRepository;
struct PixelCalc;
struct PlayerAuthentication;
struct PlayerJoinWorldTelemetryInfo;
struct PlayerReportHandler;
struct ProfanityContext;
struct ProgressHandler;
struct RawGameServerToken;
struct ResourcePackManager;
struct SceneFactory;
struct ScreenLoadTimeTracker;
struct ScreenshotOptions;
struct SkinRepository;
struct SkinRepositoryClientInterface;
struct SoundEngine;
struct SplitScreenInfo;
struct StoreCatalogItem;
struct StoreCatalogRepository;
struct TextToSpeechClient;
struct ToastManager;
struct TrialManager;
struct VideoCaptureSessionManager;
struct WorldTransferAgent;
namespace ApplicationSignal { struct ClipboardCopy; }
namespace ApplicationSignal { struct ClipboardPasteRequest; }
namespace Automation { struct AutomationClient; }
namespace Bedrock::DevTools { struct CommandExecutor; }
namespace Bedrock::Http { struct Status; }
namespace Core { class Path; }
namespace Core { struct FilePathManager; }
namespace Core { struct FileStorageArea; }
namespace Editor { struct IEditorManager; }
namespace Editor { struct IEditorPlayer; }
namespace OreUI { struct ITelemetry; }
namespace OreUI { struct Router; }
namespace OreUI { struct SceneProvider; }
namespace OreUI { struct UIBlockThumbnailAtlasManager; }
namespace PlayerCapabilities { struct IClientController; }
namespace Realms { struct World; }
namespace Scripting { struct ScriptEngine; }
namespace Social { struct GameConnectionInfo; }
namespace Social { struct IUserManager; }
namespace Social { struct MultiplayerServiceManager; }
namespace Social { struct User; }
namespace World { struct WorldSystem; }
namespace mce { class Texture; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
namespace mce { struct Camera; }
namespace mce { struct ViewportInfo; }
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
        MCNAPI ~ClientRenderResources();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

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
        MCNAPI ~ClientDestroyBlockState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkeb8701;
    ::ll::UntypedStorage<8, 8>   mUnk40ac05;
    ::ll::UntypedStorage<8, 8>   mUnk9379d1;
    ::ll::UntypedStorage<8, 24>  mUnk421768;
    ::ll::UntypedStorage<8, 8>   mUnke2a76f;
    ::ll::UntypedStorage<8, 8>   mUnk599652;
    ::ll::UntypedStorage<1, 1>   mUnk13fce4;
    ::ll::UntypedStorage<8, 8>   mUnkd1e630;
    ::ll::UntypedStorage<8, 8>   mUnk703d29;
    ::ll::UntypedStorage<8, 8>   mUnk6d90fa;
    ::ll::UntypedStorage<8, 8>   mUnkace9a6;
    ::ll::UntypedStorage<8, 8>   mUnk59f993;
    ::ll::UntypedStorage<8, 8>   mUnk5310df;
    ::ll::UntypedStorage<8, 8>   mUnk12a970;
    ::ll::UntypedStorage<8, 16>  mUnk3a3d21;
    ::ll::UntypedStorage<8, 8>   mUnk9fe1ff;
    ::ll::UntypedStorage<8, 8>   mUnk29790b;
    ::ll::UntypedStorage<8, 24>  mUnk10018d;
    ::ll::UntypedStorage<8, 24>  mUnk6d935d;
    ::ll::UntypedStorage<8, 24>  mUnk9bcffe;
    ::ll::UntypedStorage<8, 48>  mUnk586e60;
    ::ll::UntypedStorage<8, 8>   mUnkba00d2;
    ::ll::UntypedStorage<4, 4>   mUnkfbfba1;
    ::ll::UntypedStorage<1, 1>   mUnkd6f5bb;
    ::ll::UntypedStorage<1, 1>   mUnkc69553;
    ::ll::UntypedStorage<1, 1>   mUnk20b577;
    ::ll::UntypedStorage<1, 1>   mUnka7e48d;
    ::ll::UntypedStorage<4, 4>   mUnk9e92ce;
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
    ClientInstance& operator=(ClientInstance const&);
    ClientInstance(ClientInstance const&);
    ClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientInstance() /*override*/;

    // vIndex: 1
    virtual void onInitMinecraftGame() /*override*/;

    // vIndex: 2
    virtual void onDestroyMinecraftGame() /*override*/;

    // vIndex: 3
    virtual void init(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const& filePathManager,
        ::ClientNetworkSystem&                                        network,
        ::Timer&                                                      simTimer,
        ::Timer&                                                      realTimer,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&  userManager,
        int                                                           id,
        ::IGameModuleApp&                                             gameModuleApp
    ) /*override*/;

    // vIndex: 4
    virtual void initSceneFactory(
        ::std::unique_ptr<::SceneFactory>         sceneFactory,
        ::std::unique_ptr<::OreUI::SceneProvider> sceneProvider
    ) /*override*/;

    // vIndex: 5
    virtual void setUiRouter(::std::unique_ptr<::OreUI::Router> uiRouter) /*override*/;

    // vIndex: 6
    virtual void initGraphics() /*override*/;

    // vIndex: 7
    virtual void stop() /*override*/;

    // vIndex: 8
    virtual void teardown() /*override*/;

    // vIndex: 9
    virtual void preShutDown() /*override*/;

    // vIndex: 10
    virtual void setGameConnectionInfo(::Social::GameConnectionInfo const& gameConnection) /*override*/;

    // vIndex: 11
    virtual ::std::optional<::Social::GameConnectionInfo> getGameConnectionInfo() /*override*/;

    // vIndex: 12
    virtual void onStartJoinGame(
        bool                                   isJoiningLocalServer,
        ::std::string const&                   multiplayerCorrelationId,
        ::std::string const&                   serverName,
        ::std::string const&                   worldName,
        ::NetworkType                          networkTypeOverride,
        ::Social::MultiplayerServiceIdentifier service,
        bool                                   isServerTransfer
    ) /*override*/;

    // vIndex: 13
    virtual void onCancelJoinGame() /*override*/;

    // vIndex: 14
    virtual void requestLeaveGameAsync() /*override*/;

    // vIndex: 15
    virtual void requestLeaveGame(bool switchScreen, bool sync) /*override*/;

    // vIndex: 16
    virtual void stopPlayScreen() /*override*/;

    // vIndex: 17
    virtual bool isLeaveGameDone() const /*override*/;

    // vIndex: 18
    virtual void setupPlayScreenForLeaveGame() /*override*/;

    // vIndex: 19
    virtual void preCacheOutOfGameViews() /*override*/;

    // vIndex: 20
    virtual void resetPrimaryClient() /*override*/;

    // vIndex: 21
    virtual void resetGameSession() /*override*/;

    // vIndex: 22
    virtual void tick() /*override*/;

    // vIndex: 23
    virtual void frameUpdate(::FrameUpdateContext& frameUpdateContext) /*override*/;

    // vIndex: 25
    virtual void preFrameTick() /*override*/;

    // vIndex: 24
    virtual bool update(bool isInWorld) /*override*/;

    // vIndex: 26
    virtual void endFrame() /*override*/;

    // vIndex: 27
    virtual float getFrameAlpha() /*override*/;

    // vIndex: 28
    virtual void startSubClientLateJoin(
        bool                                            hasXBLBroadcast,
        ::std::unique_ptr<::GameModuleClient>           gameModuleClient,
        ::std::optional<::PlayerJoinWorldTelemetryInfo> primaryClientJoinWorldInfo
    ) /*override*/;

    // vIndex: 29
    virtual ::Bedrock::Threading::Async<::ClientGameSetupResult>
    setupClientGame(bool joiningLocalServer, ::std::unique_ptr<::GameModuleClient> gameModuleClient) /*override*/;

    // vIndex: 30
    virtual ::BlockSource* getRegion() /*override*/;

    // vIndex: 31
    virtual ::LocalPlayer* getLocalPlayer() const /*override*/;

    // vIndex: 32
    virtual void setupPrimaryClientEditorManager() /*override*/;

    // vIndex: 33
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getLocalEditorPlayer() const /*override*/;

    // vIndex: 34
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> getEditorManager() const /*override*/;

    // vIndex: 35
    virtual bool isPlayerInEditor() const /*override*/;

    // vIndex: 36
    virtual ::LocalPlayerChangedConnector getLocalPlayerChangedConnector() /*override*/;

    // vIndex: 37
    virtual ::WeakEntityRef getLocalUser() const /*override*/;

    // vIndex: 38
    virtual ::Actor* getCameraActor() const /*override*/;

    // vIndex: 39
    virtual void setCameraActor(::Actor* cameraActor) /*override*/;

    // vIndex: 40
    virtual ::ListenerState const* getListenerState() const /*override*/;

    // vIndex: 41
    virtual ::Actor* getCameraTargetActor() const /*override*/;

    // vIndex: 42
    virtual void setCameraTargetActor(::Actor* cameraTargetActor) /*override*/;

    // vIndex: 43
    virtual ::WeakEntityRef getCameraEntity() const /*override*/;

    // vIndex: 44
    virtual void getRawCameraEntities(::WeakEntityRef& cameraEntity, ::WeakEntityRef& cameraTargetEntity) const
        /*override*/;

    // vIndex: 45
    virtual void setRawCameraEntities(::WeakEntityRef cameraEntity, ::WeakEntityRef cameraTargetEntity) /*override*/;

    // vIndex: 46
    virtual ::HitResult const& getLatestHitResult() const /*override*/;

    // vIndex: 47
    virtual bool isLeavingGame() const /*override*/;

    // vIndex: 48
    virtual bool isDestroyingGame() const /*override*/;

    // vIndex: 49
    virtual bool isShuttingDown() const /*override*/;

    // vIndex: 50
    virtual bool useLowFrequencyUIRender() const /*override*/;

    // vIndex: 51
    virtual bool isSplitScreenActive() const /*override*/;

    // vIndex: 52
    virtual bool isExitingLevel() const /*override*/;

    // vIndex: 53
    virtual bool isInBedScreen() const /*override*/;

    // vIndex: 54
    virtual bool isInDeathScreen() const /*override*/;

    // vIndex: 55
    virtual bool isKeyboardEnabled() const /*override*/;

    // vIndex: 56
    virtual bool hasCommands() const /*override*/;

    // vIndex: 57
    virtual int getSplitScreenCount() const /*override*/;

    // vIndex: 58
    virtual bool isShowingLoadingScreen() const /*override*/;

    // vIndex: 59
    virtual bool shouldDisconnectOnAppSuspended() const /*override*/;

    // vIndex: 60
    virtual bool isGamePlayTipsEnabled() const /*override*/;

    // vIndex: 61
    virtual bool isPlatformNX() const /*override*/;

    // vIndex: 62
    virtual bool isLocalSplitscreenWith(::ActorUniqueID const& id) const /*override*/;

    // vIndex: 63
    virtual bool isValidCrossPlatformSkin() const /*override*/;

    // vIndex: 64
    virtual bool isCurrentSkinPlatformLocked() const /*override*/;

    // vIndex: 65
    virtual bool isSelectedSkinInitialized() const /*override*/;

    // vIndex: 66
    virtual ::SplitScreenInfo getSplitScreenInfo() const /*override*/;

    // vIndex: 67
    virtual int getCurrentMaxGUIScaleIndex() const /*override*/;

    // vIndex: 68
    virtual bool getHandlingControllerDisconnect() /*override*/;

    // vIndex: 69
    virtual void setOpenControllerDisconnectScreen(bool open) /*override*/;

    // vIndex: 70
    virtual ::ClientPlayMode getClientPlayMode() const /*override*/;

    // vIndex: 71
    virtual void setClientPlayMode(::ClientPlayMode const& mode) /*override*/;

    // vIndex: 72
    virtual ::std::function<void()> getCreditsCallback() /*override*/;

    // vIndex: 73
    virtual void setCreditsCallback(::std::function<void()> callback) /*override*/;

    // vIndex: 74
    virtual void setupTransitionForCredits(::std::function<void()> callback) /*override*/;

    // vIndex: 75
    virtual void refreshScreenSizeData() /*override*/;

    // vIndex: 76
    virtual void onScreenSizeChanged(int width, int height, float forcedGuiScale) /*override*/;

    // vIndex: 77
    virtual void onGuiScaleOffsetChanged() /*override*/;

    // vIndex: 78
    virtual void onSafeZoneChanged() /*override*/;

    // vIndex: 79
    virtual bool hasDismissedNewPlayerFlow() const /*override*/;

    // vIndex: 80
    virtual void quit(::std::string const& src, ::std::string const& reason) /*override*/;

    // vIndex: 81
    virtual ::IMinecraftGame& getMinecraftGame_DEPRECATED() const /*override*/;

    // vIndex: 82
    virtual ::IClientInstances& getClientInstances() const /*override*/;

    // vIndex: 83
    virtual ::World::WorldSystem& getWorldSystem() const /*override*/;

    // vIndex: 84
    virtual bool isWorldSystemReady() const /*override*/;

    // vIndex: 85
    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const /*override*/;

    // vIndex: 87
    virtual ::Bedrock::NonOwnerPointer<::EDUSystems> getEDUSystems() /*override*/;

    // vIndex: 86
    virtual ::Bedrock::NonOwnerPointer<::EDUSystems const> getEDUSystems() const /*override*/;

    // vIndex: 88
    virtual ::IMinecraftEventing& getEventing() const /*override*/;

    // vIndex: 89
    virtual ::IConnectionEventing& getConnectionEventing() const /*override*/;

    // vIndex: 90
    virtual ::FontHandle getFontHandle() const /*override*/;

    // vIndex: 91
    virtual ::FontHandle getRuneFontHandle() const /*override*/;

    // vIndex: 92
    virtual ::FontHandle getUnicodeFontHandle() const /*override*/;

    // vIndex: 93
    virtual ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> getGeometryGroup() const /*override*/;

    // vIndex: 94
    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> getBlockCullingGroup() const /*override*/;

    // vIndex: 95
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> getMultiplayerServiceManager() const
        /*override*/;

    // vIndex: 96
    virtual ::IResourcePackRepository& getResourcePackRepository() const /*override*/;

    // vIndex: 97
    virtual ::ResourcePackManager& getResourcePackManager() const /*override*/;

    // vIndex: 98
    virtual ::PackManifestFactory& getPackManifestFactory() /*override*/;

    // vIndex: 99
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const /*override*/;

    // vIndex: 100
    virtual ::PacksInfoData const& getHostSpecifiedPacks() const /*override*/;

    // vIndex: 101
    virtual ::std::shared_ptr<::SkinRepository> getSkinRepository() const /*override*/;

    // vIndex: 103
    virtual ::PersonaRepository& getPersonaRepository() const /*override*/;

    // vIndex: 104
    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const /*override*/;

    // vIndex: 102
    virtual ::SkinRepositoryClientInterface& getSkinRepositoryClientInterface() const /*override*/;

    // vIndex: 105
    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() /*override*/;

    // vIndex: 106
    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() const /*override*/;

    // vIndex: 107
    virtual ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> getStoreCacheTextures() const /*override*/;

    // vIndex: 108
    virtual ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> getMinecraftGraphics() const /*override*/;

    // vIndex: 109
    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> getUIRepository() const /*override*/;

    // vIndex: 110
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() const /*override*/;

    // vIndex: 111
    virtual ::Bedrock::NotNullNonOwnerPtr<::TrialManager> getTrialManager() const /*override*/;

    // vIndex: 112
    virtual bool wantToQuit() const /*override*/;

    // vIndex: 113
    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const /*override*/;

    // vIndex: 114
    virtual bool isPrimaryLevelMultiplayer() const /*override*/;

    // vIndex: 115
    virtual bool isAdhocEnabled() const /*override*/;

    // vIndex: 116
    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() const /*override*/;

    // vIndex: 117
    virtual bool isMarketplaceDisabled() const /*override*/;

    // vIndex: 118
    virtual ::std::pair<::StoreErrorCodes, ::std::string> const getMarketplaceDisabledReasonWithErrorCode() const
        /*override*/;

    // vIndex: 119
    virtual void linkToOffer(::std::string const& productId, bool allowWhileInGame) /*override*/;

    // vIndex: 120
    virtual void linkToPage(::std::string const& pageId) /*override*/;

    // vIndex: 121
    virtual void linkTo3PServerOffers(::std::string const& pageId, ::std::string const& creatorName) /*override*/;

    // vIndex: 122
    virtual void navigateToMarketplaceInventoryScreen(::InventoryTabIndex tabIndex) /*override*/;

    // vIndex: 123
    virtual void navigateToStoreHomeScreen() /*override*/;

    // vIndex: 124
    virtual void navigateToCoinPurchaseScreen(int neededCoins, ::std::function<void(bool, int)> callback) /*override*/;

    // vIndex: 125
    virtual void
    navigateToPurchaseOfferScreen(::StoreCatalogItem& item, ::StoreNavigationOrigin, bool const) /*override*/;

    // vIndex: 126
    virtual void navigateToDressingRoomOfferScreen(::std::string const& offerId) /*override*/;

    // vIndex: 127
    virtual bool navigateToProfileScreen(::std::string const&, bool const preventProgressScreen) /*override*/;

    // vIndex: 128
    virtual void navigateToServersScreen(bool const calledFromHyperlink) /*override*/;

    // vIndex: 129
    virtual void navigateToHowToPlayScreen(::std::string const& startTopic) /*override*/;

    // vIndex: 130
    virtual void navigateToGatheringInfoScreen(bool autoConnect) /*override*/;

    // vIndex: 131
    virtual void navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex tabIndex) /*override*/;

    // vIndex: 132
    virtual void navigateToRealmsStoriesTransitionScreen(::Realms::World const& world) /*override*/;

    // vIndex: 133
    virtual void tryPushLeaveGameScreen() /*override*/;

    // vIndex: 134
    virtual void tryStartDayOneExperience() /*override*/;

    // vIndex: 135
    virtual bool isReadyToRender() const /*override*/;

    // vIndex: 136
    virtual void onDimensionChangedEvent() /*override*/;

    // vIndex: 137
    virtual void onGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    // vIndex: 138
    virtual ::std::string getTopScreenName() const /*override*/;

    // vIndex: 139
    virtual void setLeaveGameInProgressAsReadyToContinue() /*override*/;

    // vIndex: 140
    virtual void stopDestroying() /*override*/;

    // vIndex: 141
    virtual void onClientCreatedLevel(
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::OwnerPtr<::EntityContext>                                          userEntity
    ) /*override*/;

    // vIndex: 142
    virtual ::PlayerAuthentication& getPlayerAuthentication() /*override*/;

    // vIndex: 144
    virtual void createPlayerAuthentication() /*override*/;

    // vIndex: 143
    virtual void createPlayerAuthentication(uint64 clientRandomId) /*override*/;

    // vIndex: 145
    virtual ::std::string getPlatformId() const /*override*/;

    // vIndex: 146
    virtual ::std::string getPlatformOnlineId() const /*override*/;

    // vIndex: 147
    virtual bool useController() const /*override*/;

    // vIndex: 148
    virtual bool useTouchscreen() const /*override*/;

    // vIndex: 149
    virtual bool getMouseGrabbed() const /*override*/;

    // vIndex: 150
    virtual bool currentInputModeIsMouseAndKeyboard() const /*override*/;

    // vIndex: 151
    virtual bool allowPicking() const /*override*/;

    // vIndex: 152
    virtual bool isShowingMenu() const /*override*/;

    // vIndex: 153
    virtual bool isShowingPauseScreen() const /*override*/;

    // vIndex: 154
    virtual bool isShowingProgressScreen() const /*override*/;

    // vIndex: 155
    virtual bool isShowingWorldProgressScreen() const /*override*/;

    // vIndex: 156
    virtual bool isShowingRealmsProgressScreen() const /*override*/;

    // vIndex: 157
    virtual bool isShowingDeathScreen() const /*override*/;

    // vIndex: 158
    virtual bool isShowingServerForm() const /*override*/;

    // vIndex: 159
    virtual bool isScreenReplaceable() const /*override*/;

    // vIndex: 160
    virtual bool isInWorldAndNotShowingAnyMenuScreens() const /*override*/;

    // vIndex: 161
    virtual bool isWorldActive() const /*override*/;

    // vIndex: 162
    virtual bool isInRealm() /*override*/;

    // vIndex: 163
    virtual bool readyForShutdown() const /*override*/;

    // vIndex: 164
    virtual bool isPrimaryClient() const /*override*/;

    // vIndex: 165
    virtual bool isEduMode() const /*override*/;

    // vIndex: 166
    virtual bool isGamepadCursorEnabled() const /*override*/;

    // vIndex: 167
    virtual bool isInControlCustomization() const /*override*/;

    // vIndex: 169
    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getServerData() /*override*/;

    // vIndex: 168
    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft const> getServerData() const /*override*/;

    // vIndex: 171
    virtual ::MultiPlayerLevel* getLevel() /*override*/;

    // vIndex: 170
    virtual ::MultiPlayerLevel const* getLevel() const /*override*/;

    // vIndex: 172
    virtual bool hasLevel() const /*override*/;

    // vIndex: 173
    virtual bool isPreGame() const /*override*/;

    // vIndex: 174
    virtual bool isInMultiplayerGame() const /*override*/;

    // vIndex: 175
    virtual bool isMultiPlayerClient() const /*override*/;

    // vIndex: 177
    virtual ::IOptions& getOptions() /*override*/;

    // vIndex: 176
    virtual ::IOptions const& getOptions() const /*override*/;

    // vIndex: 179
    virtual ::std::shared_ptr<::Options> getOptionsPtr() /*override*/;

    // vIndex: 178
    virtual ::std::shared_ptr<::Options const> const getOptionsPtr() const /*override*/;

    // vIndex: 180
    virtual ::std::shared_ptr<::Social::User> const& getUser() const /*override*/;

    // vIndex: 181
    virtual ::std::shared_ptr<::ISettingsRegistry> getSettingsRegistry() /*override*/;

    // vIndex: 182
    virtual ::Option const& getShowLearningPromptsOption() const /*override*/;

    // vIndex: 183
    virtual ::Option& getShowControlTipsOption() /*override*/;

    // vIndex: 184
    virtual ::Option& getShowControlTipsOverrideOption() /*override*/;

    // vIndex: 185
    virtual double getControlTipsTimeElapsed() const /*override*/;

    // vIndex: 186
    virtual void setControlTipsTimeElapsedStart() /*override*/;

    // vIndex: 187
    virtual ::GameRenderer& getGameRenderer() const /*override*/;

    // vIndex: 188
    virtual ::LevelRenderer* getLevelRenderer() const /*override*/;

    // vIndex: 189
    virtual ::LevelRendererCameraProxy* getLevelRendererCameraProxy() const /*override*/;

    // vIndex: 191
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() /*override*/;

    // vIndex: 190
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const /*override*/;

    // vIndex: 192
    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() /*override*/;

    // vIndex: 193
    virtual ::LightTexture* getLightTexture() /*override*/;

    // vIndex: 194
    virtual void setupLevelRendering(::MultiPlayerLevel& level, ::WeakEntityRef cameraTargetEntity) /*override*/;

    // vIndex: 195
    virtual ::mce::ViewportInfo const& getViewportInfo() const /*override*/;

    // vIndex: 196
    virtual void setViewportInfo(::mce::ViewportInfo const& viewportInfo) /*override*/;

    // vIndex: 197
    virtual ::Vec2 getNormalizedViewportSize() const /*override*/;

    // vIndex: 198
    virtual void updateChunkRadius() /*override*/;

    // vIndex: 199
    virtual void setUITexture(::mce::Texture* tex) /*override*/;

    // vIndex: 200
    virtual ::mce::Texture* getUITexture() /*override*/;

    // vIndex: 201
    virtual void setLevelTexture(::mce::Texture* tex) /*override*/;

    // vIndex: 202
    virtual ::mce::Texture* getLevelTexture() /*override*/;

    // vIndex: 203
    virtual void setUICursorTexture(::mce::TexturePtr tex) /*override*/;

    // vIndex: 204
    virtual ::mce::TexturePtr getUICursorTexture() const /*override*/;

    // vIndex: 205
    virtual ::mce::Camera& getCamera() /*override*/;

    // vIndex: 206
    virtual ::ShaderColor& getShaderColor() /*override*/;

    // vIndex: 207
    virtual ::ShaderColor& getDarkShaderColor() /*override*/;

    // vIndex: 208
    virtual void clearGraphicsCache() /*override*/;

    // vIndex: 209
    virtual void
    getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef& matrix, float cursorHalfSizeTexels) /*override*/;

    // vIndex: 210
    virtual bool shouldRenderUICursor() const /*override*/;

    // vIndex: 211
    virtual bool getRenderPlayerModel() const /*override*/;

    // vIndex: 212
    virtual ::DeferredLighting& getDeferredLighting() /*override*/;

    // vIndex: 213
    virtual float getGuiScale() const /*override*/;

    // vIndex: 214
    virtual ::Option const& getGuiScaleOption() const /*override*/;

    // vIndex: 215
    virtual int getGuiScaleOffset() const /*override*/;

    // vIndex: 216
    virtual void setGuiScaleOffset(int guiScale) /*override*/;

    // vIndex: 217
    virtual void renderImGui(::ScreenContext& screenContext, bool drawMenuBar) /*override*/;

    // vIndex: 219
    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getGuiData() /*override*/;

    // vIndex: 218
    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData const> getGuiData() const /*override*/;

    // vIndex: 220
    virtual ::GuidedFlowManager& getGuidedFlowManager() /*override*/;

    // vIndex: 221
    virtual ::PixelCalc const& getDpadScale() const /*override*/;

    // vIndex: 222
    virtual ::Bedrock::NotNullNonOwnerPtr<::DateManager const> getDateManager() const /*override*/;

    // vIndex: 223
    virtual void addOverrideHoursToDateTime(uint const hoursToAdd) /*override*/;

    // vIndex: 224
    virtual ::ToastManager& getToastManager() /*override*/;

    // vIndex: 225
    virtual ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&
    getClipboardManager() /*override*/;

    // vIndex: 227
    virtual ::AbstractScene* getTopScene() /*override*/;

    // vIndex: 226
    virtual ::AbstractScene const* getTopScene() const /*override*/;

    // vIndex: 229
    virtual ::AbstractScene* getActiveScene() /*override*/;

    // vIndex: 228
    virtual ::AbstractScene const* getActiveScene() const /*override*/;

    // vIndex: 230
    virtual ::SceneFactory& getSceneFactory() const /*override*/;

    // vIndex: 231
    virtual ::OreUI::SceneProvider& getSceneProvider() const /*override*/;

    // vIndex: 233
    virtual ::ui::ScreenTechStackSelector& getScreenTechStackSelector() /*override*/;

    // vIndex: 235
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getClientSceneStack() const /*override*/;

    // vIndex: 234
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getClientSceneStack() /*override*/;

    // vIndex: 236
    virtual ::OreUI::Router& getClientUIRouter() const /*override*/;

    // vIndex: 237
    virtual ::ISceneStack& getMainSceneStackInterface() /*override*/;

    // vIndex: 239
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getMainSceneStack() /*override*/;

    // vIndex: 238
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getMainSceneStack() const /*override*/;

    // vIndex: 241
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getCurrentSceneStack() const /*override*/;

    // vIndex: 240
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getCurrentSceneStack() /*override*/;

    // vIndex: 243
    virtual ::OreUI::Router& getCurrentUIRouter() /*override*/;

    // vIndex: 242
    virtual ::OreUI::Router const& getCurrentUIRouter() const /*override*/;

    // vIndex: 244
    virtual ::OreUI::ITelemetry& getOreUITelemetry() /*override*/;

    // vIndex: 232
    virtual ::WeakRef<::OreUI::UIBlockThumbnailAtlasManager> getOreUIBlockThumbnailAtlasManager() const /*override*/;

    // vIndex: 245
    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> prepareSceneFor(
        ::ui::SceneType const                                 sceneTypeToFind,
        ::std::function<::std::shared_ptr<::AbstractScene>()> createScreenCallback
    ) /*override*/;

    // vIndex: 246
    virtual ::CachedScenes& getCachedScenes() /*override*/;

    // vIndex: 247
    virtual ::std::string getScreenName() const /*override*/;

    // vIndex: 248
    virtual ::std::string getScreenTelemetry() const /*override*/;

    // vIndex: 249
    virtual ::ui::SceneType getTopSceneType() const /*override*/;

    // vIndex: 250
    virtual ::MobEffectsLayout& getMobEffectsLayout() /*override*/;

    // vIndex: 252
    virtual ::std::string emoticonifyText(::std::string const& text) const /*override*/;

    // vIndex: 251
    virtual ::std::string emoticonifyText(::std::string const& text, bool isGameTip) /*override*/;

    // vIndex: 253
    virtual void onMobEffectsChange() /*override*/;

    // vIndex: 254
    virtual void setUISizeAndScale(int w, int h, float forcedGuiScale) /*override*/;

    // vIndex: 255
    virtual void forEachVisibleScreen(::brstd::function_ref<void(::AbstractScene&)> callback) /*override*/;

    // vIndex: 256
    virtual void forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown) /*override*/;

    // vIndex: 257
    virtual void forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const
        /*override*/;

    // vIndex: 258
    virtual bool updateSceneStack() /*override*/;

    // vIndex: 259
    virtual void forEachAlwaysAcceptInputScreen(
        ::std::function<void(::AbstractScene&)> callback,
        ::AbstractScene const*                  ignoreScreen
    ) /*override*/;

    // vIndex: 260
    virtual void forEachAlwaysAcceptInputScreenWithTop(::std::function<void(::AbstractScene&)> callback) /*override*/;

    // vIndex: 261
    virtual void showPlayerProfile(::std::string const& xuid, ::std::string const& platformId) /*override*/;

    // vIndex: 262
    virtual bool isInGameInputEnabled() const /*override*/;

    // vIndex: 263
    virtual void setInGameInputEnabled(bool isEnabled) /*override*/;

    // vIndex: 264
    virtual ::Vec2 getSafeZoneScale() const /*override*/;

    // vIndex: 265
    virtual void verifySkinApproval(
        ::std::string const&                        serverType,
        ::std::function<void(::std::string)> const& notApprovedCallback,
        ::std::function<void()> const&              approvedCallback
    ) const /*override*/;

    // vIndex: 266
    virtual ::InputMode getCurrentInputMode() const /*override*/;

    // vIndex: 267
    virtual bool isTouchGameplayAllowed() const /*override*/;

    // vIndex: 268
    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getMinecraftInput() const /*override*/;

    // vIndex: 269
    virtual ::KeyboardManager& getKeyboardManager() /*override*/;

    // vIndex: 270
    virtual void setLastPointerLocation(float x, float y, float z) /*override*/;

    // vIndex: 272
    virtual void clearTouchPointerLocations() /*override*/;

    // vIndex: 273
    virtual void clearTouchPointerLocation(int id) /*override*/;

    // vIndex: 287
    virtual void updateTouchPointerLocation(int id, float x, float y) /*override*/;

    // vIndex: 271
    virtual ::Vec3 getLastPointerLocation() /*override*/;

    // vIndex: 288
    virtual ::Vec2 getTouchPointerLocation(int id) const /*override*/;

    // vIndex: 289
    virtual void updateActionPointerId(int id) /*override*/;

    // vIndex: 290
    virtual int getActionPointerId() const /*override*/;

    // vIndex: 291
    virtual bool shouldUseLastPointerLocationOnFocusChange() /*override*/;

    // vIndex: 292
    virtual bool currentScreenShouldStealMouse() /*override*/;

    // vIndex: 293
    virtual ::BuildActionIntention& getInProgressBAI() const /*override*/;

    // vIndex: 294
    virtual ::PacketSender& getPacketSender() /*override*/;

    // vIndex: 296
    virtual ::ClientNetworkSystem& getClientNetworkSystem() /*override*/;

    // vIndex: 295
    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const /*override*/;

    // vIndex: 302
    virtual ::glm::vec2 getGamepadCursorPosition() const /*override*/;

    // vIndex: 274
    virtual void updateControlOptionState(uint id, bool active) /*override*/;

    // vIndex: 275
    virtual void clearActiveControlOptions() /*override*/;

    // vIndex: 276
    virtual ::std::set<uint> const& getActiveControlOptions() const /*override*/;

    // vIndex: 277
    virtual ::std::vector<::OptionID> getActiveOptionIDs(::ControlOptionType controlOptionType) const /*override*/;

    // vIndex: 278
    virtual void setNumberOfActiveConfigs(int numberOfActiveConfigs) /*override*/;

    // vIndex: 279
    virtual int getNumberOfActiveConfigs() const /*override*/;

    // vIndex: 280
    virtual bool isNoConfigSelected() const /*override*/;

    // vIndex: 281
    virtual void setNumberOfEnabledConfigs(int numberOfEnabledConfigs) /*override*/;

    // vIndex: 282
    virtual int getNumberOfEnabledConfigs() const /*override*/;

    // vIndex: 283
    virtual void setWYSIWYGState(::WYSIWYGState wysiwygState) /*override*/;

    // vIndex: 284
    virtual ::WYSIWYGState getWYSIWYGState() const /*override*/;

    // vIndex: 285
    virtual void setOtherConfigsExistInThisCategory(bool otherConfigsExistInThisCategory) /*override*/;

    // vIndex: 286
    virtual bool getOtherConfigsExistInThisCategory() const /*override*/;

    // vIndex: 297
    virtual void setMoveTurnInput(::std::unique_ptr<::ClientMoveInputHandler> pClientMoveInputHandler) /*override*/;

    // vIndex: 298
    virtual void setupPersistentControls(::InputMode currentMode) /*override*/;

    // vIndex: 299
    virtual void resetPlayerMovement() /*override*/;

    // vIndex: 300
    virtual void suspendPredictedMovement() /*override*/;

    // vIndex: 301
    virtual void onClientInputInitComplete() /*override*/;

    // vIndex: 303
    virtual void setClientInputHandler(::std::unique_ptr<::ClientInputHandler> pClientInputHandler) /*override*/;

    // vIndex: 304
    virtual ::ClientInputHandler* getInput() const /*override*/;

    // vIndex: 305
    virtual int getControllerId() const /*override*/;

    // vIndex: 306
    virtual bool hasConnectedController() const /*override*/;

    // vIndex: 307
    virtual ::SubClientId getClientSubId() const /*override*/;

    // vIndex: 308
    virtual void setSuspendInput(bool suspendInput) /*override*/;

    // vIndex: 309
    virtual void setSuspendDirectionalInput(bool suspendDirectionalInput) /*override*/;

    // vIndex: 310
    virtual void setDisableInput(bool disableInput) /*override*/;

    // vIndex: 311
    virtual void grabMouse() /*override*/;

    // vIndex: 312
    virtual void releaseMouse() /*override*/;

    // vIndex: 313
    virtual void refocusMouse(bool lostMouse) /*override*/;

    // vIndex: 314
    virtual void setMouseType(::ui::MousePointerType type) /*override*/;

    // vIndex: 315
    virtual void resetBai(int baiFlags) /*override*/;

    // vIndex: 316
    virtual void clearInProgressBAI() /*override*/;

    // vIndex: 317
    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> getSoundEngine() const /*override*/;

    // vIndex: 318
    virtual ::MusicManager const* getMusicManager() const /*override*/;

    // vIndex: 319
    virtual ::MusicManager* getMusicManagerNonConst() const /*override*/;

    // vIndex: 320
    virtual void play(::std::string const& name, ::Vec3 const& pos, float volume, float pitch) /*override*/;

    // vIndex: 321
    virtual void playUI(::std::string const& name, float volume, float pitch) /*override*/;

    // vIndex: 322
    virtual void muteAudio() /*override*/;

    // vIndex: 323
    virtual void unMuteAudio() /*override*/;

    // vIndex: 324
    virtual void fadeOutMusic() const /*override*/;

    // vIndex: 325
    virtual ::TaskGroup& getTaskGroup() /*override*/;

    // vIndex: 326
    virtual void onFullVanillaPackOnStack() /*override*/;

    // vIndex: 327
    virtual bool isFullVanillaPackOnStack() const /*override*/;

    // vIndex: 328
    virtual void onPlayerLoaded(::Player& player) /*override*/;

    // vIndex: 329
    virtual void setClientGameMode(::GameType gameType) /*override*/;

    // vIndex: 330
    virtual void resetToDefaultGameMode() /*override*/;

    // vIndex: 331
    virtual ::IGameConnectionListener& getGameConnectionListener() /*override*/;

    // vIndex: 332
    virtual void connectToThirdPartyServer(::std::string const& ipAddress, int port) /*override*/;

    // vIndex: 334
    virtual void startExternalNetworkWorld(
        ::Social::GameConnectionInfo connection,
        ::std::string const&         serverName,
        bool                         isTransfer
    ) /*override*/;

    // vIndex: 333
    virtual void connectToExperience(
        ::std::string const&                                              experienceId,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, bool)> joinServerCallback,
        ::std::function<void(::World::JoinServerWorldResult)>             onErrorCallback
    ) /*override*/;

    // vIndex: 335
    virtual bool isReadyToReconnect() const /*override*/;

    // vIndex: 336
    virtual bool checkForPiracy() /*override*/;

    // vIndex: 337
    virtual void updateChatFilterStatus(::ProfanityContext& profanityContext) /*override*/;

    // vIndex: 338
    virtual void updateControllerHandling() /*override*/;

    // vIndex: 3
    virtual void onPlayerDestruction(::Player& player) /*override*/;

    // vIndex: 339
    virtual void
    setBehaviorCommandCallback(::std::function<void(::std::string const&, ::BehaviorStatus)> callback) /*override*/;

    // vIndex: 340
    virtual void setBehaviorCommandStatus(::std::string const& treeName, ::BehaviorStatus status) /*override*/;

    // vIndex: 341
    virtual void setConnectGamepadScreenActive(bool active) /*override*/;

    // vIndex: 342
    virtual ::Core::PathBuffer<::std::string> requestScreenshot(::ScreenshotOptions& screenshotOptions) /*override*/;

    // vIndex: 343
    virtual ::Core::PathBuffer<::std::string>
    requestScreenshotAndCreateEncryptedChecksumFile(::ScreenshotOptions& screenshotOptions) /*override*/;

    // vIndex: 344
    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const /*override*/;

    // vIndex: 345
    virtual ::std::shared_ptr<::FileDataRequest> requestImageFromUrl(
        ::std::string const&                                                        imageUrl,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)> callback
    ) /*override*/;

    // vIndex: 386
    virtual void setActiveFileStorageArea(::std::shared_ptr<::Core::FileStorageArea> storageArea) /*override*/;

    // vIndex: 1
    virtual void onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& storageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    ) /*override*/;

    // vIndex: 2
    virtual void onLowDiskSpace(bool const bSet) /*override*/;

    // vIndex: 3
    virtual void onOutOfDiskSpace(bool const bSet) /*override*/;

    // vIndex: 4
    virtual void onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode) /*override*/;

    // vIndex: 1
    virtual void onLevelCorrupt() /*override*/;

    // vIndex: 2
    virtual void onCriticalScriptError(char const* clientDisconnectError, char const*) /*override*/;

    // vIndex: 3
    virtual void onGameModeChanged() /*override*/;

    // vIndex: 4
    virtual void onBeforeSimTick() /*override*/;

    // vIndex: 5
    virtual void onTick(int nTick, int maxTick) /*override*/;

    // vIndex: 6
    virtual void onInternetUpdate() /*override*/;

    // vIndex: 7
    virtual void onGameSessionReset() /*override*/;

    // vIndex: 8
    virtual void onLevelExit() /*override*/;

    // vIndex: 9
    virtual void onRequestResourceReload() /*override*/;

    // vIndex: 10
    virtual void updateScreens() /*override*/;

    // vIndex: 346
    virtual void initializeRenderResources() /*override*/;

    // vIndex: 347
    virtual void postInitRenderResources() /*override*/;

    // vIndex: 348
    virtual void onAppSuspended() /*override*/;

    // vIndex: 349
    virtual void onAppSuspensionDisconnect() /*override*/;

    // vIndex: 350
    virtual void onAppResumed() /*override*/;

    // vIndex: 351
    virtual void onActiveResourcePacksChanged(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& entityResourceDefGroup
    ) /*override*/;

    // vIndex: 352
    virtual void reloadEntityRenderers(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& actorResourceDefinitionGroup
    ) /*override*/;

    // vIndex: 353
    virtual ::BlockTessellator& getBlockTessellator() /*override*/;

    // vIndex: 354
    virtual ::BlockActorRenderDispatcher& getBlockEntityRenderDispatcher() /*override*/;

    // vIndex: 355
    virtual ::std::shared_ptr<::ActorRenderDispatcher> getEntityRenderDispatcher() /*override*/;

    // vIndex: 356
    virtual ::ActorBlockRenderer& getEntityBlockRenderer() /*override*/;

    // vIndex: 357
    virtual ::ItemInHandRenderer* getItemInHandRenderer() /*override*/;

    // vIndex: 358
    virtual ::ItemRenderer* getItemRenderer() /*override*/;

    // vIndex: 359
    virtual ::HudIconActorRenderer* getHudIconActorRenderer() /*override*/;

    // vIndex: 360
    virtual ::std::deque<::std::string>& getSentMessageHistory() /*override*/;

    // vIndex: 361
    virtual ::std::deque<::std::string>& getDevConsoleMessageHistory() /*override*/;

    // vIndex: 362
    virtual ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> getProfanityContext() const /*override*/;

    // vIndex: 363
    virtual void initTTSClient(::std::shared_ptr<::TextToSpeechClient> textToSpeechClient) /*override*/;

    // vIndex: 365
    virtual ::std::shared_ptr<::TextToSpeechClient> getTTSClient() /*override*/;

    // vIndex: 364
    virtual ::std::shared_ptr<::TextToSpeechClient const> getTTSClient() const /*override*/;

    // vIndex: 366
    virtual ::std::shared_ptr<::ITTSEventManager> getTTSEventManager() /*override*/;

    // vIndex: 367
    virtual void addTTSMessage(
        ::std::string const&     message,
        ::ProfanityFilterContext profanityFilterContext,
        bool                     interruptible,
        ::std::string const&     interruptibleId,
        bool                     required,
        bool                     disregardAppFocus
    ) /*override*/;

    // vIndex: 368
    virtual void initCommands() /*override*/;

    // vIndex: 369
    virtual uint getUserId() const /*override*/;

    // vIndex: 370
    virtual bool isPrimaryUser() const /*override*/;

    // vIndex: 371
    virtual double getServerConnectionTime() const /*override*/;

    // vIndex: 372
    virtual void setServerPingTime(int pingTime) /*override*/;

    // vIndex: 373
    virtual int getServerPingTime() const /*override*/;

    // vIndex: 374
    virtual void setDefaultPlayscreenTab(::PlayScreenDefaultTab defaultTab) /*override*/;

    // vIndex: 375
    virtual void setClientInstanceState(::ClientInstanceState const& newstate) /*override*/;

    // vIndex: 376
    virtual void setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<::UIEventCoordinator>&& coordinator) /*override*/;

    // vIndex: 377
    virtual ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> getUIEventCoordinator() /*override*/;

    // vIndex: 378
    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> getEventCoordinator() /*override*/;

    // vIndex: 379
    virtual ::ClientNetworkEventCoordinator& getClientNetworkEventCoordinator() /*override*/;

    // vIndex: 380
    virtual ::ClientScriptEventCoordinator& getClientScriptEventCoordinator() /*override*/;

    // vIndex: 381
    virtual ::std::chrono::steady_clock::time_point getNoBlockBreakUntil() /*override*/;

    // vIndex: 382
    virtual void setNoBlockBreakUntil(::std::chrono::steady_clock::time_point timePoint) /*override*/;

    // vIndex: 385
    virtual ::GameCallbacks& getGameCallbacks() /*override*/;

    // vIndex: 383
    virtual ::GameModuleClient* getGameModule() /*override*/;

    // vIndex: 384
    virtual ::ClientHitDetectCoordinator& getHitEventCoordinator() /*override*/;

    // vIndex: 387
    virtual void sendClientEnteredLevel() /*override*/;

    // vIndex: 388
    virtual ::HitDetectSystem* getHitDetectSystem() /*override*/;

    // vIndex: 389
    virtual bool isPlaying() const /*override*/;

    // vIndex: 390
    virtual ::ClientInstanceState getClientInstanceState() const /*override*/;

    // vIndex: 391
    virtual ::LatencyGraphDisplay* getLatencyGraphDisplay() const /*override*/;

    // vIndex: 392
    virtual ::PlayerCapabilities::IClientController const& getClientCapabilities() const /*override*/;

    // vIndex: 393
    virtual ::cg::math::Rect<float>
    calculateViewPortModifiers(::SubClientId const, uint64 const, ::SplitScreenDirection const) const /*override*/;

    // vIndex: 394
    virtual ::std::weak_ptr<::IClientInstance> getWeakPtrToThis() /*override*/;

    // vIndex: 395
    virtual ::ClientRequirementVerifier const& getClientRequirementVerifier() const /*override*/;

    // vIndex: 397
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> getFogDefinitionRegistry() const /*override*/;

    // vIndex: 396
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry> getFogDefinitionRegistry() /*override*/;

    // vIndex: 399
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager const> getFogManager() const /*override*/;

    // vIndex: 398
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager> getFogManager() /*override*/;

    // vIndex: 400
    virtual ::Bedrock::NotNullNonOwnerPtr<::ScreenLoadTimeTracker> getScreenLoadTimeTracker() /*override*/;

    // vIndex: 401
    virtual ::ItemRegistryRef getItemRegistry() const /*override*/;

    // vIndex: 402
    virtual ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> getDisconnectionRequestHandler() const
        /*override*/;

    // vIndex: 403
    virtual float getRemoteServerTimeMs() const /*override*/;

    // vIndex: 404
    virtual void setRemoteServerTimeMs(float time) /*override*/;

    // vIndex: 405
    virtual float getRemoteServerNetworkTimeMs() const /*override*/;

    // vIndex: 406
    virtual void setRemoteServerNetworkTimeMs(float time) /*override*/;

    // vIndex: 407
    virtual ::Bedrock::NonOwnerPointer<::ClientScriptManager> getClientScriptManager() /*override*/;

    // vIndex: 408
    virtual ::Scripting::ScriptEngine* getScriptingEngine() /*override*/;

    // vIndex: 409
    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const /*override*/;

    // vIndex: 410
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler> getPlayerReportHandler() /*override*/;

    // vIndex: 425
    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() /*override*/;

    // vIndex: 411
    virtual void flagDisconnectionAndNotify(::Connection::DisconnectFailReason disconnectReason) /*override*/;

    // vIndex: 412
    virtual void flagDisconnectionAndNotifyWithParams(::DisconnectionScreenParams const& params) /*override*/;

    // vIndex: 413
    virtual void disconnectSubClient(::Connection::DisconnectFailReason disconnectReason) /*override*/;

    // vIndex: 414
    virtual void setClientUpdateAndRenderThrottling(bool enabled, int threshold, float scalar) /*override*/;

    // vIndex: 415
    virtual bool isClientUpdateAndRenderThrottlingEnabled() const /*override*/;

    // vIndex: 416
    virtual int getClientUpdateAndRenderThrottlingThreshold() const /*override*/;

    // vIndex: 417
    virtual float getClientUpdateAndRenderThrottlingScalar() const /*override*/;

    // vIndex: 418
    virtual bool isUserBanned() const /*override*/;

    // vIndex: 420
    virtual bool isEligibleForPauseFeature() const /*override*/;

    // vIndex: 419
    virtual void setupPauseManagers() /*override*/;

    // vIndex: 421
    virtual bool requestInGamePause(bool status) /*override*/;

    // vIndex: 422
    virtual void openContentLogHistory() /*override*/;

    // vIndex: 423
    virtual double getGameUpdateDurationInSeconds() const /*override*/;

    // vIndex: 424
    virtual ::std::optional<::PlayerJoinWorldTelemetryInfo> getPlayerJoinWorldTelemetryInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientInstance(
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

    MCNAPI ::DisconnectionErrorDetails _createDisconnectionErrorDetails(::Connection::DisconnectionStage paramStage);

    MCNAPI ::std::unique_ptr<::LegacyClientNetworkHandler> _createNetworkHandler(
        ::PlayerAuthenticationType authType,
        ::LegacyMultiplayerToken&& token,
        ::RawGameServerToken&&     newToken
    );

    MCNAPI void _createSkinRepositoryClientInterface();

    MCNAPI void _finishDestroyingGame();

    MCNAPI ::Bedrock::Threading::Async<::std::pair<::LegacyMultiplayerToken, ::RawGameServerToken>>
    _getGlobalTokens(::PlayerAuthentication& playerAuthToUse);

    MCNAPI bool _getIsConnectedToApplicationLayer() const;

    MCNAPI void _handleDisconnectionScreenRequests();

    MCNAPI void _handlePossibleControllerDisconnect(bool isInitFinished);

    MCNAPI void _initSceneStack();

    MCNAPI bool _isEditorModeOrInEditorWorld() const;

    MCNAPI bool _isInEditorTestWorld() const;

    MCNAPI bool _isShowingScreen(::std::string_view screenName) const;

    MCNAPI ::std::optional<bool> _isUsingTurn() const;

    MCNAPI void
    _joinWorldInProgressSubclient(::std::optional<::PlayerJoinWorldTelemetryInfo> primaryClientJoinWorldInfo);

    MCNAPI void
    _leaveGameOnUnrecoverableError(::std::string const& displayMessage, ::std::string const& telemetryMessage);

    MCNAPI void _navigateToSDLCharacterCreatorOffer(::std::string const& productId);

    MCNAPI void _notifyTelemetryClientCanceledJoinAttempt();

    MCNAPI void _notifyTelemetryClientStartedJoinAttempt();

    MCNAPI void _notifyTelemetryClientSuccessfullyEnteredWorld();

    MCNAPI void _notifyTelemetryOfFlaggedDisconnect(
        ::Connection::DisconnectFailReason failReason,
        ::std::string const&               titleMessage,
        ::std::string const&               errorMessage,
        ::std::string const&               codeword
    );

    MCNAPI void _perspectiveOptionChanged(::Option const&);

    MCNAPI void _requestLeaveGameImpl(bool switchScreen, bool sync);

    MCNAPI void _startDestroyingGame();

    MCNAPI void _startLeaveGame();

    MCNAPI void _startWorldPrimaryClient(
        ::PlayerAuthenticationType authType,
        ::LegacyMultiplayerToken&& token,
        ::RawGameServerToken&&     newToken
    );

    MCNAPI void _startWorldSubClient(
        ::PlayerAuthenticationType authType,
        ::LegacyMultiplayerToken&& token,
        ::RawGameServerToken&&     newToken
    );

    MCNAPI void
    _tickBuildAction(::HitResult const& solidHitResult_, ::HitResult const& liquidHitResult_, bool advanceTime);

    MCNAPI void _updateScreenSizeVariables(::Vec2 const& totalScreenSize, ::Vec2 const& safeZone, float forcedGuiScale);

    MCNAPI void fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode);

    MCNAPI void flagDisconnectionAndNotifyWithTarget(
        ::DisconnectionScreenParams const& params,
        ::Connection::UIReturnTarget       uiReturnTarget
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool tickDestroyBlock(::ClientInstance::ClientDestroyBlockState& state, bool advanceTime);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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

    MCNAPI bool $update(bool isInWorld);

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
