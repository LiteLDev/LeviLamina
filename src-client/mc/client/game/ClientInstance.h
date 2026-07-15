#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/ClientGameSetupResult.h"
#include "mc/client/game/ClientInstanceState.h"
#include "mc/client/game/ControlOptionType.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/InventoryTabIndex.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/store/StoreErrorCodes.h"
#include "mc/client/util/ClipboardProxy.h"
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
#include "mc/deps/input/PointerType.h"
#include "mc/deps/input/enums/WYSIWYGState.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/events/NetworkType.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/GameCallbacks.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/player/PlayerListener.h"
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
class ClientLevel;
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
class IMinecraftEventing;
class IMinecraftGame;
class IOptionRegistry;
class IReadWriteOptions;
class IResourcePackRepository;
class ISceneStack;
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
class MusicManager;
class Option;
class OptionRegistry;
class PackManifestFactory;
class PacketSender;
class PersonaClient;
class PersonaRepository;
class PixelCalc;
class Player;
class PlayerAuthentication;
class PlayerReportHandler;
class ProfanityContext;
class ResourcePackManager;
class SceneFactory;
class ScreenContext;
class ScreenLoadTimeTracker;
class ShaderColor;
class SkinRepository;
class SoundEngine;
class StoreCatalogItem;
class StoreCatalogRepository;
class TaskGroup;
class TextToSpeechClient;
class ToastManager;
class TrialManager;
class UIEventCoordinator;
class Vec2;
class Vec3;
class WeakEntityRef;
class WorldTransferAgent;
struct ActorUniqueID;
struct ClientInstanceArguments;
struct ClientInstanceInitArguments;
struct ConnectionContextInfo;
struct DisconnectionScreenParams;
struct ListenerState;
struct LocalPlayerChangedConnector;
struct PacksInfoData;
struct PlayerJoinWorldContext;
struct ScreenshotOptions;
struct ServerSupportedAuthenticationTypes;
struct SplitScreenInfo;
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Automation { class AutomationClient; }
namespace Bedrock::Http { class Status; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Editor { class IEditorManager; }
namespace Editor { class IEditorPlayer; }
namespace OreUI { class ITelemetry; }
namespace OreUI { class Router; }
namespace OreUI { class SceneProvider; }
namespace OreUI { class UIBlockThumbnailAtlasManager; }
namespace PlayerCapabilities { struct IClientController; }
namespace Realms { struct World; }
namespace Scripting { class ScriptEngine; }
namespace Settings { class IRegistry; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class User; }
namespace World { class WorldSystem; }
namespace mce { class Camera; }
namespace mce { class Texture; }
namespace mce { class TextureGroup; }
namespace mce { struct ViewportInfo; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class ClientInstance : public ::IClientInstance,
                       public ::Core::StorageAreaStateListener,
                       public ::GameCallbacks,
                       public ::PlayerListener,
                       public ::std::enable_shared_from_this<::ClientInstance> {
public:
    // ClientInstance inner types declare
    // clang-format off
    struct ClientRenderResources;
    struct ClientDestroyBlockState;
    struct mBehaviorCommandStatusCallback;
    struct mCreditsCallback;
    // clang-format on

    // ClientInstance inner types define
    struct ClientRenderResources {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::mce::Texture*>    mUITexture;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mUICursorTexture;
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
    };

    struct mBehaviorCommandStatusCallback {};

    struct mCreditsCallback {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkeb8701;
    ::ll::UntypedStorage<8, 64>  mUnkab1ca4;
    ::ll::UntypedStorage<8, 64>  mUnk2c0603;
    ::ll::UntypedStorage<8, 64>  mUnk53ac0e;
    ::ll::UntypedStorage<8, 24>  mUnk4f1aef;
    ::ll::UntypedStorage<8, 8>   mUnk9379d1;
    ::ll::UntypedStorage<8, 24>  mUnk421768;
    ::ll::UntypedStorage<8, 8>   mUnke2a76f;
    ::ll::UntypedStorage<8, 8>   mUnka26806;
    ::ll::UntypedStorage<1, 1>   mUnk13fce4;
    ::ll::UntypedStorage<8, 8>   mUnk5125ae;
    ::ll::UntypedStorage<8, 8>   mUnked6a44;
    ::ll::UntypedStorage<8, 8>   mUnk415024;
    ::ll::UntypedStorage<8, 8>   mUnk9cdb03;
    ::ll::UntypedStorage<8, 8>   mUnk93a1c9;
    ::ll::UntypedStorage<8, 8>   mUnk5a4d7d;
    ::ll::UntypedStorage<8, 8>   mUnka653a9;
    ::ll::UntypedStorage<8, 16>  mUnk3a3d21;
    ::ll::UntypedStorage<8, 8>   mUnkb0301c;
    ::ll::UntypedStorage<8, 8>   mUnk4fe84c;
    ::ll::UntypedStorage<8, 24>  mUnk10018d;
    ::ll::UntypedStorage<8, 24>  mUnk6d935d;
    ::ll::UntypedStorage<8, 24>  mUnk9bcffe;
    ::ll::UntypedStorage<8, 48>  mUnk586e60;
    ::ll::UntypedStorage<8, 8>   mUnkc8308f;
    ::ll::UntypedStorage<4, 4>   mUnkfbfba1;
    ::ll::UntypedStorage<1, 1>   mUnkd6f5bb;
    ::ll::UntypedStorage<1, 1>   mUnkc69553;
    ::ll::UntypedStorage<1, 1>   mUnk20b577;
    ::ll::UntypedStorage<1, 1>   mUnka7e48d;
    ::ll::UntypedStorage<4, 4>   mUnk9e92ce;
    ::ll::UntypedStorage<8, 32>  mUnk6638d4;
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
    ::ll::UntypedStorage<8, 8>   mUnk7ebe5b;
    ::ll::UntypedStorage<8, 8>   mUnk5e5288;
    ::ll::UntypedStorage<8, 8>   mUnkdd7dc7;
    ::ll::UntypedStorage<8, 16>  mUnkdb25a3;
    ::ll::UntypedStorage<8, 16>  mUnked2a78;
    ::ll::UntypedStorage<8, 8>   mUnk213553;
    ::ll::UntypedStorage<8, 8>   mUnkcb57e4;
    ::ll::UntypedStorage<8, 8>   mUnkfc8a9f;
    ::ll::UntypedStorage<8, 16>  mUnkb79e26;
    ::ll::UntypedStorage<8, 8>   mUnk3baa74;
    ::ll::UntypedStorage<8, 8>   mUnkc7931f;
    ::ll::UntypedStorage<8, 8>   mUnkdf551f;
    ::ll::UntypedStorage<8, 8>   mUnk60be02;
    ::ll::UntypedStorage<8, 8>   mUnk94c5d6;
    ::ll::UntypedStorage<8, 8>   mUnk53fa4f;
    ::ll::UntypedStorage<8, 8>   mUnkb410ae;
    ::ll::UntypedStorage<8, 16>  mUnk5da2d9;
    ::ll::UntypedStorage<1, 1>   mUnkfa0970;
    ::ll::UntypedStorage<8, 8>   mUnk291bf9;
    ::ll::UntypedStorage<8, 8>   mUnkaebffe;
    ::ll::UntypedStorage<8, 8>   mUnkc613e5;
    ::ll::UntypedStorage<8, 8>   mUnkf955c2;
    ::ll::UntypedStorage<1, 1>   mUnk563a7c;
    ::ll::UntypedStorage<8, 8>   mUnk8320a2;
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
    ::ll::UntypedStorage<8, 528> mUnk58b85f;
    ::ll::UntypedStorage<1, 1>   mUnk1ef4d7;
    ::ll::UntypedStorage<1, 1>   mUnk29fbcb;
    ::ll::UntypedStorage<4, 4>   mUnkc07c6b;
    ::ll::UntypedStorage<1, 1>   mUnk923860;
    ::ll::UntypedStorage<8, 8>   mUnk108e78;
    ::ll::UntypedStorage<4, 4>   mUnk7d3d83;
    ::ll::UntypedStorage<8, 40>  mUnk4bd629;
    ::ll::UntypedStorage<8, 40>  mUnk8195f7;
    ::ll::UntypedStorage<8, 16>  mUnkcf1108;
    ::ll::UntypedStorage<8, 64>  mUnk7c17c7;
    ::ll::UntypedStorage<8, 16>  mUnk1e3691;
    ::ll::UntypedStorage<8, 8>   mUnk28391d;
    ::ll::UntypedStorage<8, 8>   mUnkb7e3c5;
    ::ll::UntypedStorage<8, 8>   mUnk73a2b8;
    ::ll::UntypedStorage<8, 8>   mUnkbefb0a;
    ::ll::UntypedStorage<8, 8>   mUnkf76b2d;
    ::ll::UntypedStorage<8, 16>  mUnkf8f09a;
    ::ll::UntypedStorage<4, 8>   mUnk973753;
    ::ll::UntypedStorage<4, 8>   mUnk600c92;
    ::ll::UntypedStorage<4, 4>   mUnk737de1;
    ::ll::UntypedStorage<8, 8>   mUnk6aa9fd;
    ::ll::UntypedStorage<8, 8>   mUnk8a8a63;
    ::ll::UntypedStorage<8, 24>  mUnk5c4c80;
    ::ll::UntypedStorage<8, 8>   mUnkd7ca73;
    ::ll::UntypedStorage<8, 16>  mUnk52193b;
    ::ll::UntypedStorage<8, 8>   mUnkc4e9e8;
    ::ll::UntypedStorage<8, 8>   mUnk82a9fa;
    ::ll::UntypedStorage<8, 8>   mUnk8ca999;
    ::ll::UntypedStorage<8, 24>  mUnk7ffd34;
    ::ll::UntypedStorage<8, 16>  mUnk99ef24;
    ::ll::UntypedStorage<8, 16>  mUnk6182e1;
    ::ll::UntypedStorage<8, 8>   mUnk84dba0;
    ::ll::UntypedStorage<8, 8>   mUnk9ffd30;
    ::ll::UntypedStorage<8, 256> mUnkfbb9ff;
    ::ll::UntypedStorage<8, 8>   mUnkf8bdff;
    ::ll::UntypedStorage<8, 24>  mUnkfbc948;
    ::ll::UntypedStorage<8, 24>  mUnk1e1098;
    ::ll::UntypedStorage<8, 24>  mUnk51c002;
    ::ll::UntypedStorage<1, 1>   mUnkc75c08;
    ::ll::UntypedStorage<4, 4>   mUnkcef468;
    ::ll::UntypedStorage<4, 4>   mUnk573d1d;
    ::ll::UntypedStorage<8, 16>  mUnkdc75f9;
    ::ll::UntypedStorage<8, 80>  mUnk3892fa;
    ::ll::UntypedStorage<8, 16>  mUnka5c62e;
    ::ll::UntypedStorage<8, 16>  mUnkd93a4c;
    ::ll::UntypedStorage<8, 8>   mUnkdfdcca;
    ::ll::UntypedStorage<8, 24>  mUnk7433ce;
    ::ll::UntypedStorage<8, 8>   mUnk4efc95;
    ::ll::UntypedStorage<8, 16>  mUnkc2c7c8;
    ::ll::UntypedStorage<8, 16>  mUnk6335eb;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstance& operator=(ClientInstance const&);
    ClientInstance(ClientInstance const&);
    ClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstance() /*override*/ = default;

    virtual void onInitMinecraftGame() /*override*/;

    virtual void onDestroyMinecraftGame() /*override*/;

    virtual void init(::ClientInstanceInitArguments&&) /*override*/;

    virtual void
        initSceneFactory(::std::unique_ptr<::SceneFactory>, ::std::unique_ptr<::OreUI::SceneProvider>) /*override*/;

    virtual void setUiRouter(::std::unique_ptr<::OreUI::Router>) /*override*/;

    virtual void initGraphics() /*override*/;

    virtual void stop() /*override*/;

    virtual void teardown() /*override*/;

    virtual void preShutDown() /*override*/;

    virtual void setGameConnectionInfo(::Social::GameConnectionInfo const&) /*override*/;

    virtual ::std::optional<::Social::GameConnectionInfo> getGameConnectionInfo() /*override*/;

    virtual void onStartJoinGame(
        bool,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::NetworkType,
        ::Social::MultiplayerServiceIdentifier,
        ::PlayerJoinWorldContext
    ) /*override*/;

    virtual void onCancelJoinGame() /*override*/;

    virtual void requestLeaveGameAsync() /*override*/;

    virtual void requestLeaveGame(bool, bool) /*override*/;

    virtual void stopPlayScreen() /*override*/;

    virtual bool isLeaveGameDone() const /*override*/;

    virtual void setupPlayScreenForLeaveGame() /*override*/;

    virtual void preCacheOutOfGameViews() /*override*/;

    virtual void resetPrimaryClient() /*override*/;

    virtual void resetGameSession() /*override*/;

    virtual void tick() /*override*/;

    virtual void frameUpdate(::FrameUpdateContext&) /*override*/;

    virtual void preFrameTick() /*override*/;

    virtual bool update(bool) /*override*/;

    virtual void endFrame() /*override*/;

    virtual float getFrameAlpha() /*override*/;

    virtual void startSubClientLateJoin(
        bool,
        ::std::unique_ptr<::GameModuleClient>,
        ::std::optional<::ConnectionContextInfo>
    ) /*override*/;

    virtual ::Bedrock::Threading::Async<::ClientGameSetupResult>
    setupClientGame(bool, ::ServerSupportedAuthenticationTypes, ::std::unique_ptr<::GameModuleClient>) /*override*/;

    virtual ::BlockSource* getRegion() /*override*/;

    virtual ::LocalPlayer* getLocalPlayer() const /*override*/;

    virtual void setupPrimaryClientEditorManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getLocalEditorPlayer() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> getEditorManager() const /*override*/;

    virtual bool isPlayerInEditor() const /*override*/;

    virtual ::LocalPlayerChangedConnector getLocalPlayerChangedConnector() /*override*/;

    virtual ::WeakEntityRef getLocalUser() const /*override*/;

    virtual ::Actor* getCameraActor() const /*override*/;

    virtual void setCameraActor(::Actor*) /*override*/;

    virtual ::ListenerState const* getListenerState() const /*override*/;

    virtual ::Actor* getCameraTargetActor() const /*override*/;

    virtual void setCameraTargetActor(::Actor*) /*override*/;

    virtual ::WeakEntityRef getCameraEntity() const /*override*/;

    virtual void getRawCameraEntities(::WeakEntityRef&, ::WeakEntityRef&) const /*override*/;

    virtual void setRawCameraEntities(::WeakEntityRef, ::WeakEntityRef) /*override*/;

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

    virtual bool isLocalSplitscreenWith(::ActorUniqueID const&) const /*override*/;

    virtual bool isValidCrossPlatformSkin() const /*override*/;

    virtual bool isCurrentSkinPlatformLocked() const /*override*/;

    virtual bool isSelectedSkinInitialized() const /*override*/;

    virtual ::SplitScreenInfo getSplitScreenInfo() const /*override*/;

    virtual bool getHandlingControllerDisconnect() /*override*/;

    virtual void setOpenControllerDisconnectScreen(bool) /*override*/;

    virtual ::ClientPlayMode getClientPlayMode() const /*override*/;

    virtual void setClientPlayMode(::ClientPlayMode const&) /*override*/;

    virtual ::std::function<void()> getCreditsCallback() /*override*/;

    virtual void setCreditsCallback(::std::function<void()>) /*override*/;

    virtual void setupTransitionForCredits(::std::function<void()>) /*override*/;

    virtual void refreshScreenSizeData() /*override*/;

    virtual void onScreenSizeChanged(int, int, float) /*override*/;

    virtual void onGuiScaleOffsetChanged() /*override*/;

    virtual void onSafeZoneChanged() /*override*/;

    virtual bool hasDismissedNewPlayerFlow() const /*override*/;

    virtual void quit(::std::string const&, ::std::string const&) /*override*/;

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

    virtual ::PersonaClient& getPersonaClient() const /*override*/;

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

    virtual void linkToOffer(::std::string const&, bool) /*override*/;

    virtual void linkToPage(::std::string const&) /*override*/;

    virtual void linkTo3PServerOffers(::std::string const&, ::std::string const&) /*override*/;

    virtual void navigateToMarketplaceInventoryScreen(::InventoryTabIndex) /*override*/;

    virtual void navigateToStoreHomeScreen() /*override*/;

    virtual void navigateToCoinPurchaseScreen(int, ::std::function<void(bool, int)>) /*override*/;

    virtual void navigateToPurchaseOfferScreen(::StoreCatalogItem&, ::StoreNavigationOrigin, bool const) /*override*/;

    virtual void navigateToDressingRoomOfferScreen(::std::string const&) /*override*/;

    virtual bool navigateToProfileScreen(::std::string const&, bool const) /*override*/;

    virtual void navigateToServersScreen(bool const) /*override*/;

    virtual void navigateToHowToPlayScreen(::std::string const&) /*override*/;

    virtual void navigateToGatheringInfoScreen(bool) /*override*/;

    virtual void navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex) /*override*/;

    virtual void navigateToRealmsStoriesTransitionScreen(::Realms::World const&) /*override*/;

    virtual void tryPushLeaveGameScreen() /*override*/;

    virtual void tryStartDayOneExperience() /*override*/;

    virtual bool isReadyToRender() const /*override*/;

    virtual void onDimensionChangedEvent() /*override*/;

    virtual void onGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual ::std::string getTopScreenName() const /*override*/;

    virtual void setLeaveGameInProgressAsReadyToContinue() /*override*/;

    virtual void stopDestroying() /*override*/;

    virtual void onClientCreatedLevel(
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>>,
        ::OwnerPtr<::EntityContext>
    ) /*override*/;

    virtual ::PlayerAuthentication& getPlayerAuthentication() /*override*/;

    virtual void createPlayerAuthentication() /*override*/;

    virtual void createPlayerAuthentication(uint64) /*override*/;

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

    virtual ::ClientLevel* getLevel() /*override*/;

    virtual ::ClientLevel const* getLevel() const /*override*/;

    virtual bool hasLevel() const /*override*/;

    virtual bool isPreGame() const /*override*/;

    virtual bool isInMultiplayerGame() const /*override*/;

    virtual bool isMultiPlayerClient() const /*override*/;

    virtual ::IOptionRegistry& getOptions() /*override*/;

    virtual ::IOptionRegistry const& getOptions() const /*override*/;

    virtual ::IReadWriteOptions const& getReadWriteOptions() const /*override*/;

    virtual ::std::shared_ptr<::OptionRegistry> getOptionsPtr() /*override*/;

    virtual ::std::shared_ptr<::OptionRegistry const> const getOptionsPtr() const /*override*/;

    virtual ::std::shared_ptr<::Social::User> const& getUser() const /*override*/;

    virtual ::std::shared_ptr<::Settings::IRegistry> getSettingsRegistry() /*override*/;

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

    virtual void setupLevelRendering(::ClientLevel&, ::WeakEntityRef) /*override*/;

    virtual ::mce::ViewportInfo const& getViewportInfo() const /*override*/;

    virtual void setViewportInfo(::mce::ViewportInfo const&) /*override*/;

    virtual ::Vec2 getNormalizedViewportSize() const /*override*/;

    virtual void updateChunkRadius() /*override*/;

    virtual void setUITexture(::mce::Texture*) /*override*/;

    virtual ::mce::Texture* getUITexture() /*override*/;

    virtual void setLevelTexture(::mce::Texture*) /*override*/;

    virtual ::mce::Texture* getLevelTexture() /*override*/;

    virtual void setUICursorTexture(::mce::TexturePtr) /*override*/;

    virtual ::mce::TexturePtr getUICursorTexture() const /*override*/;

    virtual ::mce::Camera& getCamera() /*override*/;

    virtual ::ShaderColor& getShaderColor() /*override*/;

    virtual ::ShaderColor& getDarkShaderColor() /*override*/;

    virtual void clearGraphicsCache() /*override*/;

    virtual void getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef&, float) /*override*/;

