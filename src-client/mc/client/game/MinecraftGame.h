#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/client/game/DeferredTaskCategory.h"
#include "mc/client/game/IMinecraftGame.h"
#include "mc/client/game/IMultiPlayerServices.h"
#include "mc/client/game/StartIntent.h"
#include "mc/client/game/local_server_launcher/ILocalServerLauncherImpl.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/options/OptionsObserver.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/common/App.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/DeferredTasksManager.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/PointerType.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/NetworkType.h"
#include "mc/locale/I18nObserver.h"
#include "mc/platform/MultiplayerLockedContext.h"
#include "mc/resources/ResourcePackListener.h"
#include "mc/sound/MusicRepeatMode.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class ActorResourceDefinitionGroup;
class AppSystemRegistry;
class BlockCullingGroup;
class ChunkSource;
class ClientNetworkSystem;
class ClubsService;
class ContentAcquisition;
class ContentCatalogService;
class ContentIdentity;
class ContentLogFileEndPoint;
class CubemapBackgroundResources;
class DateManager;
class DeferredLighting;
class DevConsoleLogger;
class EDUSystems;
class EmoticonManager;
class EntityContext;
class ExternalContentManager;
class FileArchiver;
class FlightingService;
class FontRepository;
class GameRenderer;
class GatheringManager;
class GeometryGroup;
class GlobalResourcesCrashRecovery;
class GuiData;
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
class IGameModuleShared;
class ILevelListCache;
class IMinecraftEventing;
class IOfferRepository;
class IResourcePackRepository;
class ISceneStack;
class ITextBoxController;
class IThirdPartyServerRepository;
class IUIDefRepository;
class IUIRepository;
class ItemRegistryRef;
class LevelDbEnv;
class LevelLoader;
class LevelSettings;
class LibraryRepository;
class LinkedAssetValidator;
class LocalPlayer;
class MarketplaceServicesManager;
class Minecraft;
class MinecraftGraphics;
class MinecraftInputHandler;
class MusicManager;
class NewPlayerSystem;
class OptionRegistry;
class PackDownloadManager;
class PackManifest;
class PackManifestFactory;
class PackSourceFactory;
class ParticleEffectGroup;
class PersonaRepository;
class PersonaService;
class PixelCalc;
class Player;
class PlayerMessagingService;
class ProfanityContext;
class PushNotificationMessage;
class RealmsAPI;
class RenderControllerGroup;
class ResetCallbackObject;
class ResourceLoadManager;
class ResourcePackManager;
class SceneFactory;
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
class TaskGroup;
class TextToIconMapper;
class TextureAtlas;
class TreatmentPackDownloadMonitor;
class TrialManager;
class UIMeasureStrategy;
class Vec3;
class WorldTemplateManager;
class WorldTransferAgent;
struct ActorUniqueID;
struct ControllerIDtoClientMap;
struct DimensionType;
struct ExperienceConnectionData;
struct ExternalWorldTransferActionFunc;
struct GameConnectionInfoEx;
struct LocalWorldTransferActionFunc;
struct PlayerJoinWorldContext;
struct RealmTransferActionFunc;
struct ScreenshotOptions;
namespace Automation { class AutomationClient; }
namespace Bedrock { class ActivationArguments; }
namespace Bedrock::PubSub { class Subscription; }
namespace ClientBlockPipeline { class SchematicsRepository; }
namespace Core { class FilePathManager; }
namespace LocalServerLauncher { class IGameInterface; }
namespace LocalServerLauncher { class IServerInstanceBuilder; }
namespace LocalServerLauncher { struct GameDependencies; }
namespace LocalServerLauncher { struct ServerInitData; }
namespace LocalServerLauncher { struct ServerLaunchResult; }
namespace OreUI { class DataProviderManager_DEPRECATED; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class Router; }
namespace Parties { class PartySystem; }
namespace Progress { class ProgressTips; }
namespace Realms { class ContentService; }
namespace Realms { class GenericRequestServiceHandler; }
namespace Realms { class RealmsServices; }
namespace Realms { class RealmsSystem; }
namespace Realms { class SubscriptionService; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerGameInfo; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class PresenceManager; }
namespace Social { class SocialSystem; }
namespace Social { class User; }
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
    struct TestCommandPublisher;
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

    struct TestCommandPublisher {};

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
    ::ll::UntypedStorage<8, 8>   mUnk18dd91;
    ::ll::UntypedStorage<8, 8>   mUnke812cf;
    ::ll::UntypedStorage<8, 8>   mUnk102e50;
    ::ll::UntypedStorage<8, 8>   mUnkd0fa73;
    ::ll::UntypedStorage<8, 8>   mUnk30cf6e;
    ::ll::UntypedStorage<1, 1>   mUnk73dd14;
    ::ll::UntypedStorage<8, 16>  mUnke052b6;
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
    ::ll::UntypedStorage<8, 8>   mUnkcc0494;
    ::ll::UntypedStorage<8, 8>   mUnkc32677;
    ::ll::UntypedStorage<8, 8>   mUnkfb38cb;
    ::ll::UntypedStorage<1, 1>   mUnk2d6ae9;
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
    ::ll::UntypedStorage<8, 8>   mUnk6585d8;
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
    ::ll::UntypedStorage<8, 8>   mUnk585275;
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
    ::ll::UntypedStorage<8, 744> mUnk9947a0;
    ::ll::UntypedStorage<8, 16>  mUnkbf42d0;
    ::ll::UntypedStorage<8, 16>  mUnk469d3c;
    ::ll::UntypedStorage<8, 8>   mUnkf245c7;
    ::ll::UntypedStorage<8, 64>  mUnk30b039;
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
    ::ll::UntypedStorage<8, 8>   mUnk3dc5d4;
    ::ll::UntypedStorage<8, 8>   mUnk6622a0;
    ::ll::UntypedStorage<8, 16>  mUnke27718;
    ::ll::UntypedStorage<8, 16>  mUnk9599c5;
    ::ll::UntypedStorage<8, 8>   mUnk1498bc;
    ::ll::UntypedStorage<8, 16>  mUnkc84d4d;
    ::ll::UntypedStorage<8, 8>   mUnk44d437;
    ::ll::UntypedStorage<8, 8>   mUnk7757ed;
    ::ll::UntypedStorage<8, 8>   mUnk8b5a69;
    ::ll::UntypedStorage<8, 16>  mUnk8a114f;
    ::ll::UntypedStorage<8, 8>   mUnk2c648f;
    ::ll::UntypedStorage<8, 8>   mUnkef66f4;
    ::ll::UntypedStorage<8, 8>   mUnk5cb7cc;
    ::ll::UntypedStorage<8, 456> mUnke5c301;
    ::ll::UntypedStorage<8, 8>   mUnkd18639;
    ::ll::UntypedStorage<8, 8>   mUnk67d5dd;
    ::ll::UntypedStorage<8, 8>   mUnkc0bd78;
    ::ll::UntypedStorage<8, 8>   mUnk8ac119;
    ::ll::UntypedStorage<8, 16>  mUnkddfaa0;
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
    ::ll::UntypedStorage<8, 680> mUnkbfced1;
    ::ll::UntypedStorage<8, 16>  mUnka3a452;
    ::ll::UntypedStorage<8, 8>   mUnk7f0a19;
    ::ll::UntypedStorage<8, 16>  mUnk968b3f;
    ::ll::UntypedStorage<8, 8>   mUnk67f34e;
    ::ll::UntypedStorage<8, 8>   mUnkc456b9;
    ::ll::UntypedStorage<8, 8>   mUnk804e62;
    ::ll::UntypedStorage<8, 8>   mUnk92ee4c;
    ::ll::UntypedStorage<8, 8>   mUnke4e7c9;
    ::ll::UntypedStorage<8, 8>   mUnk5e4634;
    ::ll::UntypedStorage<8, 64>  mUnk12c89f;
    ::ll::UntypedStorage<8, 16>  mUnk42b15f;
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

    virtual ~MinecraftGame() /*override*/ = default;

    virtual bool stop() /*override*/;

    virtual void processActivationArguments(::Bedrock::ActivationArguments const&) /*override*/;

    virtual void audioEngineOn() /*override*/;

    virtual void audioEngineOff() /*override*/;

    virtual void update() /*override*/;

    virtual void play(::std::string const&, ::Vec3 const&, float, float) /*override*/;

    virtual void playUI(::std::string const&, float, float) /*override*/;

    virtual void stopSound(::std::string const&) /*override*/;

    virtual void stopSounds() /*override*/;

    virtual void setUISizeAndScale(int, int, float) /*override*/;

    virtual void setRenderingSize(int, int) /*override*/;

    virtual void recalculateScene() /*override*/;

    virtual void setSmoothFontStyle() /*override*/;

    virtual void setUIFontStyle() /*override*/;

    virtual ::Bedrock::Threading::Async<void> startLocalServerAsync(
        ::std::string const&,
        ::std::string const&,
        ::ContentIdentity const&,
        ::LevelSettings const&,
        ::StartIntent
    ) /*override*/;

    virtual void createAndUploadWorldToRealm(
        ::std::string const&,
        ::std::string const&,
        ::ContentIdentity const&,
        ::LevelSettings const&,
        ::Realms::World,
        ::std::function<void(::Realms::World)>
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
            ::Realms::RealmId>> const&
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

    virtual void onOperationModeChanged(::OperationMode operationMode) /*override*/;

    virtual bool hasNetworkPrivileges(bool) /*override*/;

    virtual void onPlayerLoaded(::IClientInstance&, ::Player&) /*override*/;

    virtual void onDimensionChanged() /*override*/;

    virtual void setDisableInputForAllOtherClients(int, bool) /*override*/;

    virtual void onGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual void playerListChanged() /*override*/;

    virtual void onLevelDestruction(::std::string const&) /*override*/;

    virtual void setWorldTransferAction(
        ::std::variant<
            ::LocalWorldTransferActionFunc,
            ::ExternalWorldTransferActionFunc,
            ::RealmTransferActionFunc,
            ::std::monostate>&&
    ) /*override*/;

    virtual ::std::variant<
        ::LocalWorldTransferActionFunc,
        ::ExternalWorldTransferActionFunc,
        ::RealmTransferActionFunc,
        ::std::monostate> const&
    getWorldTransferAction() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const /*override*/;

    virtual void setIsWorldTransferInProgress(bool) /*override*/;

    virtual bool isWorldTransferInProgress() const /*override*/;

    virtual void setResetCallbackObject(::ResetCallbackObject*) /*override*/;

    virtual void requestLeaveGame(bool, bool) /*override*/;

    virtual void requestLeaveThenJoinFriendsWorld(::std::string_view) /*override*/;

    virtual void startLeaveGame() /*override*/;

    virtual bool isLeaveGameDone() const /*override*/;

    virtual void destroyGame() /*override*/;

    virtual void setupCommandParser(::IClientInstance&) /*override*/;

    virtual void onClientCreatedLevel(::IClientInstance&) /*override*/;

    virtual ::GameRenderer& getGameRenderer() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository> getUIDefRepo() const /*override*/;

    virtual void
    joinRealmsGame(::Realms::World const&, ::Social::GameConnectionInfo const&, ::PlayerJoinWorldContext) /*override*/;

    virtual void joinRealmFromInvite(::Realms::World const&) /*override*/;

    virtual void joinRealmFromConnectLink(::Realms::World const&, ::PlayerJoinWorldContext) /*override*/;

    virtual void setRealmsLoadingLink(bool) /*override*/;

    virtual void
    joinRealm(::Realms::World const&, ::IMinecraftEventing::RealmConnectionFlow, ::PlayerJoinWorldContext) /*override*/;

    virtual ::Bedrock::Threading::Async<void>
    joinMultiplayerGame(::Social::MultiplayerGameInfo const&, ::PlayerJoinWorldContext) /*override*/;

    virtual void joinMultiplayerWithAddress(
        ::Social::GameConnectionInfo,
        bool,
        ::std::string const&,
        ::std::string const&,
        ::NetworkType,
        ::std::shared_ptr<bool>,
        ::PlayerJoinWorldContext
    ) /*override*/;

    virtual void joinRemoteServerWithAddress(
        ::Social::GameConnectionInfo,
        ::std::string const&,
        ::std::string const&,
        ::NetworkType,
        ::std::shared_ptr<bool>,
        ::PlayerJoinWorldContext
    ) /*override*/;

    virtual bool isLocalPlayer(::ActorUniqueID const&) const /*override*/;

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

    virtual ::std::shared_ptr<::IClientInstance> tryGetClientInstanceFromPlayerUUID(::mce::UUID const&) const
        /*override*/;

    virtual uint getUIRenderClientMask() const /*override*/;

    virtual uint64 getClientInstanceCount() const /*override*/;

    virtual void forEachClientInstance(::std::function<void(::IClientInstance&)>) /*override*/;

    virtual ::LocalPlayer* getPrimaryLocalPlayer() /*override*/;

    virtual ::LocalPlayer const* getPrimaryLocalPlayer() const /*override*/;

    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const /*override*/;

    virtual bool isPrimaryLevelMultiplayer() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getPrimaryGuiData() /*override*/;

    virtual ::std::shared_ptr<::OptionRegistry> getPrimaryUserOptions() /*override*/;

    virtual ::std::shared_ptr<::OptionRegistry const> getPrimaryUserOptions() const /*override*/;

    virtual bool isPrimaryUserSigninInProgress() const /*override*/;

    virtual void resetInput() /*override*/;

    virtual ::PixelCalc const& getDpadScale() const /*override*/;

    virtual void setKeyboardForcedHeight(float, bool) /*override*/;

    virtual bool canActivateKeyboard() /*override*/;

    virtual void reloadAnimationAndGeometryData(bool) /*override*/;

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

    virtual void releaseClientSubId(::SubClientId) /*override*/;

    virtual bool isStartingGame() const /*override*/;

    virtual bool isSplitscreenJoinEnabled() const /*override*/;

    virtual bool canAddSplitscreenSubClient(int) const /*override*/;

    virtual void addSubClientInstanceAndAssociateToUser(int) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> retrieveCIDToClientMap() /*override*/;

    virtual ::Bedrock::PubSub::Subscription registerSplitScreenChangedListener(::std::function<void(uchar)>) const
        /*override*/;

    virtual uchar getSplitScreenCount() const /*override*/;

    virtual float calculateScreenSizeToResolutionScalar(int const, int const) const /*override*/;

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

    virtual void onNetworkMaxPlayersChanged(uint) /*override*/;

    virtual ::IGameModuleApp& getGameModule() /*override*/;

    virtual ::IGameModuleShared& getGameModuleShared() /*override*/;

    virtual void requestServerShutdown() /*override*/;

    virtual void setLaunchedFromLegacyVersion(bool) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> getFileArchiver() const /*override*/;

    virtual bool requestInGamePause(::SubClientId const&, bool) /*override*/;

    virtual ::InputMode getCurrentInputMode() const /*override*/;

    virtual void handleInputPaneHidden() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelLoader> getLevelLoader() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager> getContentManager() /*override*/;

    virtual ::IContentManager& getResourceContentManager() /*override*/;

    virtual ::std::string getMultiplayerDisabledTextTitle(::MultiplayerLockedContext) const /*override*/;

    virtual ::std::string getMultiplayerDisabledTextBody(::MultiplayerLockedContext) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile> getExternalServer() const /*override*/;

    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> getStoreCacheTextures() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> getMinecraftGraphics() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas> getTextureAtlas() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> getUIRepository() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SeasonsRenderer> getSeasonsRenderer() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> getFilePathManager() /*override*/;

    virtual void setUseFontOverrides(bool) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontRepository const> getFontRepository() const /*override*/;

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
    requestScreenshot(::ScreenshotOptions&) /*override*/;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) /*override*/;

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

    virtual uint64 generateClientId(bool, bool&, uint64, ::std::shared_ptr<::Social::User>) /*override*/;

    virtual bool isHostingLocalDedicatedServer() const /*override*/;

    virtual void shutdownServer() /*override*/;

    virtual void pauseContentDownloads() /*override*/;

    virtual void resumeContentDownloads() /*override*/;

    virtual ::UIMeasureStrategy& getUIMeasureStrategy() /*override*/;

    virtual void copyInternalSettingsFolderToExternalLocation() const /*override*/;

    virtual void onClientLevelExit(::IClientInstance&, uint) /*override*/;

    virtual void resetThreadCallbacks() /*override*/;

    virtual bool isInGame() const /*override*/;

    virtual bool isInServer() const /*override*/;

    virtual bool isInRealm() const /*override*/;

    virtual void fadeOutMusic() /*override*/;

    virtual bool isInitialized() const /*override*/;

    virtual bool useMinecraftVersionOfXBLUI() const /*override*/;

    virtual int getMaxPlayerCount() const /*override*/;

    virtual void setProfilerIsOn(bool) /*override*/;

    virtual void onPrimaryUserReconnect(::Social::UserPlatformConnectionResult, bool) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> getCubemapBackgroundResources() /*override*/;

    virtual void setAppWillTerminate(bool) /*override*/;

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

    virtual void doPrimaryClientReadyWork(::std::function<void()>) /*override*/;

    virtual void doUserManagerReadyWork(::std::function<void()>) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ScreenshotRecorder> getScreenshotRecorder() /*override*/;

    virtual bool isEditorModeEnabled() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ContentLogFileEndPoint> const getContentFileLogEndPoint() const /*override*/;

    virtual bool isMusicEnabled() const /*override*/;

    virtual void queueCustomMusic(::std::string const&, float, float, ::MusicRepeatMode) /*override*/;

    virtual void playCustomMusic(::std::string const&, float, float, ::MusicRepeatMode) /*override*/;

    virtual void setMusicCommandVolumeMultiplier(float) /*override*/;

    virtual void stopCustomMusic(float) /*override*/;

    virtual ::EntityContext& getEntity() const /*override*/;

    virtual ::AppSystemRegistry& getAppSystemRegistry() /*override*/;

    virtual void onLanguageChanged(::std::string const&, bool) /*override*/;

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&) /*override*/;

    virtual void onLanguagesLoaded() /*override*/;

    virtual void buildTreatmentPackStack(bool) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> getLevelDbEnv() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ChunkSource> getClientGenChunkSource(::DimensionType const&) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> getProfanityContext() /*override*/;

    virtual double getGameUpdateDurationInSeconds() const /*override*/;

    virtual void queueSubclientRemoval(::SubClientId) /*override*/;

    virtual void logoffAllSubclients() /*override*/;

    virtual void setIsInGame(bool) /*override*/;

    virtual void createClientItemRegistry() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getInput() const /*override*/;

    virtual ::std::unique_ptr<::LocalServerLauncher::IGameInterface> createGameInterface() /*override*/;

    virtual ::std::unique_ptr<::LocalServerLauncher::IServerInstanceBuilder> createServerBuilder() /*override*/;

    virtual ::std::unique_ptr<::LocalServerLauncher::GameDependencies> createGameDependencies() /*override*/;

    virtual ::TaskGroup& _getServerInitTaskGroup() /*override*/;

    virtual bool checkMultiPlayerPermission(::std::optional<::Social::MultiplayerServiceIdentifier>) /*override*/;

    virtual bool isPlayingLevel() const /*override*/;

    virtual void initImpl() /*override*/;

    virtual void refocusMouse(bool) /*override*/;

    virtual void setMouseType(::Bedrock::Input::PointerType) /*override*/;

    virtual void onNotify(::edu::auth::CredentialsAcquired const& state) /*override*/;

    virtual void onNotify(::edu::auth::CredentialsRefreshSuccess const& state) /*override*/;

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state) /*override*/;

    virtual bool checkForPiracy() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const /*override*/;

    virtual void completeServerStartup(
        ::std::shared_ptr<::LocalServerLauncher::ServerInitData>,
        ::LocalServerLauncher::ServerLaunchResult&&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
