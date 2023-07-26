#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace Core { class FileStorageArea; }
namespace Core { enum class LevelStorageState; }
namespace Editor { class IEditorManager; }
namespace Scripting { class ScriptEngine; }
namespace mce { class UUID; }
// clang-format on

class ServerInstance {

public:
    // prevent constructor by default
    ServerInstance& operator=(ServerInstance const&) = delete;
    ServerInstance(ServerInstance const&)            = delete;
    ServerInstance()                                 = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERINSTANCE
    /**
     * @symbol ?onAppResumed\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onAppResumed(); // NOLINT
    /**
     * @symbol ?onAppSuspended\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onAppSuspended(); // NOLINT
    /**
     * @symbol ?onCriticalDiskError\@ServerInstance\@\@UEAAX_NAEBW4LevelStorageState\@Core\@\@\@Z
     */
    MCVAPI void onCriticalDiskError(bool, enum class Core::LevelStorageState const&); // NOLINT
    /**
     * @symbol ?onGameModeChanged\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onGameModeChanged(); // NOLINT
    /**
     * @symbol ?onGameSessionReset\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onGameSessionReset(); // NOLINT
    /**
     * @symbol ?onInternetUpdate\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onInternetUpdate(); // NOLINT
    /**
     * @symbol ?onLevelCorrupt\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onLevelCorrupt(); // NOLINT
    /**
     * @symbol ?onLevelExit\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onLevelExit(); // NOLINT
    /**
     * @symbol ?onLowDiskSpace\@ServerInstance\@\@UEAAX_N\@Z
     */
    MCVAPI void onLowDiskSpace(bool); // NOLINT
    /**
     * @symbol ?onLowMemory\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onLowMemory(); // NOLINT
    /**
     * @symbol ?onOutOfDiskSpace\@ServerInstance\@\@UEAAX_N\@Z
     */
    MCVAPI void onOutOfDiskSpace(bool); // NOLINT
    /**
     * @symbol ?onRequestResourceReload\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onRequestResourceReload(); // NOLINT
    /**
     * @symbol ?onTick\@ServerInstance\@\@UEAAXHH\@Z
     */
    MCVAPI void onTick(int, int); // NOLINT
    /**
     * @symbol ?updateScreens\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void updateScreens(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerInstance(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ServerInstance\@\@QEAA\@AEAVIMinecraftApp\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VServerInstanceEventCoordinator\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI
    ServerInstance(class IMinecraftApp&, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerInstanceEventCoordinator>> const&); // NOLINT
    /**
     * @symbol
     * ?disconnectAllClientsWithMessage\@ServerInstance\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void disconnectAllClientsWithMessage(std::string); // NOLINT
    /**
     * @symbol ?enableItemStackNetManager\@ServerInstance\@\@QEBA_NXZ
     */
    MCAPI bool enableItemStackNetManager() const; // NOLINT
    /**
     * @symbol ?getEditorManager\@ServerInstance\@\@QEBA?AV?$NonOwnerPointer\@VIEditorManager\@Editor\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class Editor::IEditorManager> getEditorManager() const; // NOLINT
    /**
     * @symbol ?getScriptManager\@ServerInstance\@\@QEAAPEAVServerScriptManager\@\@XZ
     */
    MCAPI class ServerScriptManager* getScriptManager(); // NOLINT
    /**
     * @symbol ?getScriptingEngineV2\@ServerInstance\@\@QEAAPEAVScriptEngine\@Scripting\@\@XZ
     */
    MCAPI class Scripting::ScriptEngine* getScriptingEngineV2(); // NOLINT
    /**
     * @symbol ?getServerItemRegistry\@ServerInstance\@\@QEBA?AVItemRegistryRef\@\@XZ
     */
    MCAPI class ItemRegistryRef getServerItemRegistry() const; // NOLINT
    /**
     * @symbol
     * ?initializeServer\@ServerInstance\@\@QEAA_NAEAVIMinecraftApp\@\@AEAVAllowList\@\@PEAVPermissionsFile\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VFilePathManager\@Core\@\@\@Bedrock\@\@\@gsl\@\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@9\@55VLevelSettings\@\@H_NUConnectionDefinition\@\@7AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@9\@5AEBVUUID\@mce\@\@AEAVIMinecraftEventing\@\@AEAVIResourcePackRepository\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentTierManager\@\@\@Bedrock\@\@\@6\@AEAVResourcePackManager\@\@V?$function\@$$A6A?AV?$OwnerPtrT\@U?$SharePtrRefTraits\@VLevelStorage\@\@\@\@\@\@AEAVScheduler\@\@\@Z\@9\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@9\@PEAVLevelData\@\@55V?$unique_ptr\@VEducationOptions\@\@U?$default_delete\@VEducationOptions\@\@\@std\@\@\@9\@PEAVResourcePackManager\@\@V?$function\@$$A6AXXZ\@9\@V?$function\@$$A6AXXZ\@9\@PEAVServerMetrics\@\@PEAVDebugEndPoint\@\@7V?$shared_ptr\@VFileStorageArea\@Core\@\@\@9\@AEBUNetworkSettingOptions\@\@777V?$optional\@UPlayerMovementSettings\@\@\@9\@V?$optional\@UScriptSettings\@\@\@9\@AEBVExperiments\@\@7MV?$optional\@_N\@9\@W4ForceBlockNetworkIdsAreHashes\@\@AEBUNetworkPermissions\@\@V?$not_null\@V?$NonOwnerPointer\@VNetworkSessionOwner\@\@\@Bedrock\@\@\@6\@\@Z
     */
    MCAPI bool
    initializeServer(class IMinecraftApp&, class AllowList&, class PermissionsFile*, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const&, class std::chrono::duration<__int64, struct std::ratio<1, 1>>, std::string, std::string, std::string, class LevelSettings, int, bool, struct ConnectionDefinition, bool, std::vector<std::string> const&, std::string, class mce::UUID const&, class IMinecraftEventing&, class IResourcePackRepository&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const&, class ResourcePackManager&, class std::function<class OwnerPtrT<struct SharePtrRefTraits<class LevelStorage>>(class Scheduler&)>, std::string const&, class LevelData*, std::string, std::string, std::unique_ptr<class EducationOptions>, class ResourcePackManager*, class std::function<void(void)>, class std::function<void(void)>, class ServerMetrics*, class DebugEndPoint*, bool, class std::shared_ptr<class Core::FileStorageArea>, struct NetworkSettingOptions const&, bool, bool, bool, class std::optional<struct PlayerMovementSettings>, class std::optional<struct ScriptSettings>, class Experiments const&, bool, float, class std::optional<bool>, enum class ForceBlockNetworkIdsAreHashes, struct NetworkPermissions const&, class gsl::not_null<class Bedrock::NonOwnerPointer<class NetworkSessionOwner>>); // NOLINT
    /**
     * @symbol ?isRealmsStoriesEnabled\@ServerInstance\@\@QEBA_NXZ
     */
    MCAPI bool isRealmsStoriesEnabled() const; // NOLINT
    /**
     * @symbol ?leaveGameSync\@ServerInstance\@\@QEAAXXZ
     */
    MCAPI void leaveGameSync(); // NOLINT
    /**
     * @symbol ?queueForServerThread\@ServerInstance\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void queueForServerThread(class std::function<void(void)>); // NOLINT
    /**
     * @symbol ?setLevelCorruptionCallback\@ServerInstance\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void setLevelCorruptionCallback(class std::function<void(void)>); // NOLINT
    /**
     * @symbol ?setWakeupFrequency\@ServerInstance\@\@QEAAXH\@Z
     */
    MCAPI void setWakeupFrequency(int); // NOLINT
    /**
     * @symbol
     * ?shutDownWithMessage\@ServerInstance\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void shutDownWithMessage(std::string); // NOLINT
    /**
     * @symbol ?startServerThread\@ServerInstance\@\@QEAAXXZ
     */
    MCAPI void startServerThread(); // NOLINT
    /**
     * @symbol
     * ?SERVER_MAX_DELAY_BEFORE_SLOWDOWN\@ServerInstance\@\@2V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@B
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const
        SERVER_MAX_DELAY_BEFORE_SLOWDOWN; // NOLINT

    // private:
    /**
     * @symbol ?_resetServerScriptManager\@ServerInstance\@\@AEAAXXZ
     */
    MCAPI void _resetServerScriptManager(); // NOLINT
    /**
     * @symbol ?_threadSafeExecute\@ServerInstance\@\@AEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void _threadSafeExecute(class std::function<void(void)>); // NOLINT
    /**
     * @symbol ?_update\@ServerInstance\@\@AEAAXXZ
     */
    MCAPI void _update(); // NOLINT
    /**
     * @symbol ?_useClientSideChunkGeneration\@ServerInstance\@\@AEBA_NPEAVLevelData\@\@\@Z
     */
    MCAPI bool _useClientSideChunkGeneration(class LevelData*) const; // NOLINT

private:
};
