#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/AppPlatformListener.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/GameCallbacks.h"
#include "mc/world/Minecraft.h"

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/ForceBlockNetworkIdsAreHashes.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace Core { class FileStorageArea; }
namespace Editor { class IEditorManager; }
namespace Scripting { class ScriptEngine; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

class IMinecraftApp;
class ServerInstanceEventCoordinator;

class ServerInstance : public ::Bedrock::EnableNonOwnerReferences,
                       public ::AppPlatformListener,
                       public ::GameCallbacks,
                       public ::Core::StorageAreaStateListener {
public:
    std::chrono::steady_clock::time_point mLastSyncTime;
    IMinecraftApp const&                  mApp;
    std::unique_ptr<Minecraft>            mMinecraft;
    // other...

    // prevent constructor by default
    ServerInstance& operator=(ServerInstance const&);
    ServerInstance(ServerInstance const&);
    ServerInstance();

public:
    // NOLINTBEGIN
    MCVAPI void onAppResumed();

    MCVAPI void onAppSuspended();

    MCVAPI void onCriticalDiskError(bool bSet, ::Core::LevelStorageState const& errorCode);

    MCVAPI void onCriticalScriptError(char const* clientDisconnectMessage, char const* logMessage);

    MCVAPI void onGameModeChanged();

    MCVAPI void onGameSessionReset();

    MCVAPI void onInternetUpdate();

    MCVAPI void onLevelCorrupt();

    MCVAPI void onLevelExit();

    MCVAPI void onLowDiskSpace(bool bSet);

    MCVAPI void onLowMemory();

    MCVAPI void onOutOfDiskSpace(bool bSet);

    MCVAPI void onRequestResourceReload();

    MCVAPI void onTick(int nTick, int maxTick);

    MCVAPI void updateScreens();

    MCVAPI ~ServerInstance();

    MCAPI ServerInstance(
        class IMinecraftApp&                                                     app,
        Bedrock::NotNullNonOwnerPtr<class ServerInstanceEventCoordinator> const& coordinator
    );

    MCAPI void disconnectAllClientsWithMessage(std::string msg);

    MCAPI bool enableItemStackNetManager() const;

    MCAPI class Bedrock::NonOwnerPointer<class CDNConfig> getCDNConfig() const;

    MCAPI class Bedrock::NonOwnerPointer<class Editor::IEditorManager> getEditorManager() const;

    MCAPI class ServerScriptManager* getScriptManager();

    MCAPI class Scripting::ScriptEngine* getScriptingEngine();

    MCAPI class ItemRegistryRef getServerItemRegistry() const;

    MCAPI class Bedrock::NonOwnerPointer<class ServerTextSettings> getServerTextSettings() const;

    MCAPI bool initializeServer(
        class IMinecraftApp&                                                app,
        class AllowList&                                                    allowList,
        class PermissionsFile*                                              permissionsFile,
        Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&     pathManager,
        std::chrono::seconds                                                maxPlayerIdleTime,
        std::string                                                         levelId,
        std::string                                                         levelName,
        std::string                                                         serverName,
        class LevelSettings                                                 levelSettings,
        int                                                                 maxChunkRadius,
        bool                                                                shouldAnnounce,
        struct ConnectionDefinition                                         connectionDefinition,
        bool                                                                requireTrustedAuthentication,
        std::vector<std::string> const&                                     extraTrustedKeys,
        std::string                                                         serverType,
        class mce::UUID const&                                              localPlayerId,
        class IMinecraftEventing&                                           eventing,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository> const&   resourcePackRepository,
        Bedrock::NotNullNonOwnerPtr<class IContentTierManager const> const& contentTierManager,
        class ResourcePackManager&                                          clientResourcePackManager,
        std::function<class OwnerPtr<class LevelStorage>(class Scheduler&)> createLevelStorageCallback,
        std::string const&                                                  basePath,
        class LevelData*                                                    levelData,
        std::string                                                         playerSafetyServiceTextProcessorConfig,
        std::string                                                         serverId,
        std::string                                                         applicationId,
        std::string                                                         applicationSecret,
        std::string                                                         applicationTenantId,
        std::unique_ptr<class EducationOptions>                             educationOptions,
        class ResourcePackManager*                                          localServerResourcePackManager,
        std::function<void()>                                               criticalSaveCallback,
        std::function<void()>                                               compactionCallback,
        class ServerMetrics*                                                serverMetrics,
        class DebugEndPoint*                                                debugEndPoint,
        bool                                                                enableWorldSessionEndPoint,
        std::shared_ptr<class Core::FileStorageArea>                        storageAreaForLevel,
        struct NetworkSettingOptions const&                                 networkSettings,
        bool                                                                enableItemStackNetManager,
        bool                                                                enableItemTransactionLogger,
        bool                                                                enableRealmsStories,
        std::optional<struct PlayerMovementSettings>                        playerMovementSettings,
        std::optional<struct ScriptSettings>                                scriptSettings,
        class Experiments const&                                            levelExperiments,
        bool                                                                isServerVisibleToLanDiscovery,
        float                                                               worldSizeMB,
        std::optional<bool>                                                 clientSideGenerationEnabled,
        ::ForceBlockNetworkIdsAreHashes                                     blockNetworkIdsAreHashes,
        struct NetworkPermissions const&                                    networkPermissions,
        Bedrock::NotNullNonOwnerPtr<class NetworkSessionOwner>              networkSessionOwner,
        class Bedrock::NonOwnerPointer<class CDNConfig>                     cdnConfig,
        struct cereal::ReflectionCtx&                                       ctx,
        class Bedrock::NonOwnerPointer<class ServerTextSettings>            serverTextSettings
    );

    MCAPI bool isRealmsStoriesEnabled() const;

    MCAPI void leaveGameSync();

    MCAPI void startLeaveGame();

    MCAPI void queueForServerThread(std::function<void()> command);

    MCAPI void setScriptWatchdogCriticalErrorCallback(std::function<void(char const*)>);

    MCAPI void setUnrecoverableErrorCallback(std::function<void(char const*, char const*)>);

    MCAPI void setWakeupFrequency(int hertz);

    MCAPI void startServerThread();

    MCAPI static bool forceOffClientChunkGeneration(class LevelData& levelData);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _resetServerScriptManager();

    MCAPI void _threadSafeExecute(std::function<void()> command);

    MCAPI void _update();

    MCAPI bool _useClientSideChunkGeneration(class LevelData* levelData) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForAppPlatformListener();

    MCAPI static void** vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** vftableForCoreStorageAreaStateListener();

    MCAPI static void** vftableForGameCallbacks();

    MCAPI void* ctor$(
        class IMinecraftApp&                                                     app,
        Bedrock::NotNullNonOwnerPtr<class ServerInstanceEventCoordinator> const& coordinator
    );

    MCAPI void dtor$();

    MCAPI void onAppResumed$();

    MCAPI void onAppSuspended$();

    MCAPI void onCriticalDiskError$(bool bSet, ::Core::LevelStorageState const& errorCode);

    MCAPI void onCriticalScriptError$(char const* clientDisconnectMessage, char const* logMessage);

    MCAPI void onGameModeChanged$();

    MCAPI void onGameSessionReset$();

    MCAPI void onInternetUpdate$();

    MCAPI void onLevelCorrupt$();

    MCAPI void onLevelExit$();

    MCAPI void onLowDiskSpace$(bool bSet);

    MCAPI void onLowMemory$();

    MCAPI void onOutOfDiskSpace$(bool bSet);

    MCAPI void onRequestResourceReload$();

    MCAPI void onTick$(int nTick, int maxTick);

    MCAPI void updateScreens$();

    MCAPI static std::chrono::nanoseconds const& SERVER_MAX_DELAY_BEFORE_SLOWDOWN();

    // NOLINTEND
};
