#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/client/game/DeferredTaskCategory.h"
#include "mc/client/game/IMinecraftGame.h"
#include "mc/client/game/IMultiPlayerServices.h"
#include "mc/client/game/SerialWorkList.h"
#include "mc/client/game/StartIntent.h"
#include "mc/client/game/local_server_launcher/ILocalServerLauncherImpl.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/options/OptionsObserver.h"
#include "mc/client/renderer/texture/TextureAtlasStatus.h"
#include "mc/client/social/JoinGameStatus.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/common/App.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/DeferredTasksManager.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/PointerType.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/NetworkType.h"
#include "mc/locale/I18nObserver.h"
#include "mc/platform/MultiplayerLockedContext.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/ResourcePackListener.h"
#include "mc/server/commands/test/TestAssetCommandType.h"
#include "mc/server/commands/test/TestCommandType.h"
#include "mc/sound/MusicRepeatMode.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class AppSystemRegistry;
class BlockCullingGroup;
class ChunkSource;
class ClientInstance;
class ClientNetworkSystem;
class ContentIdentity;
class ContentLogFileEndPoint;
class CubemapBackgroundResources;
class DateManager;
class Dimension;
class EDUSystems;
class EmoticonManager;
class EntityContext;
class FileArchiver;
class FontHandle;
class GameModuleClient;
class GameRenderer;
class GeometryGroup;
class GuiData;
class IApp;
class IClientDimensionExtensions;
class IClientInstance;
class IContentAccessibilityProvider;
class IContentKeyProvider;
class IContentManager;
class IContentTierManager;
class IGameModuleShared;
class ILevelListCache;
class IMinecraftEventing;
class IResourcePackRepository;
class ISceneStack;
class ITextBoxController;
class IUIDefRepository;
class IUIRepository;
class ItemRegistryRef;
class LevelDbEnv;
class LevelSettings;
class LinkedAssetValidator;
class LocalPlayer;
class Minecraft;
class MinecraftGraphics;
class MinecraftInputHandler;
class Option;
class Options;
class PackManifest;
class PackManifestFactory;
class PackSourceFactory;
class ParticleEffectGroup;
class PixelCalc;
class Player;
class PushNotificationMessage;
class RenderControllerGroup;
class ResetCallbackObject;
class ResourceLoadManager;
class ResourcePackManager;
class ResourcePackStack;
class SceneFactory;
class ServerInstance;
class ServerInstanceEventCoordinator;
class ServerNetworkHandler;
class TaskGroup;
class TextToIconMapper;
class TextureAtlas;
class Timer;
class UIEventCoordinator;
class UIMeasureStrategy;
class Vec3;
class WorldTemplateManager;
struct ActorResourceDefinitionGroup;
struct ActorUniqueID;
struct CDNService;
struct ClubsService;
struct ContentAcquisition;
struct ContentCatalogService;
struct ControllerIDtoClientMap;
struct DeferredLighting;
struct DevConsoleLogger;
struct ExperienceConnectionData;
struct ExternalContentManager;
struct ExternalWorldTransferActionFunc;
struct FlightingService;
struct GameConnectionInfoEx;
struct GatheringManager;
struct GlobalResourcesCrashRecovery;
struct IDlcValidation;
struct IEntitlementManager;
struct IExternalServerFile;
struct IGameModuleApp;
struct IOfferRepository;
struct IThirdPartyServerRepository;
struct LatencyGraphDisplay;
struct LevelLoader;
struct LibraryRepository;
struct LocalWorldTransferActionFunc;
struct MarketplaceServicesManager;
struct MinecraftGameArguments;
struct MusicManager;
struct NewPlayerSystem;
struct PackDownloadManager;
struct PersonaRepository;
struct PersonaService;
struct PlayerJoinWorldContext;
struct PlayerMessagingService;
struct ProfanityContext;
struct RealmsAPI;
struct ScreenshotOptions;
struct ScreenshotRecorder;
struct SeasonsRenderer;
struct SerialWorkList;
struct ServiceDrivenImageRepository;
struct ServicesManager;
struct SkinRepository;
struct SoundEngine;
struct StoreCatalogRepository;
struct SunsettingManager;
struct TreatmentPackDownloadMonitor;
struct TrialManager;
struct WorldTransferAgent;
namespace Automation { class AutomationClient; }
namespace Bedrock { class ActivationArguments; }
namespace Bedrock { class ScopeExit; }
namespace Bedrock::PubSub { class Subscription; }
namespace ClientBlobCache { struct Cache; }
namespace ClientBlockPipeline { class SchematicsRepository; }
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace LocalServerLauncher { struct GameDependencies; }
namespace LocalServerLauncher { struct IGameInterface; }
namespace LocalServerLauncher { struct IServerInstanceBuilder; }
namespace LocalServerLauncher { struct ServerInitData; }
namespace LocalServerLauncher { struct ServerLaunchResult; }
namespace LocalServerLauncher::Impl { struct AllDependencies; }
namespace OreUI { class DataProviderManager_DEPRECATED; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class Router; }
namespace Parties { struct PartySystem; }
namespace Progress { struct ProgressTips; }
namespace Realms { struct ContentService; }
namespace Realms { struct GenericRequestServiceHandler; }
namespace Realms { struct RealmId; }
namespace Realms { struct RealmsServices; }
namespace Realms { struct RealmsSystem; }
namespace Realms { struct SubscriptionService; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { struct MultiplayerGameInfo; }
namespace Social { struct MultiplayerServiceManager; }
namespace Social { struct PresenceManager; }
namespace Social { struct SocialSystem; }
namespace Social { struct User; }
namespace World { class WorldSystem; }
namespace edu::auth { struct CredentialsAcquired; }
namespace edu::auth { struct CredentialsRefreshSuccess; }
namespace edu::auth { struct CredsLost; }
namespace mce { class TextureGroup; }
namespace mce { class UUID; }
// clang-format on

class MinecraftGame : public ::IMinecraftGame,
                      public ::App,
                      public ::LevelListener,
                      public ::ResourcePackListener,
                      public ::OptionsObserver,
                      public ::edu::auth::CredentialsObserver,
                      public ::I18nObserver,
                      public ::IMultiPlayerServices,
                      public ::LocalServerLauncher::ILocalServerLauncherImpl {
public:
    // MinecraftGame inner types declare
    // clang-format off
    struct InitContext;
    struct FrameGapImpl;
    // clang-format on

    // MinecraftGame inner types define
    enum class SuspendState : int {
        Suspending = 0,
        Suspended  = 1,
        Resuming   = 2,
        Running    = 3,
    };

    enum class DeviceLostState : int {
        Valid      = 0,
        Lost       = 1,
        Recovering = 2,
    };

    enum class SurfaceState : int {
        Valid = 0,
        Lost  = 1,
    };

    enum class WorkList : uint64 {
        AppInitialize = 0,
        AppResume     = 1,
        AppDeviceLost = 2,
        Count         = 3,
    };

    struct InitContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk1f2a2b;
        ::ll::UntypedStorage<8, 16> mUnkc9621b;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitContext& operator=(InitContext const&);
        InitContext(InitContext const&);
        InitContext();
    };

    struct FrameGapImpl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk2970b7;
        // NOLINTEND