    virtual bool shouldRenderUICursor() const /*override*/;

    virtual bool getRenderPlayerModel() const /*override*/;

    virtual ::DeferredLighting& getDeferredLighting() /*override*/;

    virtual float getGuiScale() const /*override*/;

    virtual ::Option const& getGuiScaleOption() const /*override*/;

    virtual int getGuiScaleOffset() const /*override*/;

    virtual void setGuiScaleOffset(int) /*override*/;

    virtual void renderImGui(::ScreenContext&, bool) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getGuiData() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData const> getGuiData() const /*override*/;

    virtual ::GuidedFlowManager& getGuidedFlowManager() /*override*/;

    virtual ::PixelCalc const& getDpadScale() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DateManager const> getDateManager() const /*override*/;

    virtual void addOverrideHoursToDateTime(uint const) /*override*/;

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

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>
    prepareSceneFor(::ui::SceneType const, ::std::function<::std::shared_ptr<::AbstractScene>()>) /*override*/;

    virtual ::CachedScenes& getCachedScenes() /*override*/;

    virtual ::std::string getScreenName() const /*override*/;

    virtual ::std::string getScreenTelemetry() const /*override*/;

    virtual ::ui::SceneType getTopSceneType() const /*override*/;

    virtual ::MobEffectsLayout& getMobEffectsLayout() /*override*/;

