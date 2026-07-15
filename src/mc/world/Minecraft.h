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
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/MinecraftArguments.h"

// auto generated forward declare list
// clang-format off
class DefaultCommandsContextProvider;
class EntityContext;
class EntityRegistry;
class Experiments;
class FileArchiver;
class GameCallbacks;
class GameModuleServer;
class GameSession;
class GameTestLevelListener;
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
class ServerNetworkHandler;
class StructureManager;
class TextFilteringProcessor;
class Timer;
struct ConnectionDefinition;
struct MinecraftArguments;
struct NetworkServerConfig;
struct PackIdVersion;
struct ServerNetworkHandlerDependencies;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
class ServerMetrics;
// clang-format on

class Minecraft : public ::IEntityRegistryOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GameCallbacks&>                                    mGameCallbacks;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                               mEventing;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackManager>>            mResourceLoader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StructureManager>>               mStructureManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameModuleServer>>              mGameModuleServer;
    ::ll::TypedStorage<8, 8, ::PermissionsFile*>                                  mPermissionsFile;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PrivateKeyManager>>              mServerKeys;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftServiceKeyManager>>     mMinecraftServiceKeys;
    ::ll::TypedStorage<8, 32, ::std::string const>                                mSaveGamePath;
    ::ll::TypedStorage<8, 8, ::ServerMetrics*>                                    mServerMetrics;
    ::ll::TypedStorage<1, 1, bool const>                                          mIsDedicatedServer;
    ::ll::TypedStorage<1, 1, bool>                                                mCorruptionDetected;
    ::ll::TypedStorage<1, 1, bool>                                                mFireOnLevelCorrupt;
    ::ll::TypedStorage<8, 8, double>                                              mFrameDuration;
    ::ll::TypedStorage<8, 8, double>                                              mLastFrameStart;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                              mMaxPlayerIdleTime;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DefaultCommandsContextProvider>> mDefaultCommandsContextProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftCommands>>              mCommands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameSession>>                    mGameSession;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameTestLevelListener>>          mGameTestLevelListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftGameTest>>              mGameTest;
    ::ll::TypedStorage<8, 8, ::Timer&>                                            mSimTimer;
    ::ll::TypedStorage<8, 8, ::Timer&>                                            mRealTimer;
    ::ll::TypedStorage<8, 16, ::ClientOrServerNetworkSystemRef>                   mNetwork;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                     mPacketSender;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                       mClientSubId;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::EntityRegistry>>>      mEntityRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ITickingSystem>>                 mAddMovementTickForCatchup;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::Publisher<void(::Level*), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
                                                                         mLevelSubscribers;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void() const>> mRequestServerShutdown;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::ServerNetworkHandler>(::MinecraftArguments::CreateServerNetworkHandlerArgs&&)>>
        mCreateServerNetworkHandler;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::Bedrock::NotNullNonOwnerPtr<::FileArchiver>() const>>
        mGetFileArchiver;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::MinecraftCommands>(::MinecraftArguments::CreateMinecraftCommandsArgs&&) const>>
        mCreateMinecraftCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    Minecraft& operator=(Minecraft const&);
    Minecraft(Minecraft const&);
    Minecraft();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Minecraft() /*override*/ = default;

    virtual void setSimTimePause(bool);

    virtual void setSimTimeScale(float);

    virtual bool getSimPaused() const;

    virtual bool isOnlineClient() const;

    virtual ::StackRefResult<::EntityRegistry> getEntityRegistry() /*override*/;

    virtual ::StackRefResult<::EntityRegistry const> getEntityRegistry() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Minecraft(::MinecraftArguments&& args);

    MCAPI void configureGameTest(::Level& level, ::Experiments const& experiments);

    MCAPI void disconnectClient(::NetworkIdentifier const& id, ::Connection::DisconnectFailReason disconnectReason);

    MCAPI ::Bedrock::NonOwnerPointer<::ServerNetworkHandler> getServerNetworkHandler();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager();

    MCAPI bool hostMultiplayer(
        ::std::string const&                                                 serverName,
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::std::string const&                                                 hostPublicKey,
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

    MCFOLD void init();

    MCFOLD void initAsDedicatedServer();

    MCAPI void initCommands();

#ifdef LL_PLAT_C
    MCAPI void onClientCreatedLevel(::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity);

    MCAPI ::Bedrock::PubSub::Subscription registerLevelListener(::std::function<void(::Level*)> callback) const;

    MCAPI void resetGameSession();

    MCAPI void startClientGame(::std::unique_ptr<::NetEventCallback> legacyClientNetworkHandler);
#endif

    MCAPI void startLeaveGame(bool stopNetwork);

    MCAPI bool update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftArguments&& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
