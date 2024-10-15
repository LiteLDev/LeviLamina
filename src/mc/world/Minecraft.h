#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/ClientOrServerNetworkSystemRef.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/gamerefs_entity/IEntityRegistryOwner.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace mce { class UUID; }
// clang-format on

class Minecraft : public ::IEntityRegistryOwner {
public:
    // from https://github.com/EndstoneMC/endstone/blob/main/include/bedrock/world/minecraft.h
    class GameCallbacks&                               mGameCallbacks;         // this+0x18
    class IMinecraftEventing&                          mEventing;              // this+0x20
    std::unique_ptr<class ResourcePackManager>         mResourceLoader;        // this+0x28
    std::unique_ptr<class StructureManager>            mStructureManager;      // this+0x30
    std::shared_ptr<class GameModuleServer>            mGameModuleServer;      // this+0x38
    class AllowList&                                   mAllowList;             // this+0x48
    class PermissionsFile*                             mPermissionsFile;       // this+0x50
    std::unique_ptr<class PrivateKeyManager>           mServerKeys;            // this+0x58
    std::string const                                  mSaveGamePath;          // this+0x60
    Bedrock::NotNullNonOwnerPtr<Core::FilePathManager> mFilePathManager;       // this+0x80
    class ServerMetrics*                               mServerMetrics;         // this+0x90
    bool                                               mCorruptionDetected;    // this+0x98
    bool                                               mFireOnLevelCorrupt;    // this+0x99
    double                                             mFrameDuration;         // this+0xa0
    double                                             mLastFrameStart;        // this+0xa8
    std::chrono::seconds                               mMaxPlayerIdleTime;     // this+0xb0
    std::unique_ptr<class MinecraftCommands>           mCommands;              // this+0xb8
    std::unique_ptr<class GameSession>                 mGameSession;           // this+0xc0
    std::unique_ptr<class GameTestLevelListener>       mGameTestLevelListener; // this+0xc8
    std::unique_ptr<class MinecraftGameTest>           mGameTest;              // this+0xd0
    class Timer&                                       mSimTimer;              // this+0xd8
    class Timer&                                       mRealTimer;             // this+0xe0
    ClientOrServerNetworkSystemRef                     mNetwork;               // this+0xe8
    class PacketSender&                                mPacketSender;          // this+0xf0
    class IMinecraftApp&                               mApp;                   // this+0xf8
    SubClientId                                        mClientSubId;           // this+0x100
    OwnerPtr<class EntityRegistry>                     mEntityRegistry;        // this+0x108

    // prevent constructor by default
    Minecraft& operator=(Minecraft const&);
    Minecraft(Minecraft const&);
    Minecraft();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Minecraft();

    // vIndex: 1
    virtual class StackRefResult<class EntityRegistry> getEntityRegistry();

    // vIndex: 2
    virtual class StackRefResult<class EntityRegistry const> getEntityRegistry() const;

    // vIndex: 3
    virtual void setSimTimePause(bool pause);

    // vIndex: 4
    virtual void setSimTimeScale(float scale);

    // vIndex: 5
    virtual bool getSimPaused() const;

    // vIndex: 6
    virtual bool isOnlineClient() const;

    MCAPI Minecraft(
        class IMinecraftApp&                                                app,
        class GameCallbacks&                                                gameCallbacks,
        class AllowList&                                                    allowList,
        class PermissionsFile*                                              permissionsFile,
        Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&     filePathManager,
        std::chrono::seconds                                                maxPlayerIdleTime,
        class IMinecraftEventing&                                           eventing,
        class ClientOrServerNetworkSystemRef                                network,
        class PacketSender&                                                 packetSender,
        ::SubClientId                                                       clientSubId,
        class Timer&                                                        simTimer,
        class Timer&                                                        realTimer,
        Bedrock::NotNullNonOwnerPtr<class IContentTierManager const> const& contentTierManager,
        class ServerMetrics*                                                serverMetrics
    );