    virtual ::std::string emoticonifyText(::std::string const&) const /*override*/;

    virtual ::std::string emoticonifyText(::std::string const&, bool) /*override*/;

    virtual void onMobEffectsChange() /*override*/;

    virtual void setUISizeAndScale(int, int, float) /*override*/;

    virtual void forEachVisibleScreen(::brstd::function_ref<void(::AbstractScene&)>) /*override*/;

    virtual void forEachScreen(::brstd::function_ref<bool(::AbstractScene&)>, bool) /*override*/;

    virtual void forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)>, bool) const /*override*/;

    virtual bool updateSceneStack() /*override*/;

    virtual void
    forEachAlwaysAcceptInputScreen(::std::function<void(::AbstractScene&)>, ::AbstractScene const*) /*override*/;

    virtual void forEachAlwaysAcceptInputScreenWithTop(::std::function<void(::AbstractScene&)>) /*override*/;

    virtual void showPlayerProfile(::std::string const&, ::std::string const&) /*override*/;

    virtual bool isInGameInputEnabled() const /*override*/;

    virtual void setInGameInputEnabled(bool) /*override*/;

    virtual ::Vec2 getSafeZoneScale() const /*override*/;

    virtual void verifySkinApproval(::std::function<void(::std::string)> const&, ::std::function<void()> const&) const
        /*override*/;

    virtual ::InputMode getCurrentInputMode() const /*override*/;

    virtual bool isTouchGameplayAllowed() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getMinecraftInput() const /*override*/;

    virtual ::KeyboardManager& getKeyboardManager() /*override*/;

    virtual void setLastPointerLocation(float, float, float) /*override*/;

    virtual void clearTouchPointerLocations() /*override*/;

    virtual void clearTouchPointerLocation(int) /*override*/;

    virtual void updateTouchPointerLocation(int, float, float) /*override*/;

    virtual ::Vec3 getLastPointerLocation() /*override*/;

    virtual ::Vec2 getTouchPointerLocation(int) const /*override*/;

    virtual void updateActionPointerId(int) /*override*/;

    virtual int getActionPointerId() const /*override*/;

    virtual bool shouldUseLastPointerLocationOnFocusChange() /*override*/;

    virtual bool currentScreenShouldStealMouse() /*override*/;

    virtual ::BuildActionIntention& getInProgressBAI() const /*override*/;

    virtual ::PacketSender& getPacketSender() /*override*/;

    virtual ::ClientNetworkSystem& getClientNetworkSystem() /*override*/;

    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const /*override*/;

    virtual ::glm::vec2 getGamepadCursorPosition() const /*override*/;

    virtual void updateControlOptionState(uint, bool) /*override*/;

    virtual void clearActiveControlOptions() /*override*/;

    virtual ::std::set<uint> const& getActiveControlOptions() const /*override*/;

    virtual ::std::vector<::OptionID> getActiveOptionIDs(::ControlOptionType) const /*override*/;

    virtual void setNumberOfActiveConfigs(int) /*override*/;

    virtual int getNumberOfActiveConfigs() const /*override*/;

    virtual bool isNoConfigSelected() const /*override*/;

    virtual void setNumberOfEnabledConfigs(int) /*override*/;

    virtual int getNumberOfEnabledConfigs() const /*override*/;

    virtual void setWYSIWYGState(::WYSIWYGState) /*override*/;

    virtual ::WYSIWYGState getWYSIWYGState() const /*override*/;

    virtual void setOtherConfigsExistInThisCategory(bool) /*override*/;

    virtual bool getOtherConfigsExistInThisCategory() const /*override*/;

    virtual void setMoveTurnInput(::std::unique_ptr<::ClientMoveInputHandler>) /*override*/;

    virtual void setupPersistentControls(::InputMode) /*override*/;

    virtual void resetPlayerMovement() /*override*/;

    virtual void suspendPredictedMovement() /*override*/;

    virtual void onClientInputInitComplete() /*override*/;

    virtual void setClientInputHandler(::std::unique_ptr<::ClientInputHandler>) /*override*/;

    virtual ::ClientInputHandler* getInput() const /*override*/;

    virtual int getControllerId() const /*override*/;

    virtual bool hasConnectedController() const /*override*/;

    virtual ::SubClientId getClientSubId() const /*override*/;

    virtual void setSuspendInput(bool) /*override*/;

    virtual void setSuspendDirectionalInput(bool) /*override*/;

    virtual void setDisableInput(bool) /*override*/;

    virtual void grabMouse() /*override*/;

    virtual void releaseMouse() /*override*/;

    virtual void refocusMouse(bool) /*override*/;

    virtual void setMouseType(::Bedrock::Input::PointerType) /*override*/;

    virtual void resetBai(int) /*override*/;

    virtual void clearInProgressBAI() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> getSoundEngine() const /*override*/;

    virtual ::MusicManager const* getMusicManager() const /*override*/;

    virtual ::MusicManager* getMusicManagerNonConst() const /*override*/;

    virtual void play(::std::string const&, ::Vec3 const&, float, float) /*override*/;

    virtual void playUI(::std::string const&, float, float) /*override*/;

    virtual void muteAudio() /*override*/;

    virtual void unMuteAudio() /*override*/;

    virtual void fadeOutMusic() const /*override*/;

    virtual ::TaskGroup& getTaskGroup() /*override*/;

    virtual void onFullVanillaPackOnStack() /*override*/;

    virtual bool isFullVanillaPackOnStack() const /*override*/;

    virtual void onPlayerLoaded(::Player&) /*override*/;

    virtual void setClientGameMode(::GameType) /*override*/;

    virtual void resetToDefaultGameMode() /*override*/;

    virtual ::IGameConnectionListener& getGameConnectionListener() /*override*/;

    virtual void connectToThirdPartyServer(::std::string const&, int) /*override*/;

    virtual void startExternalNetworkWorld(
        ::Social::GameConnectionInfo,
        ::std::string const&,
        ::PlayerJoinWorldContext
    ) /*override*/;

    virtual bool isReadyToReconnect() const /*override*/;

    virtual bool checkForPiracy() /*override*/;

    virtual void updateChatFilterStatus(::ProfanityContext&) /*override*/;

    virtual void updateControllerHandling() /*override*/;

    virtual void onPlayerDestruction(::Player&) /*override*/;

    virtual void setBehaviorCommandCallback(::std::function<void(::std::string const&, ::BehaviorStatus)>) /*override*/;

    virtual void setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus) /*override*/;

    virtual void setConnectGamepadScreenActive(bool) /*override*/;

    virtual ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>>
    requestScreenshot(::ScreenshotOptions&) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const /*override*/;

    virtual ::std::shared_ptr<::FileDataRequest> requestImageFromUrl(
        ::std::string const&,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)>
    ) /*override*/;

    virtual void setActiveFileStorageArea(::std::shared_ptr<::Core::FileStorageArea>) /*override*/;

    virtual void onExtendDiskSpace(
        bool const,
        ::std::weak_ptr<::Core::FileStorageArea> const&,
        uint64,
        ::std::function<void()>
    ) /*override*/;

    virtual void onLowDiskSpace(bool const) /*override*/;

    virtual void onOutOfDiskSpace(bool const) /*override*/;

    virtual void onCriticalDiskError(bool const, ::Core::LevelStorageState const&) /*override*/;

    virtual void onLevelCorrupt() /*override*/;

    virtual void onGameModeChanged() /*override*/;

    virtual void onBeforeSimTick() /*override*/;

    virtual void onTick(int, int) /*override*/;

    virtual void onInternetUpdate() /*override*/;

    virtual void onGameSessionReset() /*override*/;

    virtual void onLevelExit() /*override*/;

    virtual void onRequestResourceReload() /*override*/;

    virtual void updateScreens() /*override*/;

    virtual void initializeRenderResources() /*override*/;

    virtual void postInitRenderResources() /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppResumed() /*override*/;

    virtual void
    onActiveResourcePacksChanged(::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&) /*override*/;

    virtual void
    reloadEntityRenderers(::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&) /*override*/;

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

    virtual void
    addTTSMessage(::std::string const&, ::ProfanityFilterContext, bool, ::std::string const&, bool, bool) /*override*/;

    virtual void initCommands() /*override*/;

    virtual uint getUserId() const /*override*/;

    virtual bool isPrimaryUser() const /*override*/;

    virtual double getServerConnectionTime() const /*override*/;

    virtual void setServerPingTime(int) /*override*/;

    virtual int getServerPingTime() const /*override*/;

    virtual void setDefaultPlayscreenTab(::PlayScreenDefaultTab) /*override*/;

    virtual void setClientInstanceState(::ClientInstanceState const&) /*override*/;

    virtual void setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<::UIEventCoordinator>&&) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> getUIEventCoordinator() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> getEventCoordinator() /*override*/;

    virtual ::ClientNetworkEventCoordinator& getClientNetworkEventCoordinator() /*override*/;

    virtual ::ClientScriptEventCoordinator& getClientScriptEventCoordinator() /*override*/;

    virtual ::std::chrono::steady_clock::time_point getNoBlockBreakUntil() /*override*/;

    virtual void setNoBlockBreakUntil(::std::chrono::steady_clock::time_point) /*override*/;

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

    virtual void setRemoteServerTimeMs(float) /*override*/;

    virtual float getRemoteServerNetworkTimeMs() const /*override*/;

    virtual void setRemoteServerNetworkTimeMs(float) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ClientScriptManager> getClientScriptManager() /*override*/;

    virtual ::Scripting::ScriptEngine* getScriptingEngine() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler> getPlayerReportHandler() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() /*override*/;

    virtual void flagDisconnectionAndNotify(::Connection::DisconnectFailReason) /*override*/;

    virtual void flagDisconnectionAndNotifyWithParams(::DisconnectionScreenParams const&) /*override*/;

    virtual void disconnectSubClient(::Connection::DisconnectFailReason) /*override*/;

    virtual void setClientUpdateAndRenderThrottling(bool, int, float) /*override*/;

    virtual bool isClientUpdateAndRenderThrottlingEnabled() const /*override*/;

    virtual int getClientUpdateAndRenderThrottlingThreshold() const /*override*/;

    virtual float getClientUpdateAndRenderThrottlingScalar() const /*override*/;

    virtual bool isUserBanned() const /*override*/;

    virtual bool isEligibleForPauseFeature() const /*override*/;

    virtual void setupPauseManagers() /*override*/;

    virtual bool requestInGamePause(bool) /*override*/;

    virtual void openContentLogHistory() /*override*/;

    virtual double getGameUpdateDurationInSeconds() const /*override*/;

    virtual ::std::optional<::ConnectionContextInfo> getConnectionContextInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientInstance(::ClientInstanceArguments&& args);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ClientInstanceArguments&& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initTTSClient(::std::shared_ptr<::TextToSpeechClient> textToSpeechClient);
    // NOLINTEND
};
