#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/ecs/gamerefs_entity/IEntityRegistryOwner.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/network/ClientOrServerNetworkSystemRef.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class AllowList;
class DefaultCommandsContextProvider;
class EntityContext;
class EntityRegistry;
class EntitySystems;
class Experiments;
class GameCallbacks;
class GameModuleServer;
class GameSession;
class GameTestLevelListener;
class IContentTierManager;
class IMinecraftApp;
class IMinecraftEventing;
class ITickingSystem;
class Level;
class MinecraftCommands;
class MinecraftGameTest;
class MinecraftServiceKeyManager;
class NetEventCallback;
class NetworkIdentifier;
class PacketSender;
class PermissionsFile;
class PrivateKeyManager;
class ResourcePackManager;
class Scheduler;
class ScriptPackSettingsCache;
class ServerMetrics;
class ServerNetworkHandler;
class ServerNetworkSystem;
class StructureManager;
class TextFilteringProcessor;
class Timer;
struct ConnectionDefinition;
struct NetworkServerConfig;
struct PackIdVersion;
struct ServerNetworkHandlerDependencies;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Core { class FilePathManager; }
namespace mce { class UUID; }
// clang-format on

class Minecraft : public ::IEntityRegistryOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GameCallbacks&>                                        mGameCallbacks;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                   mEventing;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackManager>>                mResourceLoader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StructureManager>>                   mStructureManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameModuleServer>>                  mGameModuleServer;
    ::ll::TypedStorage<8, 8, ::AllowList&>                                            mAllowList;
    ::ll::TypedStorage<8, 8, ::PermissionsFile*>                                      mPermissionsFile;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PrivateKeyManager>>                  mServerKeys;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftServiceKeyManager>>         mMinecraftServiceKeys;
    ::ll::TypedStorage<8, 32, ::std::string const>                                    mSaveGamePath;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>> mFilePathManager;
    ::ll::TypedStorage<8, 8, ::ServerMetrics*>                                        mServerMetrics;
    ::ll::TypedStorage<1, 1, bool>                                                    mCorruptionDetected;
    ::ll::TypedStorage<1, 1, bool>                                                    mFireOnLevelCorrupt;
    ::ll::TypedStorage<8, 8, double>                                                  mFrameDuration;
    ::ll::TypedStorage<8, 8, double>                                                  mLastFrameStart;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                                  mMaxPlayerIdleTime;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DefaultCommandsContextProvider>>     mDefaultCommandsContextProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftCommands>>                  mCommands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameSession>>                        mGameSession;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameTestLevelListener>>              mGameTestLevelListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftGameTest>>                  mGameTest;
    ::ll::TypedStorage<8, 8, ::Timer&>                                                mSimTimer;
    ::ll::TypedStorage<8, 8, ::Timer&>                                                mRealTimer;
    ::ll::TypedStorage<8, 16, ::ClientOrServerNetworkSystemRef>                       mNetwork;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                         mPacketSender;
    ::ll::TypedStorage<8, 8, ::IMinecraftApp&>                                        mApp;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                           mClientSubId;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::EntityRegistry>>                           mEntityRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ITickingSystem>>                     mAddMovementTickForCatchup;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::Publisher<void(::Level*), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
        mLevelSubscribers;
    // NOLINTEND

