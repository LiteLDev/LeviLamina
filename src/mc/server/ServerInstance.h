#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/deps/core/LevelStorageState.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/ForceBlockNetworkIdsAreHashes.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace Core { class FileStorageArea; }
namespace Editor { class IEditorManager; }
namespace Scripting { class ScriptEngine; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

class ServerInstance {
public:
    // prevent constructor by default
    ServerInstance& operator=(ServerInstance const&);
    ServerInstance(ServerInstance const&);
    ServerInstance();

public:
    // NOLINTBEGIN
    MCVAPI void onAppResumed();

    MCVAPI void onAppSuspended();

    MCVAPI void onCriticalDiskError(bool bSet, ::Core::LevelStorageState const& errorCode);

    MCVAPI void onCriticalScriptError(char const*, char const*);

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

    MCAPI bool
    initializeServer(class IMinecraftApp&, class AllowList&, class PermissionsFile*, Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&, std::chrono::seconds, std::string, std::string, std::string, class LevelSettings, int, bool, struct ConnectionDefinition, bool, std::vector<std::string> const&, std::string, class mce::UUID const&, class IMinecraftEventing&, Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository> const&, Bedrock::NotNullNonOwnerPtr<class IContentTierManager const> const&, class ResourcePackManager&, std::function<class OwnerPtr<class LevelStorage>(class Scheduler&)>, std::string const&, class LevelData*, std::string, std::string, std::string, std::string, std::string, std::unique_ptr<class EducationOptions>, class ResourcePackManager*, std::function<void()>, std::function<void()>, class ServerMetrics*, class DebugEndPoint*, bool, std::shared_ptr<class Core::FileStorageArea>, struct NetworkSettingOptions const&, bool, bool, bool, std::optional<struct PlayerMovementSettings>, std::optional<struct ScriptSettings>, class Experiments const&, bool, float, std::optional<bool>, ::ForceBlockNetworkIdsAreHashes, struct NetworkPermissions const&, Bedrock::NotNullNonOwnerPtr<class NetworkSessionOwner>, class Bedrock::NonOwnerPointer<class CDNConfig>, struct cereal::ReflectionCtx&, class Bedrock::NonOwnerPointer<class ServerTextSettings>);

    MCAPI bool isRealmsStoriesEnabled() const;

    MCAPI void leaveGameSync();

    MCAPI void queueForServerThread(std::function<void()> command);

    MCAPI void setScriptWatchdogCriticalErrorCallback(std::function<void(char const*)>);

    MCAPI void setUnrecoverableErrorCallback(std::function<void(char const*, char const*)>);

    MCAPI void setWakeupFrequency(int hertz);

    MCAPI void startServerThread();

    MCAPI static bool forceOffClientChunkGeneration(class LevelData&);

    MCAPI static std::chrono::nanoseconds const SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _resetServerScriptManager();

    MCAPI void _threadSafeExecute(std::function<void()> command);

    MCAPI void _update();

    MCAPI bool _useClientSideChunkGeneration(class LevelData* levelData) const;

    // NOLINTEND
};