    MCAPI void activateAllowList();

    MCAPI void configureGameTest(class Level& level, class Experiments const& experiments);

    MCAPI void disconnectClient(
        class NetworkIdentifier const&     id,
        ::Connection::DisconnectFailReason discoReason,
        std::string const&                 reasonMessage
    );

    MCAPI void earlyShutdownMainthread();

    MCAPI class ClientNetworkSystem& getClientNetworkSystem();

    MCAPI class MinecraftCommands& getCommands();

    MCAPI class IMinecraftEventing& getEventing() const;

    MCAPI class GameModuleServer& getGameModuleServer();

    MCAPI class optional_ref<class MinecraftGameTest> getGameTest();

    MCAPI double getLastTimestep();

    MCAPI class Level* getLevel() const;

    MCAPI class ResourcePackManager& getResourceLoader();

    MCAPI class Bedrock::NonOwnerPointer<class ServerNetworkHandler> getServerNetworkHandler();

    MCAPI class ServerNetworkSystem& getServerNetworkSystem();

    MCAPI Bedrock::NotNullNonOwnerPtr<class StructureManager> getStructureManager();

    MCAPI bool hasCommands();

    MCAPI bool hostMultiplayer(
        std::string const&                                                           serverName,
        std::pair<std::unique_ptr<class Level>, class OwnerPtr<class EntityContext>> levelEntity,
        class Player*                                                                localPlayer,
        class mce::UUID const&                                                       localPlayerId,
        std::unique_ptr<class NetEventCallback>                                      clientNetworkHandler,
        int                                                                          maxChunkRadius,
        bool                                                                         shouldAnnounce,
        bool                                                                         requireTrustedAuthentication,
        std::vector<std::string> const&                                              extraTrustedKeys,
        std::string                                                                  serverType,
        struct ConnectionDefinition const&                                           connectionDefinition,
        std::unordered_map<struct PackIdVersion, std::string> const&                 packIdToContentKey,
        class Scheduler&                                                             scheduler,
        class TextFilteringProcessor*                                                textFilteringProcessor,
        struct NetworkPermissions const&                                             networkPermissions
    );

    MCAPI void init();

    MCAPI void initAsDedicatedServer();

    MCAPI bool isDedicatedServer() const;

    MCAPI bool isLeaveGameDone() const;

    MCAPI void requestResourceReload();

    MCAPI void requestServerShutdown(std::string const& message);

    MCAPI void startLeaveGame(bool stopNetwork);

    MCAPI bool update();

    MCAPI static void _tryCatchupMovementTicks(class EntitySystems& entitySystems, class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _tryCatchupMovementTicks();

    MCAPI void tickSimtime(int nTick, int maxTick);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class IMinecraftApp&                                                app,
        class GameCallbacks&                                                gameCallbacks,
        class AllowList&                                                    allowList,
        class PermissionsFile*                                              permissionsFile,
        Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&     filePathManager,
        std::chrono::seconds                                                maxPlayerIdleTime,
        class IMinecraftEventing&                                           eventing,
        class ClientOrServerNetworkSystemRef                                network,
        class PacketSender&                                                 packetSender,
        ::SubClientId                                                       clientSubId,
        class Timer&                                                        simTimer,
        class Timer&                                                        realTimer,
        Bedrock::NotNullNonOwnerPtr<class IContentTierManager const> const& contentTierManager,
        class ServerMetrics*                                                serverMetrics
    );

    MCAPI void dtor$();

    MCAPI class StackRefResult<class EntityRegistry> getEntityRegistry$();

    MCAPI class StackRefResult<class EntityRegistry const> getEntityRegistry$() const;

    MCAPI bool getSimPaused$() const;

    MCAPI bool isOnlineClient$() const;

    MCAPI void setSimTimePause$(bool pause);

    MCAPI void setSimTimeScale$(float scale);

    // NOLINTEND
};