    public:
        // prevent constructor by default
        FrameGapImpl& operator=(FrameGapImpl const&);
        FrameGapImpl(FrameGapImpl const&);
        FrameGapImpl();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk31cb40;
    ::ll::UntypedStorage<8, 64>  mUnk26362f;
    ::ll::UntypedStorage<8, 8>   mUnk5833c3;
    ::ll::UntypedStorage<8, 8>   mUnk707e20;
    ::ll::UntypedStorage<8, 8>   mUnk77bae9;
    ::ll::UntypedStorage<8, 8>   mUnk39dbf1;
    ::ll::UntypedStorage<8, 8>   mUnkb9a1e2;
    ::ll::UntypedStorage<8, 8>   mUnka617fc;
    ::ll::UntypedStorage<8, 8>   mUnk1a8ba7;
    ::ll::UntypedStorage<8, 8>   mUnk8c1a51;
    ::ll::UntypedStorage<8, 8>   mUnkdcd0a8;
    ::ll::UntypedStorage<8, 8>   mUnk27a9f1;
    ::ll::UntypedStorage<8, 8>   mUnk6449d7;
    ::ll::UntypedStorage<8, 8>   mUnk6585d8;
    ::ll::UntypedStorage<8, 8>   mUnk18dd91;
    ::ll::UntypedStorage<8, 8>   mUnke812cf;
    ::ll::UntypedStorage<8, 8>   mUnk102e50;
    ::ll::UntypedStorage<8, 8>   mUnkd0fa73;
    ::ll::UntypedStorage<8, 8>   mUnk30cf6e;
    ::ll::UntypedStorage<1, 1>   mUnk73dd14;
    ::ll::UntypedStorage<8, 64>  mUnkc4eefd;
    ::ll::UntypedStorage<8, 64>  mUnk4d9a8c;
    ::ll::UntypedStorage<8, 16>  mUnke052b6;
    ::ll::UntypedStorage<8, 64>  mUnk1a273c;
    ::ll::UntypedStorage<8, 64>  mUnk84236d;
    ::ll::UntypedStorage<8, 8>   mUnk79ddba;
    ::ll::UntypedStorage<8, 8>   mUnkf926be;
    ::ll::UntypedStorage<8, 8>   mUnk37afa1;
    ::ll::UntypedStorage<8, 8>   mUnk68dc1e;
    ::ll::UntypedStorage<8, 16>  mUnka2869f;
    ::ll::UntypedStorage<8, 8>   mUnkde38fc;
    ::ll::UntypedStorage<8, 8>   mUnk9a183a;
    ::ll::UntypedStorage<8, 8>   mUnk46def3;
    ::ll::UntypedStorage<8, 8>   mUnkc587de;
    ::ll::UntypedStorage<8, 8>   mUnk4a17b1;
    ::ll::UntypedStorage<8, 8>   mUnk812bde;
    ::ll::UntypedStorage<8, 32>  mUnkb501e6;
    ::ll::UntypedStorage<8, 8>   mUnk8f8079;
    ::ll::UntypedStorage<8, 8>   mUnkcd6826;
    ::ll::UntypedStorage<8, 16>  mUnk5849e3;
    ::ll::UntypedStorage<8, 16>  mUnk336443;
    ::ll::UntypedStorage<1, 1>   mUnkb6d61e;
    ::ll::UntypedStorage<8, 16>  mUnkd61d74;
    ::ll::UntypedStorage<4, 4>   mUnkda7647;
    ::ll::UntypedStorage<4, 4>   mUnk730c95;
    ::ll::UntypedStorage<1, 1>   mUnk391e21;
    ::ll::UntypedStorage<4, 4>   mUnk859534;
    ::ll::UntypedStorage<8, 8>   mUnk8b857f;
    ::ll::UntypedStorage<8, 8>   mUnkeb3d6b;
    ::ll::UntypedStorage<8, 16>  mUnk8598e2;
    ::ll::UntypedStorage<8, 32>  mUnk29d8a4;
    ::ll::UntypedStorage<8, 16>  mUnk8120e2;
    ::ll::UntypedStorage<1, 1>   mUnkbf9e1f;
    ::ll::UntypedStorage<1, 1>   mUnkf1c360;
    ::ll::UntypedStorage<8, 8>   mUnk596107;
    ::ll::UntypedStorage<8, 8>   mUnkcc0494;
    ::ll::UntypedStorage<8, 8>   mUnkc32677;
    ::ll::UntypedStorage<8, 8>   mUnkfb38cb;
    ::ll::UntypedStorage<1, 1>   mUnk549470;
    ::ll::UntypedStorage<4, 4>   mUnkdaeaa4;
    ::ll::UntypedStorage<4, 4>   mUnk978a98;
    ::ll::UntypedStorage<1, 1>   mUnk7186c4;
    ::ll::UntypedStorage<1, 1>   mUnkeeb15c;
    ::ll::UntypedStorage<1, 1>   mUnk21487c;
    ::ll::UntypedStorage<1, 1>   mUnk7f0094;
    ::ll::UntypedStorage<1, 1>   mUnk1f7e9d;
    ::ll::UntypedStorage<1, 1>   mUnk71b5c7;
    ::ll::UntypedStorage<8, 32>  mUnk570845;
    ::ll::UntypedStorage<4, 4>   mUnk785de7;
    ::ll::UntypedStorage<8, 408> mUnke04be5;
    ::ll::UntypedStorage<1, 1>   mUnk19eccc;
    ::ll::UntypedStorage<4, 4>   mUnk97e7f8;
    ::ll::UntypedStorage<8, 16>  mUnk61cb9f;
    ::ll::UntypedStorage<1, 1>   mUnk3ebcf8;
    ::ll::UntypedStorage<1, 1>   mUnk39e2bc;
    ::ll::UntypedStorage<1, 1>   mUnked6187;
    ::ll::UntypedStorage<1, 1>   mUnk9e21e6;
    ::ll::UntypedStorage<1, 1>   mUnkfed6cd;
    ::ll::UntypedStorage<1, 1>   mUnk41cbb8;
    ::ll::UntypedStorage<4, 4>   mUnk9b7c5f;
    ::ll::UntypedStorage<1, 1>   mUnkc8c391;
    ::ll::UntypedStorage<1, 1>   mUnka7b938;
    ::ll::UntypedStorage<1, 1>   mUnk5907ad;
    ::ll::UntypedStorage<1, 1>   mUnk6f26ef;
    ::ll::UntypedStorage<8, 56>  mUnk2fd9a7;
    ::ll::UntypedStorage<8, 8>   mUnke44711;
    ::ll::UntypedStorage<8, 80>  mUnk27b53a;
    ::ll::UntypedStorage<8, 8>   mUnk3ee8f3;
    ::ll::UntypedStorage<8, 16>  mUnk5d44d0;
    ::ll::UntypedStorage<1, 1>   mUnk64a982;
    ::ll::UntypedStorage<1, 1>   mUnk456e9b;
    ::ll::UntypedStorage<1, 1>   mUnkd57772;
    ::ll::UntypedStorage<1, 1>   mUnk780cef;
    ::ll::UntypedStorage<8, 8>   mUnkbbeca7;
    ::ll::UntypedStorage<8, 8>   mUnk523cee;
    ::ll::UntypedStorage<8, 40>  mUnka60eca;
    ::ll::UntypedStorage<8, 32>  mUnk78c4dd;
    ::ll::UntypedStorage<1, 1>   mUnka2f794;
    ::ll::UntypedStorage<1, 1>   mUnk90b4e5;
    ::ll::UntypedStorage<8, 16>  mUnk3fa9bf;
    ::ll::UntypedStorage<8, 8>   mUnkfa9b14;
    ::ll::UntypedStorage<8, 8>   mUnk975fa0;
    ::ll::UntypedStorage<8, 8>   mUnkc95a9f;
    ::ll::UntypedStorage<8, 8>   mUnkdef9e3;
    ::ll::UntypedStorage<8, 16>  mUnk44f519;
    ::ll::UntypedStorage<8, 8>   mUnka426aa;
    ::ll::UntypedStorage<8, 16>  mUnkd412af;
    ::ll::UntypedStorage<8, 16>  mUnk333c36;
    ::ll::UntypedStorage<8, 8>   mUnkab5b49;
    ::ll::UntypedStorage<8, 8>   mUnk2d070e;
    ::ll::UntypedStorage<8, 8>   mUnkffc4a2;
    ::ll::UntypedStorage<8, 8>   mUnk87a54d;
    ::ll::UntypedStorage<8, 8>   mUnk80cd0e;
    ::ll::UntypedStorage<8, 8>   mUnk692520;
    ::ll::UntypedStorage<8, 8>   mUnkb8db74;
    ::ll::UntypedStorage<8, 8>   mUnkb69251;
    ::ll::UntypedStorage<8, 8>   mUnk138dbc;
    ::ll::UntypedStorage<8, 8>   mUnk125782;
    ::ll::UntypedStorage<8, 8>   mUnk116bf2;
    ::ll::UntypedStorage<8, 8>   mUnkf25a9b;
    ::ll::UntypedStorage<8, 8>   mUnk75183c;
    ::ll::UntypedStorage<8, 8>   mUnk984c5b;
    ::ll::UntypedStorage<8, 16>  mUnk795ad2;
    ::ll::UntypedStorage<8, 8>   mUnkd9da77;
    ::ll::UntypedStorage<8, 16>  mUnkcc1ee6;
    ::ll::UntypedStorage<8, 8>   mUnk291774;
    ::ll::UntypedStorage<8, 8>   mUnk8f0421;
    ::ll::UntypedStorage<8, 16>  mUnk9ac038;
    ::ll::UntypedStorage<8, 64>  mUnk33501c;
    ::ll::UntypedStorage<8, 8>   mUnk95a9d2;
    ::ll::UntypedStorage<8, 8>   mUnk78243e;
    ::ll::UntypedStorage<8, 8>   mUnkb0966b;
    ::ll::UntypedStorage<8, 8>   mUnke4850d;
    ::ll::UntypedStorage<8, 8>   mUnk949250;
    ::ll::UntypedStorage<8, 8>   mUnk94c9dc;
    ::ll::UntypedStorage<8, 8>   mUnk56924c;
    ::ll::UntypedStorage<8, 8>   mUnk7c70a9;
    ::ll::UntypedStorage<8, 8>   mUnka6f4b7;
    ::ll::UntypedStorage<8, 8>   mUnk4c8c20;
    ::ll::UntypedStorage<8, 16>  mUnkde6f9f;
    ::ll::UntypedStorage<8, 16>  mUnk51caaa;
    ::ll::UntypedStorage<8, 16>  mUnk88dd50;
    ::ll::UntypedStorage<8, 8>   mUnkf13f9f;
    ::ll::UntypedStorage<8, 8>   mUnk46f031;
    ::ll::UntypedStorage<8, 8>   mUnkad7e31;
    ::ll::UntypedStorage<8, 8>   mUnk41ce20;
    ::ll::UntypedStorage<8, 8>   mUnk5cf030;
    ::ll::UntypedStorage<8, 8>   mUnkb9503e;
    ::ll::UntypedStorage<8, 8>   mUnk9c023b;
    ::ll::UntypedStorage<8, 8>   mUnk5315ca;
    ::ll::UntypedStorage<8, 8>   mUnk276668;
    ::ll::UntypedStorage<8, 8>   mUnk3ec43f;
    ::ll::UntypedStorage<8, 8>   mUnkb5e444;
    ::ll::UntypedStorage<8, 16>  mUnk36c9d2;
    ::ll::UntypedStorage<8, 8>   mUnkeee60b;
    ::ll::UntypedStorage<8, 8>   mUnkc1e9f3;
    ::ll::UntypedStorage<8, 48>  mUnka02940;
    ::ll::UntypedStorage<8, 16>  mUnk748223;
    ::ll::UntypedStorage<8, 16>  mUnkec6beb;
    ::ll::UntypedStorage<8, 8>   mUnk55dcf8;
    ::ll::UntypedStorage<8, 16>  mUnk4877d7;
    ::ll::UntypedStorage<8, 8>   mUnkd72bcd;
    ::ll::UntypedStorage<8, 8>   mUnk6c5fec;
    ::ll::UntypedStorage<8, 16>  mUnk2b5c1a;
    ::ll::UntypedStorage<8, 16>  mUnkdaad93;
    ::ll::UntypedStorage<8, 8>   mUnk2a83b2;
    ::ll::UntypedStorage<8, 8>   mUnkd10826;
    ::ll::UntypedStorage<8, 8>   mUnk64ddee;
    ::ll::UntypedStorage<8, 64>  mUnkd24a7a;
    ::ll::UntypedStorage<8, 8>   mUnkec79fd;
    ::ll::UntypedStorage<8, 8>   mUnk74222f;
    ::ll::UntypedStorage<8, 8>   mUnk468478;
    ::ll::UntypedStorage<8, 8>   mUnkea13b7;
    ::ll::UntypedStorage<8, 72>  mUnk9bce63;
    ::ll::UntypedStorage<8, 16>  mUnkbf42d0;
    ::ll::UntypedStorage<8, 16>  mUnk469d3c;
    ::ll::UntypedStorage<8, 8>   mUnkf245c7;
    ::ll::UntypedStorage<8, 64>  mUnk1c142c;
    ::ll::UntypedStorage<8, 8>   mUnk6906a6;
    ::ll::UntypedStorage<8, 8>   mUnka198d7;
    ::ll::UntypedStorage<8, 64>  mUnk63da8b;
    ::ll::UntypedStorage<8, 64>  mUnk19e15f;
    ::ll::UntypedStorage<8, 8>   mUnk68bd55;
    ::ll::UntypedStorage<8, 8>   mUnkd56e6e;
    ::ll::UntypedStorage<8, 64>  mUnk6331f9;
    ::ll::UntypedStorage<8, 64>  mUnkfb3c1e;
    ::ll::UntypedStorage<8, 8>   mUnkb4aa43;
    ::ll::UntypedStorage<8, 8>   mUnkfd4a2e;
    ::ll::UntypedStorage<8, 8>   mUnk4764de;
    ::ll::UntypedStorage<8, 8>   mUnk2db41b;
    ::ll::UntypedStorage<8, 64>  mUnk4282e8;
    ::ll::UntypedStorage<8, 8>   mUnk313b8d;
    ::ll::UntypedStorage<8, 16>  mUnka4d1d6;
    ::ll::UntypedStorage<8, 8>   mUnkb98e22;
    ::ll::UntypedStorage<8, 64>  mUnk358786;
    ::ll::UntypedStorage<8, 8>   mUnk633776;
    ::ll::UntypedStorage<8, 8>   mUnkc61c3a;
    ::ll::UntypedStorage<8, 8>   mUnk910337;
    ::ll::UntypedStorage<8, 8>   mUnkd6ff96;
    ::ll::UntypedStorage<8, 8>   mUnk51e772;
    ::ll::UntypedStorage<8, 8>   mUnkf2c3d8;
    ::ll::UntypedStorage<8, 64>  mUnkc5fc6f;
    ::ll::UntypedStorage<8, 8>   mUnk7e94f8;
    ::ll::UntypedStorage<8, 8>   mUnkf60a71;
    ::ll::UntypedStorage<8, 8>   mUnkf164a7;
    ::ll::UntypedStorage<8, 8>   mUnkea5b46;
    ::ll::UntypedStorage<8, 16>  mUnk5f5935;
    ::ll::UntypedStorage<8, 8>   mUnkd12853;
    ::ll::UntypedStorage<8, 16>  mUnk9f4932;
    ::ll::UntypedStorage<8, 8>   mUnk93ccfd;
    ::ll::UntypedStorage<1, 1>   mUnk4d836f;
    ::ll::UntypedStorage<8, 16>  mUnk626810;
    ::ll::UntypedStorage<8, 8>   mUnkce7b8c;
    ::ll::UntypedStorage<8, 8>   mUnka05418;
    ::ll::UntypedStorage<8, 16>  mUnkfb7cce;
    ::ll::UntypedStorage<8, 8>   mUnk17a5e5;
    ::ll::UntypedStorage<8, 8>   mUnk1d082c;
    ::ll::UntypedStorage<8, 8>   mUnk721c07;
    ::ll::UntypedStorage<8, 8>   mUnk75c011;
    ::ll::UntypedStorage<8, 8>   mUnk662066;
    ::ll::UntypedStorage<8, 8>   mUnka63939;
    ::ll::UntypedStorage<8, 8>   mUnkd68cd6;
    ::ll::UntypedStorage<8, 16>  mUnkd0c917;
    ::ll::UntypedStorage<8, 8>   mUnka64c85;
    ::ll::UntypedStorage<8, 8>   mUnk31922c;
    ::ll::UntypedStorage<8, 8>   mUnkb92250;
    ::ll::UntypedStorage<8, 8>   mUnkc46d8a;
    ::ll::UntypedStorage<8, 64>  mUnk391b07;
    ::ll::UntypedStorage<8, 80>  mUnk36d9f1;
    ::ll::UntypedStorage<8, 80>  mUnk2de6a0;
    ::ll::UntypedStorage<8, 80>  mUnkc7328a;
    ::ll::UntypedStorage<8, 80>  mUnk880945;
    ::ll::UntypedStorage<8, 80>  mUnk26d14c;
    ::ll::UntypedStorage<8, 8>   mUnk3dc5d4;
    ::ll::UntypedStorage<8, 8>   mUnk6622a0;
    ::ll::UntypedStorage<8, 16>  mUnke27718;
    ::ll::UntypedStorage<8, 16>  mUnk9599c5;
    ::ll::UntypedStorage<8, 8>   mUnk1498bc;
    ::ll::UntypedStorage<8, 16>  mUnkc84d4d;
    ::ll::UntypedStorage<8, 8>   mUnk7757ed;
    ::ll::UntypedStorage<8, 8>   mUnk8b5a69;
    ::ll::UntypedStorage<8, 16>  mUnk8a114f;
    ::ll::UntypedStorage<8, 8>   mUnk2c648f;
    ::ll::UntypedStorage<8, 8>   mUnkef66f4;
    ::ll::UntypedStorage<8, 8>   mUnk5cb7cc;
    ::ll::UntypedStorage<8, 432> mUnke5c301;
    ::ll::UntypedStorage<8, 8>   mUnkd18639;
    ::ll::UntypedStorage<8, 8>   mUnk67d5dd;
    ::ll::UntypedStorage<8, 8>   mUnkc0bd78;
    ::ll::UntypedStorage<8, 8>   mUnk8ac119;
    ::ll::UntypedStorage<8, 16>  mUnkddfaa0;
    ::ll::UntypedStorage<8, 8>   mUnk20b98a;
    ::ll::UntypedStorage<8, 8>   mUnkcb59ec;
    ::ll::UntypedStorage<8, 8>   mUnk82663e;
    ::ll::UntypedStorage<8, 8>   mUnkb6a170;
    ::ll::UntypedStorage<8, 8>   mUnk8673bc;
    ::ll::UntypedStorage<8, 8>   mUnk1187d6;
    ::ll::UntypedStorage<8, 8>   mUnk807b24;
    ::ll::UntypedStorage<8, 8>   mUnke45c86;
    ::ll::UntypedStorage<8, 8>   mUnk1cf921;
    ::ll::UntypedStorage<8, 8>   mUnk70c996;
    ::ll::UntypedStorage<8, 8>   mUnk89400e;
    ::ll::UntypedStorage<8, 8>   mUnk946503;
    ::ll::UntypedStorage<8, 8>   mUnk781ed2;
    ::ll::UntypedStorage<8, 8>   mUnk871dc6;
    ::ll::UntypedStorage<8, 8>   mUnkf2f2ba;
    ::ll::UntypedStorage<8, 8>   mUnk4daba7;
    ::ll::UntypedStorage<8, 8>   mUnkd4beeb;
    ::ll::UntypedStorage<8, 8>   mUnkde4441;
    ::ll::UntypedStorage<8, 8>   mUnk8f12bc;
    ::ll::UntypedStorage<8, 8>   mUnkc2e1c6;
    ::ll::UntypedStorage<8, 8>   mUnk3ed686;
    ::ll::UntypedStorage<8, 8>   mUnk45b4b1;
    ::ll::UntypedStorage<8, 8>   mUnk777677;
    ::ll::UntypedStorage<8, 8>   mUnk1d6e6b;
    ::ll::UntypedStorage<8, 8>   mUnk7fca88;
    ::ll::UntypedStorage<8, 8>   mUnk71d6b7;
    ::ll::UntypedStorage<8, 8>   mUnk8d4567;
    ::ll::UntypedStorage<8, 8>   mUnkfdb8ca;
    ::ll::UntypedStorage<8, 8>   mUnkf68a87;
    ::ll::UntypedStorage<8, 8>   mUnk45501b;
    ::ll::UntypedStorage<8, 8>   mUnk10c987;
    ::ll::UntypedStorage<8, 48>  mUnk3703bb;
    ::ll::UntypedStorage<8, 8>   mUnkdd5b99;
    ::ll::UntypedStorage<8, 16>  mUnk1c3779;
    ::ll::UntypedStorage<8, 16>  mUnk4b4e23;
    ::ll::UntypedStorage<8, 24>  mUnk698964;
    ::ll::UntypedStorage<8, 24>  mUnk8d1118;
    ::ll::UntypedStorage<8, 16>  mUnk99fad5;
    ::ll::UntypedStorage<8, 24>  mUnk4f11c0;
    ::ll::UntypedStorage<8, 24>  mUnk205f41;
    ::ll::UntypedStorage<8, 8>   mUnk952a89;
    ::ll::UntypedStorage<8, 8>   mUnk2ac62b;
    ::ll::UntypedStorage<8, 8>   mUnk185e8d;
    ::ll::UntypedStorage<8, 8>   mUnk94b524;
    ::ll::UntypedStorage<8, 8>   mUnk308f25;
    ::ll::UntypedStorage<8, 8>   mUnk5dd8f3;
    ::ll::UntypedStorage<8, 8>   mUnkceb4ab;
    ::ll::UntypedStorage<8, 8>   mUnk50a24d;
    ::ll::UntypedStorage<8, 16>  mUnk976824;
    ::ll::UntypedStorage<8, 8>   mUnkcd32cf;
    ::ll::UntypedStorage<8, 8>   mUnk32d240;
    ::ll::UntypedStorage<8, 16>  mUnkaa8c49;
    ::ll::UntypedStorage<8, 616> mUnkbfced1;
    ::ll::UntypedStorage<8, 16>  mUnka3a452;
    ::ll::UntypedStorage<8, 8>   mUnk7f0a19;
    ::ll::UntypedStorage<8, 16>  mUnk968b3f;
    ::ll::UntypedStorage<8, 8>   mUnk67f34e;
    ::ll::UntypedStorage<8, 8>   mUnkc456b9;
    ::ll::UntypedStorage<8, 8>   mUnk92ee4c;
    ::ll::UntypedStorage<8, 8>   mUnke4e7c9;
    ::ll::UntypedStorage<8, 8>   mUnk5e4634;
    ::ll::UntypedStorage<8, 64>  mUnk12c89f;
    ::ll::UntypedStorage<8, 16>  mUnk42b15f;
    ::ll::UntypedStorage<8, 16>  mUnk48c2a3;
    ::ll::UntypedStorage<8, 16>  mUnka8e328;
    ::ll::UntypedStorage<8, 24>  mUnkba1560;
    ::ll::UntypedStorage<8, 16>  mUnk3bcf80;
    ::ll::UntypedStorage<8, 16>  mUnka14281;
    ::ll::UntypedStorage<1, 1>   mUnkd46ea8;
    ::ll::UntypedStorage<8, 8>   mUnk205ada;
    ::ll::UntypedStorage<8, 16>  mUnk41bdf3;
    ::ll::UntypedStorage<8, 16>  mUnkad2805;
    ::ll::UntypedStorage<8, 16>  mUnk6b22bf;
    ::ll::UntypedStorage<8, 64>  mUnkf160e9;
    ::ll::UntypedStorage<8, 64>  mUnk19d968;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGame& operator=(MinecraftGame const&);
    MinecraftGame(MinecraftGame const&);
    MinecraftGame();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize() /*override*/;