public:
    // prevent constructor by default
    Minecraft& operator=(Minecraft const&);
    Minecraft(Minecraft const&);
    Minecraft();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Minecraft() /*override*/;

    virtual void setSimTimePause(bool pause);

    virtual void setSimTimeScale(float scale);

    virtual bool getSimPaused() const;

    virtual bool isOnlineClient() const;

    virtual ::StackRefResult<::EntityRegistry> getEntityRegistry() /*override*/;

    virtual ::StackRefResult<::EntityRegistry const> getEntityRegistry() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Minecraft(
        ::IMinecraftApp&                                                  app,
        ::GameCallbacks&                                                  gameCallbacks,
        ::AllowList&                                                      allowList,
        ::PermissionsFile*                                                permissionsFile,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&     filePathManager,
        ::std::chrono::seconds                                            maxPlayerIdleTime,
        ::IMinecraftEventing&                                             eventing,
        ::ClientOrServerNetworkSystemRef                                  network,
        ::PacketSender&                                                   packetSender,
        ::SubClientId                                                     clientSubId,
        ::Timer&                                                          simTimer,
        ::Timer&                                                          realTimer,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        ::ServerMetrics*                                                  serverMetrics
    );

    MCAPI void _tryCatchupMovementTicks();

    MCAPI_S void activateAllowList();

    MCAPI void configureGameTest(::Level& level, ::Experiments const& experiments);

    MCAPI void disconnectClient(::NetworkIdentifier const& id, ::Connection::DisconnectFailReason disconnectReason);

    MCAPI ::Level* getLevel() const;

    MCAPI_C ::Bedrock::NonOwnerPointer<::NetEventCallback> getNetEventCallback();

    MCAPI ::Bedrock::NonOwnerPointer<::ServerNetworkHandler> getServerNetworkHandler();

    MCAPI ::ServerNetworkSystem& getServerNetworkSystem();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager();

    MCAPI bool hostMultiplayer(
        ::std::string const&                                                 serverName,
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::mce::UUID const&                                                   localPlayerId,
        ::std::unique_ptr<::NetEventCallback>                                clientNetworkHandler,
        int                                                                  maxChunkRadius,
        bool                                                                 shouldAnnounce,
        ::ConnectionDefinition const&                                        connectionDefinition,
        ::std::unordered_map<::PackIdVersion, ::std::string> const&          packIdToContentKey,
        ::Scheduler&                                                         scheduler,
        ::TextFilteringProcessor*                                            textFilteringProcessor,
        ::NetworkServerConfig const&                                         packetHandlerConfig,
        ::std::shared_ptr<::ScriptPackSettingsCache>                         packSettingsCache,
        ::ServerNetworkHandlerDependencies&&                                 serverNetworkOptions
    );

    MCAPI void init();

    MCAPI void initCommands();

    MCAPI_C ::Bedrock::PubSub::Subscription registerLevelListener(::std::function<void(::Level*)> callback) const;

    MCAPI_C bool requestInGamePause(bool status);

    MCAPI_C void resetGameSession();

    MCAPI void setupServerCommands(::std::string const& networkCommands, ::std::string const& networkTestCommands);

    MCAPI_C void startClientGame(::std::unique_ptr<::NetEventCallback> legacyClientNetworkHandler);

    MCAPI void startLeaveGame(bool stopNetwork);

    MCAPI void tickSimtime(int nTick, int maxTick);

    MCAPI bool update();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tryCatchupMovementTicks(
        ::EntitySystems&                     entitySystems,
        ::EntityRegistry&                    registry,
        ::std::unique_ptr<::ITickingSystem>& addMovementTickForCatchup
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IMinecraftApp&                                                  app,
        ::GameCallbacks&                                                  gameCallbacks,
        ::AllowList&                                                      allowList,
        ::PermissionsFile*                                                permissionsFile,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&     filePathManager,
        ::std::chrono::seconds                                            maxPlayerIdleTime,
        ::IMinecraftEventing&                                             eventing,
        ::ClientOrServerNetworkSystemRef                                  network,
        ::PacketSender&                                                   packetSender,
        ::SubClientId                                                     clientSubId,
        ::Timer&                                                          simTimer,
        ::Timer&                                                          realTimer,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        ::ServerMetrics*                                                  serverMetrics
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
    MCAPI void $setSimTimePause(bool pause);

    MCAPI void $setSimTimeScale(float scale);

    MCAPI bool $getSimPaused() const;

    MCAPI bool $isOnlineClient() const;

    MCFOLD ::StackRefResult<::EntityRegistry> $getEntityRegistry();

    MCFOLD ::StackRefResult<::EntityRegistry const> $getEntityRegistry() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