    virtual ~MinecraftGame() /*override*/;

    virtual bool stop() /*override*/;

    virtual void processActivationArguments(::Bedrock::ActivationArguments const& args) /*override*/;

    virtual void audioEngineOn() /*override*/;

    virtual void audioEngineOff() /*override*/;

    virtual void update() /*override*/;

    virtual void play(::std::string const& name, ::Vec3 const& pos, float volume, float pitch) /*override*/;

    virtual void playUI(::std::string const& name, float volume, float pitch) /*override*/;

    virtual void stopSound(::std::string const& name) /*override*/;

    virtual void stopSounds() /*override*/;

    virtual void setUISizeAndScale(int w, int h, float forcedGuiScale) /*override*/;

    virtual void setRenderingSize(int w, int h) /*override*/;

    virtual void recalculateScene() /*override*/;

    virtual void setSmoothFontStyle() /*override*/;

    virtual void setUIFontStyle() /*override*/;

    virtual ::Bedrock::Threading::Async<void> startLocalServerAsync(
        ::std::string const&     levelId,
        ::std::string const&     levelName,
        ::ContentIdentity const& premiumTemplateContentIdentity,
        ::LevelSettings const&   settings,
        ::StartIntent            startIntent
    ) /*override*/;

    virtual void createAndUploadWorldToRealm(
        ::std::string const&                   levelId,
        ::std::string const&                   levelName,
        ::ContentIdentity const&               premiumTemplateContentIdentity,
        ::LevelSettings const&                 settings,
        ::Realms::World                        world,
        ::std::function<void(::Realms::World)> callback
    ) /*override*/;

    virtual bool canStartLocalServer() const /*override*/;

    virtual bool isAudioInitialized() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> getSoundEngine() const /*override*/;

    virtual ::MusicManager const* getMusicManager() const /*override*/;

    virtual ::MusicManager* getMusicManagerNonConst() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ITextBoxController> getTextBoxController() /*override*/;

    virtual void onLowMemory(::LowMemorySeverity) /*override*/;

    virtual void onAppFocusLost() /*override*/;

    virtual void onAppFocusGained() /*override*/;

    virtual void onAppPaused() /*override*/;

    virtual void onAppUnpaused() /*override*/;

    virtual void setReconnectionCookie(
        ::std::optional<::std::variant<
            ::GameConnectionInfoEx,
            ::Social::MultiplayerGameInfo,
            ::ExperienceConnectionData,
            ::Realms::RealmId>> const& reconnectCookie
    ) /*override*/;

    virtual ::std::optional<::std::variant<
        ::GameConnectionInfoEx,
        ::Social::MultiplayerGameInfo,
        ::ExperienceConnectionData,
        ::Realms::RealmId>>
    getReconnectionCookie() /*override*/;

    virtual void onAppPreSuspended() /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppResumed() /*override*/;

    virtual void onDeviceLost() /*override*/;

    virtual void onAppSurfaceCreated() /*override*/;

    virtual void onAppSurfaceDestroyed() /*override*/;

    virtual void openPauseMenu() /*override*/;

    virtual bool hasNetworkPrivileges(bool onlyWifiAllowed) /*override*/;

    virtual void onPlayerLoaded(::IClientInstance& client, ::Player& player) /*override*/;

    virtual void onDimensionChanged() /*override*/;

    virtual void setDisableInputForAllOtherClients(int id, bool disableStatus) /*override*/;

    virtual void onGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual void playerListChanged() /*override*/;

    virtual void onLevelDestruction(::std::string const& levelId) /*override*/;

    virtual void setWorldTransferAction(
        ::std::variant<::LocalWorldTransferActionFunc, ::ExternalWorldTransferActionFunc, ::std::monostate>
            worldTransferAction
    ) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const /*override*/;

    virtual void setIsWorldTransferInProgress(bool isWorldTransferInProgress) /*override*/;

    virtual bool isWorldTransferInProgress() const /*override*/;

    virtual void setResetCallbackObject(::ResetCallbackObject* obj) /*override*/;

    virtual void requestLeaveGame(bool switchScreen, bool sync) /*override*/;

    virtual void requestLeaveThenJoinFriendsWorld(::std::string_view serverId) /*override*/;

    virtual void startLeaveGame() /*override*/;

    virtual bool isLeaveGameDone() const /*override*/;

    virtual void destroyGame() /*override*/;

    virtual void setupCommandParser(::IClientInstance& client) /*override*/;

    virtual void onClientCreatedLevel(::IClientInstance& client) /*override*/;

    virtual ::GameRenderer& getGameRenderer() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository> getUIDefRepo() const /*override*/;

    virtual void joinRealmsGame(
        ::Realms::World const&              realm,
        ::Social::GameConnectionInfo const& gameConnection,
        ::PlayerJoinWorldContext            context
    ) /*override*/;

    virtual void joinRealmFromInvite(::Realms::World const& world) /*override*/;

    virtual void joinRealmFromConnectLink(::Realms::World const& world, ::PlayerJoinWorldContext context) /*override*/;

    virtual void setRealmsLoadingLink(bool state) /*override*/;

    virtual void joinRealm(
        ::Realms::World const&                    world,
        ::IMinecraftEventing::RealmConnectionFlow telemetryEventingConnectionFlow,
        ::PlayerJoinWorldContext                  context
    ) /*override*/;

    virtual ::Bedrock::Threading::Async<void>
    joinMultiplayerGame(::Social::MultiplayerGameInfo const& gameInfo, ::PlayerJoinWorldContext context) /*override*/;

    virtual void joinMultiplayerWithAddress(
        ::Social::GameConnectionInfo gameConnection,
        bool                         joiningLocalServer,
        ::std::string const&         serverName,
        ::std::string const&         worldName,
        ::NetworkType                networkTypeOverride,
        ::PlayerJoinWorldContext     context
    ) /*override*/;

    virtual void joinRemoteServerWithAddress(
        ::Social::GameConnectionInfo gameConnection,
        ::std::string const&         serverName,
        ::std::string const&         worldName,
        ::NetworkType                networkTypeOverride,
        ::PlayerJoinWorldContext     context
    ) /*override*/;

    virtual bool isLocalPlayer(::ActorUniqueID const& id) const /*override*/;

    virtual void setLeaveGameInProgressAsReadyToContinue() /*override*/;

    virtual bool isPrimaryClientInstanceReady() const /*override*/;

    virtual void ensureAllClientsAreLeaving() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> getPrimaryClientInstance() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance const> getPrimaryClientInstance() const /*override*/;

    virtual ::ItemRegistryRef getClientItemRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem> getNewPlayerSystem() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem const> getNewPlayerSystem() const /*override*/;

    virtual ::std::map<::SubClientId, ::std::shared_ptr<::IClientInstance>> const& getClientInstanceMap() const
        /*override*/;

    virtual ::std::shared_ptr<::IClientInstance> tryGetClientInstanceFromPlayerUUID(::mce::UUID const& playerId) const
        /*override*/;

    virtual uint getUIRenderClientMask() const /*override*/;

    virtual uint64 getClientInstanceCount() const /*override*/;

    virtual void forEachClientInstance(::std::function<void(::IClientInstance&)> callback) /*override*/;

    virtual ::LocalPlayer* getPrimaryLocalPlayer() /*override*/;

    virtual ::LocalPlayer const* getPrimaryLocalPlayer() const /*override*/;

    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const /*override*/;

    virtual bool isPrimaryLevelMultiplayer() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getPrimaryGuiData() /*override*/;

    virtual ::std::shared_ptr<::Options> getPrimaryUserOptions() /*override*/;

    virtual ::std::shared_ptr<::Options const> getPrimaryUserOptions() const /*override*/;

    virtual bool isPrimaryUserSigninInProgress() const /*override*/;

    virtual void resetInput() /*override*/;

    virtual ::PixelCalc const& getDpadScale() const /*override*/;

    virtual void setKeyboardForcedHeight(float height, bool isShowSignal) /*override*/;

    virtual bool canActivateKeyboard() /*override*/;

    virtual void reloadAnimationAndGeometryData(bool sync) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> getGeometryGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> getBlockCullingGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientBlockPipeline::SchematicsRepository> getSchematicsRepository() const
        /*override*/;

    virtual ::ParticleEffectGroup& getParticleEffectGroup() const /*override*/;

    virtual ::DeferredLighting& getDeferredLighting() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition> getContentAcquisition() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> getOfferRepository() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TrialManager> getTrialManager() const /*override*/;

    virtual bool isTrialManagerInitialized() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PersonaService> getPersonaService() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> getGatheringManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::CDNService> getCDNService() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> getContentCatalogService() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalog() const /*override*/;

    virtual ::ServiceDrivenImageRepository& getServiceImageRepository() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LibraryRepository> getLibraryRepository() const /*override*/;

    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationControllerGroup> getActorAnimationControllerGroup() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository const> getThirdPartyServerRepository() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository> getThirdPartyServerRepository() /*override*/;

    virtual ::std::shared_ptr<::SkinRepository> getSkinRepository() const /*override*/;

    virtual ::PersonaRepository& getPersonaRepository() const /*override*/;

    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> getWorldTemplateManager() const /*override*/;

    virtual ::World::WorldSystem& getWorldSystem() const /*override*/;

    virtual bool isWorldSystemReady() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsSystem> getRealmsSystem() const /*override*/;

    virtual ::Social::SocialSystem& getSocialSystem() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Parties::PartySystem> getPartySystem() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> getUIProgressTips() const /*override*/;

    virtual ::IResourcePackRepository& getResourcePackRepository() const /*override*/;

    virtual ::ResourcePackManager& getResourcePackManager() const /*override*/;

    virtual ::ResourcePackManager& getServerResourcePackManager() /*override*/;

    virtual ::PackManifestFactory& getPackManifestFactory() /*override*/;

    virtual ::PlayerMessagingService& getPlayerMessagingService() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider const> getAccessibilityProvider() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> getAccessibilityProvider() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> getContentTierManager() const /*override*/;

    virtual ::PackSourceFactory& getPackSourceFactory() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> getResourceLoadManager() /*override*/;

    virtual ::ILevelListCache& getLevelListCache() /*override*/;

    virtual bool hasAllValidCrossPlatformSkin() const /*override*/;

    virtual ::PackDownloadManager& getPackDownloadManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() /*override*/;

    virtual bool isMultiplayerServiceManagerReady() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> getMultiplayerServiceManager() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() const /*override*/;

    virtual ::IMinecraftEventing& getEventing() const /*override*/;

    virtual ::ServerInstance* getServerInstance() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerInstance> getServerInstanceNonOwnPtr() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientNetworkSystem> getClientNetworkSystemPtr() /*override*/;

    virtual ::ClientNetworkSystem& getClientNetworkSystem() /*override*/;

    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> getActiveDirectoryIdentity() /*override*/;

    virtual void clearCache() /*override*/;

    virtual void releaseClientSubId(::SubClientId subid) /*override*/;

    virtual bool isStartingGame() const /*override*/;

    virtual bool isSplitscreenJoinEnabled() const /*override*/;

    virtual bool canAddSplitscreenSubClient(int controllerId) const /*override*/;

    virtual void addSubClientInstanceAndAssociateToUser(int controllerId) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> retrieveCIDToClientMap() /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    registerSplitScreenChangedListener(::std::function<void(uchar)> callback) const /*override*/;

    virtual uchar getSplitScreenCount() const /*override*/;

    virtual float calculateScreenSizeToResolutionScalar(int const width, int const height) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GlobalResourcesCrashRecovery const> GetGlobalResourcesCrashRecovery() const
        /*override*/;

    virtual bool isReadyToRender() const /*override*/;

    virtual bool isShowingLoadingScreen() const /*override*/;

    virtual bool isRenderingLoadingScreen() const /*override*/;

    virtual void registerUpsellScreen() /*override*/;

    virtual ::SceneFactory& getPrimarySceneFactory() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getMainSceneStack() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getMainSceneStack() /*override*/;

    virtual ::OreUI::Router& getUIRouter() /*override*/;

    virtual ::OreUI::DataProviderManager_DEPRECATED& getDataProviderManager() /*override*/;

    virtual ::std::weak_ptr<::RealmsAPI> getRealms() /*override*/;

    virtual ::Realms::ContentService& getRealmsContentService() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsServices> getRealmsServices() /*override*/;

    virtual ::std::weak_ptr<::ClubsService> getClubsService() /*override*/;

    virtual ::std::shared_ptr<::Realms::GenericRequestServiceHandler> getGenericRealmsService() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Realms::SubscriptionService> getRealmsSubscriptionService() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::PresenceManager> getPresenceManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems> getEDUSystems() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems const> getEDUSystems() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getPrimaryMinecraft() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const /*override*/;

    virtual bool isDedicatedServer() const /*override*/;

    virtual bool isEduMode() const /*override*/;

    virtual void onNetworkMaxPlayersChanged(uint newMaxPlayerCount) /*override*/;

    virtual ::IGameModuleApp& getGameModule() /*override*/;

    virtual ::IGameModuleShared& getGameModuleShared() /*override*/;

    virtual void requestServerShutdown() /*override*/;

    virtual void setTestExecuteCommandCallback(
        ::std::function<void(::TestCommandType, ::std::vector<::std::string> const&, int)> const& callback
    ) /*override*/;

    virtual void setTestAssetCommandCallback(
        ::std::function<void(::TestAssetCommandType, ::std::vector<::std::string> const&)> const& callback
    ) /*override*/;

    virtual void runTestExecuteCommandCallback(
        ::TestCommandType                   type,
        ::std::vector<::std::string> const& tags,
        int                                 repeatCount
    ) const /*override*/;

    virtual void
    runTestAssetCommandCallback(::TestAssetCommandType type, ::std::vector<::std::string> const& tags) const
        /*override*/;

    virtual void setLaunchedFromLegacyVersion(bool launchedFromLegacyVersion) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> getFileArchiver() const /*override*/;

    virtual bool requestInGamePause(::SubClientId const& subClient, bool status) /*override*/;

    virtual ::InputMode getCurrentInputMode() const /*override*/;

    virtual void handleInputPaneHidden() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelLoader> getLevelLoader() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager> getContentManager() /*override*/;

    virtual ::IContentManager& getResourceContentManager() /*override*/;

    virtual ::std::string getMultiplayerDisabledTextTitle(::MultiplayerLockedContext context) const /*override*/;

    virtual ::std::string getMultiplayerDisabledTextBody(::MultiplayerLockedContext context) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile> getExternalServer() const /*override*/;

    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> getStoreCacheTextures() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> getMinecraftGraphics() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas> getTextureAtlas() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas> getItemTextureAtlas() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> getUIRepository() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SeasonsRenderer> getSeasonsRenderer() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> getFilePathManager() /*override*/;

    virtual void setUseFontOverrides(bool useOverrides) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getFontHandle() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getRuneFontHandle() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getUnicodeFontHandle() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getSmoothFontHandle() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getUIFontHandle() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::EmoticonManager const> getEmoticonManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper const> getTextToIconMapper() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper> getTextToIconMapper() /*override*/;

    virtual bool getMouseGrabbed() const /*override*/;

    virtual void navigateToPlayScreenFriendsTab() /*override*/;

    virtual bool hasActorResourceDefinitionGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> getActorResourceDefinitionGroup() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup const> getRenderControllerGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup> getRenderControllerGroup() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup>
    getActorResourceDefinitionGroupMutable() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> getOreUIResourceAllowList() /*override*/;

    virtual ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>>
    requestScreenshot(::ScreenshotOptions& screenshotOptions) /*override*/;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager& mgr) /*override*/;

    virtual bool onFullPackStackInvalid() /*override*/;

    virtual void onLanguageSubpacksChanged() /*override*/;

    virtual void onBaseGamePackDownloadComplete() /*override*/;

    virtual void displayActiveDirectoryLoginDialog() /*override*/;

    virtual void handleReloadUIDefinitions() /*override*/;

    virtual void onPushNotificationReceived(::PushNotificationMessage const& msg) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FlightingService> getFlightingService() const /*override*/;

    virtual ::std::shared_ptr<::FlightingService> getFlightingServicePtr() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TreatmentPackDownloadMonitor const> getTreatmentPackDownloadMonitor() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> getEntitlementManager() /*override*/;

    virtual ::IDlcValidation& getDlcValidation() /*override*/;

    virtual ::ServicesManager& getServicesManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SunsettingManager> getSunsettingManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DateManager> getDateManager() const /*override*/;

    virtual void grabMouse() /*override*/;

    virtual void releaseMouse() /*override*/;

    virtual void muteAudio() /*override*/;

    virtual void unMuteAudio() /*override*/;

    virtual uint64 generateClientId(
        bool                              forceReset,
        bool&                             generatedNewId,
        uint64                            clientIdModifier,
        ::std::shared_ptr<::Social::User> user
    ) /*override*/;

    virtual bool isHostingLocalDedicatedServer() const /*override*/;

    virtual void shutdownServer() /*override*/;

    virtual void pauseContentDownloads() /*override*/;

    virtual void resumeContentDownloads() /*override*/;

    virtual ::UIMeasureStrategy& getUIMeasureStrategy() /*override*/;

    virtual void copyInternalSettingsFolderToExternalLocation() const /*override*/;

    virtual void onClientLevelExit(::IClientInstance& exitClient, uint exitCode) /*override*/;

    virtual void resetThreadCallbacks() /*override*/;

    virtual bool isInGame() const /*override*/;

    virtual bool isInServer() const /*override*/;

    virtual bool isInRealm() const /*override*/;

    virtual void fadeOutMusic() /*override*/;

    virtual bool isInitialized() const /*override*/;

    virtual bool useMinecraftVersionOfXBLUI() const /*override*/;

    virtual int getMaxPlayerCount() const /*override*/;

    virtual void setProfilerIsOn(bool val) /*override*/;

    virtual void
    onPrimaryUserReconnect(::Social::UserPlatformConnectionResult status, bool isUserInitiated) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> getCubemapBackgroundResources() /*override*/;

    virtual void setAppWillTerminate(bool willTerminate) /*override*/;

    virtual ::DeferredTasksManager<::DeferredTaskCategory>& getDeferredTasks() /*override*/;

    virtual void onForceCloudSave() /*override*/;

    virtual void onOptionsLoadBegin() /*override*/;

    virtual void onOptionsLoadComplete() /*override*/;

    virtual bool shouldShowRatingsPrompt() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerInstanceEventCoordinator>
    getServerInstanceEventCoordinator() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IApp> getApp() /*override*/;

    virtual bool getSuspended() const /*override*/;

    virtual bool isResuming() const /*override*/;

    virtual void doPrimaryClientReadyWork(::std::function<void()> workFn) /*override*/;

    virtual void doUserManagerReadyWork(::std::function<void()> workFn) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ScreenshotRecorder> getScreenshotRecorder() /*override*/;

    virtual bool isEditorModeEnabled() const /*override*/;

    virtual ::std::shared_ptr<::ClientBlobCache::Cache> getClientBlobCache() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ContentLogFileEndPoint> const getContentFileLogEndPoint() const /*override*/;

    virtual void tryShowXblFirstLaunchScreen(bool isUserConnectedToPlatform) /*override*/;

    virtual ::std::shared_ptr<void*> requestMusicDeferment() /*override*/;

    virtual bool isMusicEnabled() const /*override*/;

    virtual void queueCustomMusic(
        ::std::string const& eventName,
        float                volume,
        float                fadeoutSeconds,
        ::MusicRepeatMode    playMode
    ) /*override*/;

    virtual void playCustomMusic(
        ::std::string const& eventName,
        float                volume,
        float                fadeoutSeconds,
        ::MusicRepeatMode    playMode
    ) /*override*/;

    virtual void setMusicCommandVolumeMultiplier(float volumeMultiplier) /*override*/;

    virtual void stopCustomMusic(float fadeoutSeconds) /*override*/;

    virtual ::EntityContext& getEntity() const /*override*/;

    virtual ::AppSystemRegistry& getAppSystemRegistry() /*override*/;

    virtual void onLanguageChanged(::std::string const& code, bool languageSystemInitializing) /*override*/;

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest) /*override*/;

    virtual void onLanguagesLoaded() /*override*/;

    virtual void buildTreatmentPackStack(bool fireEvents) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> getLevelDbEnv() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ChunkSource>
    getClientGenChunkSource(::DimensionType const& dimensionType) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> getProfanityContext() /*override*/;

    virtual double getGameUpdateDurationInSeconds() const /*override*/;

    virtual ::std::tuple<bool, int> GetEcoModeSettings() const /*override*/;

    virtual void queueSubclientRemoval(::SubClientId subid) /*override*/;

    virtual void logoffAllSubclients() /*override*/;

    virtual void setIsInGame(bool isInGame) /*override*/;

    virtual void createClientItemRegistry() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getInput() const /*override*/;

    virtual ::std::unique_ptr<::LocalServerLauncher::IGameInterface> createGameInterface() /*override*/;

    virtual ::std::unique_ptr<::LocalServerLauncher::IServerInstanceBuilder> createServerBuilder() /*override*/;

    virtual ::std::unique_ptr<::LocalServerLauncher::GameDependencies> createGameDependencies() /*override*/;

    virtual ::TaskGroup& _getServerInitTaskGroup() /*override*/;

    virtual bool
    checkMultiPlayerPermission(::std::optional<::Social::MultiplayerServiceIdentifier> service) /*override*/;

    virtual bool isPlayingLevel() const /*override*/;

    virtual void initImpl() /*override*/;

    virtual void refocusMouse(bool lostMouse) /*override*/;

    virtual void setMouseType(::Bedrock::Input::PointerType type) /*override*/;

    virtual void onNotify(::edu::auth::CredentialsAcquired const& state) /*override*/;

    virtual void onNotify(::edu::auth::CredentialsRefreshSuccess const& state) /*override*/;

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state) /*override*/;

    virtual bool checkForPiracy() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const /*override*/;

    virtual void completeServerStartup(
        ::std::shared_ptr<::LocalServerLauncher::ServerInitData> serverInitData,
        ::LocalServerLauncher::ServerLaunchResult&&              result
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MinecraftGame(::MinecraftGameArguments&& args);

    MCAPI void _InitComplete();

    MCAPI void _InitStarted();

    MCAPI void _LoadRendererAssets();

    MCAPI void _addSubClientInstanceAndAssociateToUserInternal(int controllerId, bool isInitialCheck);

    MCAPI void _beginReloadingResources();

    MCAPI void _buildClientStack();

    MCAPI void _buildClientStartupStack();

    MCAPI bool _canRender() const;

    MCAPI bool _clientUpdate();

    MCAPI void _configureLighting();

    MCAPI ::LocalServerLauncher::Impl::AllDependencies _createAllDependencies();

    MCAPI ::std::shared_ptr<::ClientInstance>
    _createClientInstance(::SubClientId id, ::LatencyGraphDisplay* latencyDisplay, int controller);

    MCAPI ::brstd::move_only_function<::std::unique_ptr<::IClientDimensionExtensions>(bool) const>
    _createDimensionExtensionsFactory(bool isClientSide);

    MCAPI ::std::unique_ptr<::GameModuleClient> _createGameModuleClient(::SubClientId id);

    MCAPI void _createPartySystem();

    MCAPI void _cycleRoundRobinClientSubId();

    MCAPI void _deinitOptionObservers(::IClientInstance& client);

    MCAPI ::std::unique_ptr<::ResourcePackStack> _deserializeGlobalResourcePacks();

    MCAPI void _deviceReinitialization(::SerialWorkList& workList);

    MCAPI void _finishReloadingResources(::ResourcePackManager& mgr, bool fullVanillaPackOnStack);

    MCAPI ::Bedrock::Threading::Async<void> _handleMultiplayerServiceJoinResult(
        ::Social::MultiplayerServiceIdentifier gameServiceProvider,
        ::Social::JoinGameStatus               succeeded,
        ::Social::MultiplayerGameInfo const&   newGame,
        bool                                   isLan
    );

    MCAPI void _initAppConfigs();

    MCAPI ::SerialWorkList::WorkResult _initAudio();

    MCAPI ::SerialWorkList::WorkResult _initCheckStorage();

    MCAPI ::SerialWorkList::WorkResult _initClientNetworkSystem();

    MCAPI ::SerialWorkList::WorkResult _initCrashReporting();

    MCAPI ::SerialWorkList::WorkResult
    _initCreatePrimaryClient(::std::shared_ptr<::MinecraftGame::InitContext> initContext);

    MCAPI ::SerialWorkList::WorkResult _initDatabase();

    MCAPI ::SerialWorkList::WorkResult _initDefaultFonts();

    MCAPI ::SerialWorkList::WorkResult _initDeviceDebugConfig();

    MCAPI void _initEcoModeSystem();

    MCAPI void _initEntityContext();

    MCAPI ::SerialWorkList::WorkResult _initEventing();

    MCAPI ::SerialWorkList::WorkResult _initFileSystemSpaceTracking();

    MCAPI ::SerialWorkList::WorkResult _initFinish(::std::shared_ptr<::MinecraftGame::InitContext>& initContext);

    MCAPI ::SerialWorkList::WorkResult _initFontHandles();

    MCAPI ::SerialWorkList::WorkResult _initFontMetadata();

    MCAPI ::SerialWorkList::WorkResult _initHideSplashScreen();

    MCAPI ::SerialWorkList::WorkResult _initHttp();

    MCAPI ::SerialWorkList::WorkResult _initIssueHardwareCursorLoad();

    MCAPI ::SerialWorkList::WorkResult _initLoadRendererAssets();

    MCAPI ::SerialWorkList::WorkResult _initLoadingBarMaterials();

    MCAPI ::SerialWorkList::WorkResult _initLogging();

    MCAPI void _initMinecraftGame();

    MCAPI ::SerialWorkList::WorkResult _initMultiplayerMgr();

    MCAPI ::SerialWorkList::WorkResult _initMultiplayerRequestHandler();

    MCAPI ::SerialWorkList::WorkResult _initNetworkSessionOwner();

    MCAPI ::SerialWorkList::WorkResult _initNewPlayerSystem();

    MCAPI ::SerialWorkList::WorkResult _initNotifyOnActiveResourcePacksChanged();

    MCAPI ::SerialWorkList::WorkResult _initOnGameSessionReset();

    MCAPI ::SerialWorkList::WorkResult _initOreUIAssets();

    MCAPI ::SerialWorkList::WorkResult _initOreUIDataProviderManager();

    MCAPI ::SerialWorkList::WorkResult _initOreUIRendering();

    MCAPI ::SerialWorkList::WorkResult _initOreUISystem(::std::shared_ptr<::MinecraftGame::InitContext> initContext);

    MCAPI ::SerialWorkList::WorkResult _initOreUIViewsCoordinator();

    MCAPI ::SerialWorkList::WorkResult _initPacks();

    MCAPI ::SerialWorkList::WorkResult _initPartySystem();

    MCAPI void _initPerMachineOptionObservers();

    MCAPI void _initPerUserOptionObservers(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCAPI ::SerialWorkList::WorkResult _initPostA();

    MCAPI ::SerialWorkList::WorkResult _initPostB();

    MCAPI ::SerialWorkList::WorkResult _initPostC();

    MCAPI ::SerialWorkList::WorkResult _initPostE();

    MCAPI ::SerialWorkList::WorkResult _initPostFontAsync();

    MCAPI ::SerialWorkList::WorkResult _initPreCacheOutOfGameViews();

    MCAPI ::SerialWorkList::WorkResult
    _initPrimaryClientComplete(::std::shared_ptr<::MinecraftGame::InitContext> initContext);

    MCAPI ::SerialWorkList::WorkResult _initProgressTips();

    MCAPI ::SerialWorkList::WorkResult _initPushAlwaysActiveScreen();

    MCAPI ::SerialWorkList::WorkResult _initRealmsSystem();

    MCAPI ::SerialWorkList::WorkResult _initRepopulateLevelInfoCache();

    MCAPI ::SerialWorkList::WorkResult _initResourceLoader();

    MCAPI void _initServicesManager();

    MCAPI ::SerialWorkList::WorkResult _initSocialSystem();

    MCAPI ::SerialWorkList::WorkResult _initStep1();

    MCAPI ::SerialWorkList::WorkResult _initStep2();

    MCAPI ::SerialWorkList::WorkResult _initStep2A();

    MCAPI ::SerialWorkList::WorkResult _initStep2B();

    MCAPI ::SerialWorkList::WorkResult _initStep3();

    MCAPI ::SerialWorkList::WorkResult _initStep5();

    MCAPI ::SerialWorkList::WorkResult _initStorageMigration();

    MCAPI ::SerialWorkList::WorkResult _initTTS();

    MCAPI ::SerialWorkList::WorkResult _initTestClientInterface();

    MCAPI ::SerialWorkList::WorkResult _initTimePlayedNotifier();

    MCAPI ::SerialWorkList::WorkResult _initUILoadAsyncWait();

    MCAPI ::SerialWorkList::WorkResult _initUpdateAppLaunchedCount();

    MCAPI ::SerialWorkList::WorkResult _initUpdateFontsBasedOffOfOverrideEnable();

    MCAPI ::SerialWorkList::WorkResult _initUser();

    MCAPI ::SerialWorkList::WorkResult _initUserComplete();

    MCAPI ::SerialWorkList::WorkResult _initWaitForContentManager();

    MCAPI ::SerialWorkList::WorkResult _initWaitForDefaultFontsToLoad();

    MCAPI ::SerialWorkList::WorkResult _initWaitForDiscoveryService();

    MCAPI ::SerialWorkList::WorkResult _initWaitForEntitlementCacheLoad();

    MCAPI ::SerialWorkList::WorkResult _initWaitForFontMetadataToLoad();

    MCAPI ::SerialWorkList::WorkResult _initWaitForFrameBuilder();

    MCAPI ::SerialWorkList::WorkResult _initWaitForInitialServicePacks();

    MCAPI ::SerialWorkList::WorkResult _initWaitForLocalization();

    MCAPI ::SerialWorkList::WorkResult _initWaitForMainMenuResources();

    MCAPI ::SerialWorkList::WorkResult _initWaitForOfferLicense();

    MCAPI ::SerialWorkList::WorkResult _initWaitForOfferRepo();

    MCAPI ::SerialWorkList::WorkResult _initWaitForOreUIAssets() const;

    MCAPI ::SerialWorkList::WorkResult _initWaitForPrimaryUser();

    MCAPI ::SerialWorkList::WorkResult _initWaitForRepopulateLevelInfoCache();

    MCAPI ::SerialWorkList::WorkResult _initWaitForResourceRepository();

    MCAPI ::SerialWorkList::WorkResult _initWaitForSkinRepo();

    MCAPI ::SerialWorkList::WorkResult _initWaitForWorldTemplateManager();

    MCAPI ::SerialWorkList::WorkResult _initWorldSystem();

    MCAPI ::SerialWorkList::WorkResult _initializeFrameBuilder();

    MCAPI void _initializeTextureStreamingResources();

    MCAPI bool _isGameplayPaused();

    MCAPI bool _isWaitingOnADAuthentication() const;

    MCAPI ::Bedrock::Threading::Async<void> _joinMultiplayerGame(
        ::Social::MultiplayerGameInfo const& gameToJoin,
        ::std::string const&                 multiplayerCorrelationId,
        ::PlayerJoinWorldContext             context
    );

    MCAPI void _joinRealmFromMultiplayerServiceInvite(::Social::MultiplayerGameInfo const& newGame);

    MCAPI void _loadAdditionalPackResources(bool fullVanillaPackOnStack);

    MCAPI ::SerialWorkList::WorkResult _loadGlobalResourcePacks();

    MCAPI void _loadInitialPackResources(::ResourcePackManager& mgr, bool fullVanillaPackOnStack);

    MCAPI void _loadLanguageData();

    MCAPI void _loadLastGlobalResourcePacksFromFile(bool waitForUIReload);

    MCAPI void _loadSoundAndMusic();

    MCAPI ::SerialWorkList::WorkResult _notifyOnFullVanillaPackOnStack();

    MCAPI void _onActiveResourcePacksChanged(::ResourcePackManager& mgr, bool fullVanillaPackOnStack);

    MCAPI void _onDeviceLostRecovery();

    MCAPI ::SerialWorkList::WorkResult _onDeviceRestoreFinish();

    MCAPI void _onEntitlementsChanged();

    MCAPI void _onEntitlementsChangedNotifyUI();

    MCAPI void _onInitRemoteSystem(::std::function<void()> syncCompleteCallback);

    MCAPI void _onPrimaryUserConnectComplete(
        ::Social::UserPlatformConnectionResult status,
        bool                                   runStartScreen,
        bool                                   userInitiated
    );

    MCAPI ::SerialWorkList::WorkResult _onResumeBegin();

    MCAPI ::SerialWorkList::WorkResult _onResumeFinish();

    MCAPI ::SerialWorkList::WorkResult _onResumeHttp();

    MCAPI ::SerialWorkList::WorkResult _onResumePrimaryClient();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueFontReloadTextures();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueReloadActors();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueReloadAnimation();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueReloadParticleEffects();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueReloadTextures();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueReloadTexturesAtlas();

    MCAPI ::SerialWorkList::WorkResult _onResumeReloadDefaultLighting();

    MCAPI ::SerialWorkList::WorkResult _onResumeRestartServices();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitFontReloadTextures();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitPreviousResourceLoads();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitReloadActors();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitReloadAnimation();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitReloadParticleEffects();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitReloadTextures();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitReloadTexturesAtlas();

    MCAPI void _onSplitScreenChanged();

    MCAPI void _onStorageDirectoryChanged(::Core::Path const& path);

    MCAPI void _onTTSOptionChanged();

    MCAPI void _onTTSOptionChanged(bool enabled);

    MCAPI void _onTextureAtlasStatus(::TextureAtlasStatus const& status);

    MCAPI void _onUserSigninPlayFab(uint userId);

    MCAPI void _onUserSigninXboxLive(uint userId);

    MCAPI void _onUserSignoutPlayFab(uint userId);

    MCAPI void _onUserSignoutXboxLive(uint userId);

    MCAPI void _performNetworkReadyActions();

    MCAPI void _preCacheOutOfGameViews();

    MCAPI void _pushAlwaysActiveScreens();

    MCAPI void _recomputeResolution();

    MCAPI void _registerClientOptionLock(
        ::SubClientId                clientId,
        ::Option*                    option,
        ::std::function<void(bool&)> isModifiableCondition
    );

    MCAPI void _registerClientOptionObserver(
        ::SubClientId                          clientId,
        ::Option*                              option,
        ::std::function<void(::Option const&)> onValueChangeCallback
    );

    MCAPI ::Bedrock::ScopeExit _registerOnInitUriListeners();

    MCAPI void _registerPrimaryUserOptionLock(::Option* option, ::std::function<void(bool&)> isModifiableCondition);

    MCAPI void
    _registerPrimaryUserOptionObserver(::Option* option, ::std::function<void(::Option const&)> onValueChangeCallback);

    MCAPI void _reloadLightingTextures();

    MCAPI void _removePendingSubclients();

    MCAPI void _setupFrameBuilderOptimizer();

    MCAPI void _setupRenderer();

    MCAPI void _teardownRenderer(bool removeDevice);

    MCAPI void _terminateRenderer();

    MCAPI void _unregisterOnInitUriListeners();

    MCAPI void _update();

    MCAPI void _updateLightingModel();

    MCAPI void _updatePackStackForLeaveGame();

    MCAPI void _updateProfilerLite();

    MCAPI void _updateTextureAtlasPBRData(::TextureAtlas const& textureAtlas, bool terrain);

    MCAPI ::SerialWorkList::WorkResult _waitForAudio();

    MCAPI ::SerialWorkList::WorkResult _waitForFileSystemSpaceTracking();

    MCAPI ::SerialWorkList::WorkResult _waitForLoadRendererAssets();

    MCAPI ::SerialWorkList::WorkResult _waitForStorageMigration();

    MCAPI void adjustClientsUISizeAndScale();

    MCAPI void cleanReloadMaterials();

    MCAPI uint continueLeaveGame();

    MCAPI bool currentScreenShouldStealMouse();

    MCAPI void doInitializationCompleteWork(::std::function<void()> workFn);

    MCAPI void endFrame();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> getClientInstance(::SubClientId subid);

    MCAPI ::Bedrock::NonOwnerPointer<::ServerNetworkHandler> getServerNetworkHandler();

    MCAPI void handleShowUpsellScreen(bool timeExpired);

    MCAPI void initEventing();

    MCAPI bool isInEDUMultiplayerSession();

    MCAPI bool isServerVisible();

    MCAPI void onTick();

    MCAPI bool primaryLevelExists() const;

    MCAPI void reloadMaterials();

    MCAPI void setDpadScale();

    MCAPI void setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<::UIEventCoordinator>&& uiEventCoordinator);

    MCAPI void startFrame();

    MCAPI void tickInput();

    MCAPI bool tryGetIdForNewSubClient(int controllerId, ::SubClientId& outNewClientId, bool isInitialCheck) const;

    MCAPI void updateAudio(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client, ::Timer const& timer);

    MCAPI void updateGraphics(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client, ::Timer const& timer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftGameArguments&& args);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initialize();

    MCAPI bool $stop();

    MCAPI void $processActivationArguments(::Bedrock::ActivationArguments const& args);

    MCAPI void $audioEngineOn();

    MCAPI void $audioEngineOff();

    MCAPI void $update();

    MCAPI void $play(::std::string const& name, ::Vec3 const& pos, float volume, float pitch);

    MCAPI void $playUI(::std::string const& name, float volume, float pitch);

    MCAPI void $stopSound(::std::string const& name);

    MCAPI void $stopSounds();

    MCAPI void $setUISizeAndScale(int w, int h, float forcedGuiScale);

    MCAPI void $setRenderingSize(int w, int h);

    MCAPI void $recalculateScene();

    MCAPI void $setSmoothFontStyle();

    MCAPI void $setUIFontStyle();

    MCAPI ::Bedrock::Threading::Async<void> $startLocalServerAsync(
        ::std::string const&     levelId,
        ::std::string const&     levelName,
        ::ContentIdentity const& premiumTemplateContentIdentity,
        ::LevelSettings const&   settings,
        ::StartIntent            startIntent
    );

    MCAPI void $createAndUploadWorldToRealm(
        ::std::string const&                   levelId,
        ::std::string const&                   levelName,
        ::ContentIdentity const&               premiumTemplateContentIdentity,
        ::LevelSettings const&                 settings,
        ::Realms::World                        world,
        ::std::function<void(::Realms::World)> callback
    );

    MCAPI bool $canStartLocalServer() const;

    MCAPI bool $isAudioInitialized() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> $getSoundEngine() const;

    MCFOLD ::MusicManager const* $getMusicManager() const;

    MCFOLD ::MusicManager* $getMusicManagerNonConst() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ITextBoxController> $getTextBoxController();

    MCAPI void $onLowMemory(::LowMemorySeverity);

    MCAPI void $onAppFocusLost();

    MCAPI void $onAppFocusGained();

    MCAPI void $onAppPaused();

    MCAPI void $onAppUnpaused();

    MCAPI void $setReconnectionCookie(
        ::std::optional<::std::variant<
            ::GameConnectionInfoEx,
            ::Social::MultiplayerGameInfo,
            ::ExperienceConnectionData,
            ::Realms::RealmId>> const& reconnectCookie
    );

    MCAPI ::std::optional<::std::variant<
        ::GameConnectionInfoEx,
        ::Social::MultiplayerGameInfo,
        ::ExperienceConnectionData,
        ::Realms::RealmId>>
    $getReconnectionCookie();

    MCAPI void $onAppPreSuspended();

    MCAPI void $onAppSuspended();

    MCAPI void $onAppResumed();

    MCAPI void $onDeviceLost();

    MCAPI void $onAppSurfaceCreated();

    MCAPI void $onAppSurfaceDestroyed();

    MCAPI void $openPauseMenu();

    MCAPI bool $hasNetworkPrivileges(bool onlyWifiAllowed);

    MCAPI void $onPlayerLoaded(::IClientInstance& client, ::Player& player);

    MCAPI void $onDimensionChanged();

    MCAPI void $setDisableInputForAllOtherClients(int id, bool disableStatus);

    MCAPI void $onGameEventNotification(::ui::GameEventNotification notification);

    MCAPI void $playerListChanged();

    MCAPI void $onLevelDestruction(::std::string const& levelId);

    MCAPI void $setWorldTransferAction(
        ::std::variant<::LocalWorldTransferActionFunc, ::ExternalWorldTransferActionFunc, ::std::monostate>
            worldTransferAction
    );

    MCAPI ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const $getWorldTransferAgent() const;

    MCAPI void $setIsWorldTransferInProgress(bool isWorldTransferInProgress);

    MCAPI bool $isWorldTransferInProgress() const;

    MCAPI void $setResetCallbackObject(::ResetCallbackObject* obj);

    MCAPI void $requestLeaveGame(bool switchScreen, bool sync);

    MCAPI void $requestLeaveThenJoinFriendsWorld(::std::string_view serverId);

    MCAPI void $startLeaveGame();

    MCAPI bool $isLeaveGameDone() const;

    MCAPI void $destroyGame();

    MCAPI void $setupCommandParser(::IClientInstance& client);

    MCAPI void $onClientCreatedLevel(::IClientInstance& client);

    MCAPI ::GameRenderer& $getGameRenderer() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository> $getUIDefRepo() const;

    MCAPI void $joinRealmsGame(
        ::Realms::World const&              realm,
        ::Social::GameConnectionInfo const& gameConnection,
        ::PlayerJoinWorldContext            context
    );

    MCAPI void $joinRealmFromInvite(::Realms::World const& world);

    MCAPI void $joinRealmFromConnectLink(::Realms::World const& world, ::PlayerJoinWorldContext context);

    MCAPI void $setRealmsLoadingLink(bool state);

    MCAPI void $joinRealm(
        ::Realms::World const&                    world,
        ::IMinecraftEventing::RealmConnectionFlow telemetryEventingConnectionFlow,
        ::PlayerJoinWorldContext                  context
    );

    MCAPI ::Bedrock::Threading::Async<void>
    $joinMultiplayerGame(::Social::MultiplayerGameInfo const& gameInfo, ::PlayerJoinWorldContext context);

    MCAPI void $joinMultiplayerWithAddress(
        ::Social::GameConnectionInfo gameConnection,
        bool                         joiningLocalServer,
        ::std::string const&         serverName,
        ::std::string const&         worldName,
        ::NetworkType                networkTypeOverride,
        ::PlayerJoinWorldContext     context
    );

    MCAPI void $joinRemoteServerWithAddress(
        ::Social::GameConnectionInfo gameConnection,
        ::std::string const&         serverName,
        ::std::string const&         worldName,
        ::NetworkType                networkTypeOverride,
        ::PlayerJoinWorldContext     context
    );

    MCAPI bool $isLocalPlayer(::ActorUniqueID const& id) const;

    MCAPI void $setLeaveGameInProgressAsReadyToContinue();

    MCAPI bool $isPrimaryClientInstanceReady() const;

    MCAPI void $ensureAllClientsAreLeaving() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> $getPrimaryClientInstance();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IClientInstance const> $getPrimaryClientInstance() const;

    MCAPI ::ItemRegistryRef $getClientItemRegistry() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem> $getNewPlayerSystem();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem const> $getNewPlayerSystem() const;

    MCAPI ::std::map<::SubClientId, ::std::shared_ptr<::IClientInstance>> const& $getClientInstanceMap() const;

    MCAPI ::std::shared_ptr<::IClientInstance> $tryGetClientInstanceFromPlayerUUID(::mce::UUID const& playerId) const;

    MCAPI uint $getUIRenderClientMask() const;

    MCFOLD uint64 $getClientInstanceCount() const;

    MCAPI void $forEachClientInstance(::std::function<void(::IClientInstance&)> callback);

    MCAPI ::LocalPlayer* $getPrimaryLocalPlayer();

    MCAPI ::LocalPlayer const* $getPrimaryLocalPlayer() const;

    MCAPI bool $isPrimaryLevelCrossPlatformMultiplayer() const;

    MCAPI bool $isPrimaryLevelMultiplayer() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GuiData> $getPrimaryGuiData();

    MCAPI ::std::shared_ptr<::Options> $getPrimaryUserOptions();

    MCAPI ::std::shared_ptr<::Options const> $getPrimaryUserOptions() const;

    MCAPI bool $isPrimaryUserSigninInProgress() const;

    MCAPI void $resetInput();

    MCAPI ::PixelCalc const& $getDpadScale() const;

    MCAPI void $setKeyboardForcedHeight(float height, bool isShowSignal);

    MCAPI bool $canActivateKeyboard();

    MCAPI void $reloadAnimationAndGeometryData(bool sync);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> $getGeometryGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> $getBlockCullingGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ClientBlockPipeline::SchematicsRepository> $getSchematicsRepository() const;

    MCAPI ::ParticleEffectGroup& $getParticleEffectGroup() const;

    MCAPI ::DeferredLighting& $getDeferredLighting() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition> $getContentAcquisition() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> $getOfferRepository() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TrialManager> $getTrialManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PersonaService> $getPersonaService() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> $getGatheringManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::CDNService> $getCDNService() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> $getContentCatalogService() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> $getStoreCatalog() const;

    MCAPI ::ServiceDrivenImageRepository& $getServiceImageRepository() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LibraryRepository> $getLibraryRepository() const;

    MCAPI ::std::shared_ptr<::ActorAnimationGroup> $getActorAnimationGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationControllerGroup> $getActorAnimationControllerGroup() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository const> $getThirdPartyServerRepository() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository> $getThirdPartyServerRepository();

    MCAPI ::std::shared_ptr<::SkinRepository> $getSkinRepository() const;

    MCAPI ::PersonaRepository& $getPersonaRepository() const;

    MCAPI ::MarketplaceServicesManager& $getMarketplaceServicesManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> $getWorldTemplateManager() const;

    MCAPI ::World::WorldSystem& $getWorldSystem() const;

    MCAPI bool $isWorldSystemReady() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsSystem> $getRealmsSystem() const;

    MCAPI ::Social::SocialSystem& $getSocialSystem() const;

    MCAPI ::Bedrock::NonOwnerPointer<::Parties::PartySystem> $getPartySystem() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> $getUIProgressTips() const;

    MCAPI ::IResourcePackRepository& $getResourcePackRepository() const;

    MCFOLD ::ResourcePackManager& $getResourcePackManager() const;

    MCAPI ::ResourcePackManager& $getServerResourcePackManager();

    MCAPI ::PackManifestFactory& $getPackManifestFactory();

    MCAPI ::PlayerMessagingService& $getPlayerMessagingService();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> $getKeyProvider() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider const> $getAccessibilityProvider() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> $getAccessibilityProvider();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> $getContentTierManager() const;

    MCAPI ::PackSourceFactory& $getPackSourceFactory() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> $getResourceLoadManager();

    MCAPI ::ILevelListCache& $getLevelListCache();

    MCAPI bool $hasAllValidCrossPlatformSkin() const;

    MCAPI ::PackDownloadManager& $getPackDownloadManager();

    MCFOLD ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> $getLinkedAssetValidator() const;

    MCFOLD bool $isMultiplayerServiceManagerReady() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> $getMultiplayerServiceManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> $getUserManager() const;

    MCFOLD ::IMinecraftEventing& $getEventing() const;

    MCAPI ::ServerInstance* $getServerInstance();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ServerInstance> $getServerInstanceNonOwnPtr();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ClientNetworkSystem> $getClientNetworkSystemPtr();

    MCFOLD ::ClientNetworkSystem& $getClientNetworkSystem();

    MCFOLD ::ClientNetworkSystem const& $getClientNetworkSystem() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> $getActiveDirectoryIdentity();

    MCAPI void $clearCache();

    MCAPI void $releaseClientSubId(::SubClientId subid);

    MCAPI bool $isStartingGame() const;

    MCAPI bool $isSplitscreenJoinEnabled() const;

    MCAPI bool $canAddSplitscreenSubClient(int controllerId) const;

    MCAPI void $addSubClientInstanceAndAssociateToUser(int controllerId);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> $retrieveCIDToClientMap();

    MCAPI ::Bedrock::PubSub::Subscription
    $registerSplitScreenChangedListener(::std::function<void(uchar)> callback) const;

    MCAPI uchar $getSplitScreenCount() const;

    MCAPI float $calculateScreenSizeToResolutionScalar(int const width, int const height) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GlobalResourcesCrashRecovery const> $GetGlobalResourcesCrashRecovery() const;

    MCAPI bool $isReadyToRender() const;

    MCAPI bool $isShowingLoadingScreen() const;

    MCAPI bool $isRenderingLoadingScreen() const;

    MCAPI void $registerUpsellScreen();

    MCAPI ::SceneFactory& $getPrimarySceneFactory() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> $getMainSceneStack() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $getMainSceneStack();

    MCAPI ::OreUI::Router& $getUIRouter();

    MCAPI ::OreUI::DataProviderManager_DEPRECATED& $getDataProviderManager();

    MCAPI ::std::weak_ptr<::RealmsAPI> $getRealms();

    MCAPI ::Realms::ContentService& $getRealmsContentService();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsServices> $getRealmsServices();

    MCAPI ::std::weak_ptr<::ClubsService> $getClubsService();

    MCAPI ::std::shared_ptr<::Realms::GenericRequestServiceHandler> $getGenericRealmsService();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::SubscriptionService> $getRealmsSubscriptionService();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::PresenceManager> $getPresenceManager();

    MCFOLD ::Bedrock::NonOwnerPointer<::EDUSystems> $getEDUSystems();

    MCFOLD ::Bedrock::NonOwnerPointer<::EDUSystems const> $getEDUSystems() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Minecraft> $getPrimaryMinecraft();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> $getAutomationClient() const;

    MCFOLD bool $isDedicatedServer() const;

    MCFOLD bool $isEduMode() const;

    MCAPI void $onNetworkMaxPlayersChanged(uint newMaxPlayerCount);

    MCFOLD ::IGameModuleApp& $getGameModule();

    MCAPI ::IGameModuleShared& $getGameModuleShared();

    MCAPI void $requestServerShutdown();

    MCAPI void $setTestExecuteCommandCallback(
        ::std::function<void(::TestCommandType, ::std::vector<::std::string> const&, int)> const& callback
    );

    MCAPI void $setTestAssetCommandCallback(
        ::std::function<void(::TestAssetCommandType, ::std::vector<::std::string> const&)> const& callback
    );

    MCAPI void $runTestExecuteCommandCallback(
        ::TestCommandType                   type,
        ::std::vector<::std::string> const& tags,
        int                                 repeatCount
    ) const;

    MCAPI void
    $runTestAssetCommandCallback(::TestAssetCommandType type, ::std::vector<::std::string> const& tags) const;

    MCAPI void $setLaunchedFromLegacyVersion(bool launchedFromLegacyVersion);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> $getFileArchiver() const;

    MCAPI bool $requestInGamePause(::SubClientId const& subClient, bool status);

    MCAPI ::InputMode $getCurrentInputMode() const;

    MCAPI void $handleInputPaneHidden();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelLoader> $getLevelLoader();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager> $getContentManager();

    MCAPI ::IContentManager& $getResourceContentManager();

    MCAPI ::std::string $getMultiplayerDisabledTextTitle(::MultiplayerLockedContext context) const;

    MCAPI ::std::string $getMultiplayerDisabledTextBody(::MultiplayerLockedContext context) const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile> $getExternalServer() const;

    MCAPI ::std::shared_ptr<::mce::TextureGroup> $getTextureGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> $getStoreCacheTextures() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> $getMinecraftGraphics();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas> $getTextureAtlas();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas> $getItemTextureAtlas();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> $getUIRepository() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SeasonsRenderer> $getSeasonsRenderer();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> $getFilePathManager();

    MCAPI void $setUseFontOverrides(bool useOverrides);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> $getFontHandle() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> $getRuneFontHandle() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> $getUnicodeFontHandle() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> $getSmoothFontHandle() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> $getUIFontHandle() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::EmoticonManager const> $getEmoticonManager() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper const> $getTextToIconMapper() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper> $getTextToIconMapper();

    MCFOLD bool $getMouseGrabbed() const;

    MCAPI void $navigateToPlayScreenFriendsTab();

    MCAPI bool $hasActorResourceDefinitionGroup() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> $getActorResourceDefinitionGroup() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup const> $getRenderControllerGroup() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup> $getRenderControllerGroup();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> $getActorResourceDefinitionGroupMutable();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> $getOreUIResourceAllowList();

    MCAPI ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>>
    $requestScreenshot(::ScreenshotOptions& screenshotOptions);

    MCAPI void $onActiveResourcePacksChanged(::ResourcePackManager& mgr);

    MCAPI bool $onFullPackStackInvalid();

    MCAPI void $onLanguageSubpacksChanged();

    MCAPI void $onBaseGamePackDownloadComplete();

    MCAPI void $displayActiveDirectoryLoginDialog();

    MCAPI void $handleReloadUIDefinitions();

    MCAPI void $onPushNotificationReceived(::PushNotificationMessage const& msg);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FlightingService> $getFlightingService() const;

    MCAPI ::std::shared_ptr<::FlightingService> $getFlightingServicePtr() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TreatmentPackDownloadMonitor const> $getTreatmentPackDownloadMonitor() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> $getEntitlementManager();

    MCAPI ::IDlcValidation& $getDlcValidation();

    MCAPI ::ServicesManager& $getServicesManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SunsettingManager> $getSunsettingManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DateManager> $getDateManager() const;

    MCAPI void $grabMouse();

    MCAPI void $releaseMouse();

    MCAPI void $muteAudio();

    MCAPI void $unMuteAudio();

    MCAPI uint64 $generateClientId(
        bool                              forceReset,
        bool&                             generatedNewId,
        uint64                            clientIdModifier,
        ::std::shared_ptr<::Social::User> user
    );

    MCFOLD bool $isHostingLocalDedicatedServer() const;

    MCAPI void $shutdownServer();

    MCAPI void $pauseContentDownloads();

    MCAPI void $resumeContentDownloads();

    MCAPI ::UIMeasureStrategy& $getUIMeasureStrategy();

    MCFOLD void $copyInternalSettingsFolderToExternalLocation() const;

    MCAPI void $onClientLevelExit(::IClientInstance& exitClient, uint exitCode);

    MCAPI void $resetThreadCallbacks();

    MCAPI bool $isInGame() const;

    MCAPI bool $isInServer() const;

    MCAPI bool $isInRealm() const;

    MCAPI void $fadeOutMusic();

    MCAPI bool $isInitialized() const;

    MCFOLD bool $useMinecraftVersionOfXBLUI() const;

    MCAPI int $getMaxPlayerCount() const;

    MCAPI void $setProfilerIsOn(bool val);

    MCAPI void $onPrimaryUserReconnect(::Social::UserPlatformConnectionResult status, bool isUserInitiated);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> $getCubemapBackgroundResources();

    MCAPI void $setAppWillTerminate(bool willTerminate);

    MCAPI ::DeferredTasksManager<::DeferredTaskCategory>& $getDeferredTasks();

    MCFOLD void $onForceCloudSave();

    MCAPI void $onOptionsLoadBegin();

    MCAPI void $onOptionsLoadComplete();

    MCAPI bool $shouldShowRatingsPrompt() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ServerInstanceEventCoordinator> $getServerInstanceEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IApp> $getApp();

    MCAPI bool $getSuspended() const;

    MCAPI bool $isResuming() const;

    MCAPI void $doPrimaryClientReadyWork(::std::function<void()> workFn);

    MCAPI void $doUserManagerReadyWork(::std::function<void()> workFn);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ScreenshotRecorder> $getScreenshotRecorder();

    MCAPI bool $isEditorModeEnabled() const;

    MCAPI ::std::shared_ptr<::ClientBlobCache::Cache> $getClientBlobCache();

    MCAPI ::Bedrock::NonOwnerPointer<::ContentLogFileEndPoint> const $getContentFileLogEndPoint() const;

    MCAPI void $tryShowXblFirstLaunchScreen(bool isUserConnectedToPlatform);

    MCAPI ::std::shared_ptr<void*> $requestMusicDeferment();

    MCAPI bool $isMusicEnabled() const;

    MCAPI void
    $queueCustomMusic(::std::string const& eventName, float volume, float fadeoutSeconds, ::MusicRepeatMode playMode);

    MCAPI void
    $playCustomMusic(::std::string const& eventName, float volume, float fadeoutSeconds, ::MusicRepeatMode playMode);

    MCAPI void $setMusicCommandVolumeMultiplier(float volumeMultiplier);

    MCAPI void $stopCustomMusic(float fadeoutSeconds);

    MCAPI ::EntityContext& $getEntity() const;

    MCAPI ::AppSystemRegistry& $getAppSystemRegistry();

    MCAPI void $onLanguageChanged(::std::string const& code, bool languageSystemInitializing);

    MCFOLD void $onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest);

    MCFOLD void $onLanguagesLoaded();

    MCAPI void $buildTreatmentPackStack(bool fireEvents) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> $getLevelDbEnv();

    MCAPI ::Bedrock::NonOwnerPointer<::ChunkSource> $getClientGenChunkSource(::DimensionType const& dimensionType);

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> $getProfanityContext();

    MCAPI double $getGameUpdateDurationInSeconds() const;

    MCAPI ::std::tuple<bool, int> $GetEcoModeSettings() const;

    MCAPI void $queueSubclientRemoval(::SubClientId subid);

    MCAPI void $logoffAllSubclients();

    MCAPI void $setIsInGame(bool isInGame);

    MCAPI void $createClientItemRegistry();

    MCAPI ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> $getInput() const;

    MCAPI ::std::unique_ptr<::LocalServerLauncher::IGameInterface> $createGameInterface();

    MCAPI ::std::unique_ptr<::LocalServerLauncher::IServerInstanceBuilder> $createServerBuilder();

    MCAPI ::std::unique_ptr<::LocalServerLauncher::GameDependencies> $createGameDependencies();

    MCAPI ::TaskGroup& $_getServerInitTaskGroup();

    MCAPI bool $checkMultiPlayerPermission(::std::optional<::Social::MultiplayerServiceIdentifier> service);

    MCAPI bool $isPlayingLevel() const;

    MCAPI void $initImpl();

    MCAPI void $refocusMouse(bool lostMouse);

    MCAPI void $setMouseType(::Bedrock::Input::PointerType type);

    MCAPI void $onNotify(::edu::auth::CredentialsAcquired const& state);

    MCFOLD void $onNotify(::edu::auth::CredentialsRefreshSuccess const& state);

    MCFOLD void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state);

    MCAPI bool $checkForPiracy() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> $getDevConsoleLogger() const;

    MCAPI void $completeServerStartup(
        ::std::shared_ptr<::LocalServerLauncher::ServerInitData> serverInitData,
        ::LocalServerLauncher::ServerLaunchResult&&              result
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIMultiPlayerServices();

    MCNAPI static void** $vftableForI18nObserver();

    MCNAPI static void** $vftableForIMinecraftApp();

    MCNAPI static void** $vftableForAppExtensionsOwner();

    MCNAPI static void** $vftableForAppPlatformListener();

    MCNAPI static void** $vftableForILocalServerLauncherImpl();

    MCNAPI static void** $vftableForLevelListener();

    MCNAPI static void** $vftableForIGameServerStartup();

    MCNAPI static void** $vftableForOptionsObserver();

    MCNAPI static void** $vftableForIGameEventNotifier();

    MCNAPI static void** $vftableForCredentialsObserver();

    MCNAPI static void** $vftableForISplitScreenChangedPublisher();

    MCNAPI static void** $vftableForIGameServerShutdown();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForIWorldTransfer();

    MCNAPI static void** $vftableForIApp();

    MCNAPI static void** $vftableForResourcePackListener();

    MCNAPI static void** $vftableForIClientInstances();

    MCNAPI static void** $vftableForINetworkGameConnector();

    MCNAPI static void** $vftableForAppIsland();
    // NOLINTEND
};
