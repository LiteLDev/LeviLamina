/**
 * @file  ServerInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Editor.hpp"
#include "Scripting.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerInstance.
 *
 */
class ServerInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERINSTANCE
public:
    class ServerInstance& operator=(class ServerInstance const &) = delete;
    ServerInstance(class ServerInstance const &) = delete;
    ServerInstance() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERINSTANCE
    /**
     * @symbol ?onAppResumed\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onAppResumed();
    /**
     * @symbol ?onAppSuspended\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onAppSuspended();
    /**
     * @symbol ?onCriticalDiskError\@ServerInstance\@\@UEAAX_NAEBW4LevelStorageState\@Core\@\@\@Z
     */
    MCVAPI void onCriticalDiskError(bool, enum class Core::LevelStorageState const &);
    /**
     * @symbol ?onGameModeChanged\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onGameModeChanged();
    /**
     * @symbol ?onGameSessionReset\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onGameSessionReset();
    /**
     * @symbol ?onInternetUpdate\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onInternetUpdate();
    /**
     * @symbol ?onLevelCorrupt\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onLevelCorrupt();
    /**
     * @symbol ?onLevelExit\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onLevelExit();
    /**
     * @symbol ?onLowDiskSpace\@ServerInstance\@\@UEAAX_N\@Z
     */
    MCVAPI void onLowDiskSpace(bool);
    /**
     * @symbol ?onLowMemory\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onLowMemory();
    /**
     * @symbol ?onOutOfDiskSpace\@ServerInstance\@\@UEAAX_N\@Z
     */
    MCVAPI void onOutOfDiskSpace(bool);
    /**
     * @symbol ?onRequestResourceReload\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onRequestResourceReload();
    /**
     * @symbol ?onTick\@ServerInstance\@\@UEAAXHH\@Z
     */
    MCVAPI void onTick(int, int);
    /**
     * @symbol ?updateScreens\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void updateScreens();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerInstance();
#endif
    /**
     * @symbol ??0ServerInstance\@\@QEAA\@AEAVIMinecraftApp\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VServerInstanceEventCoordinator\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI ServerInstance(class IMinecraftApp &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerInstanceEventCoordinator>> const &);
    /**
     * @symbol ?disconnectAllClientsWithMessage\@ServerInstance\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void disconnectAllClientsWithMessage(std::string);
    /**
     * @symbol ?enableItemStackNetManager\@ServerInstance\@\@QEBA_NXZ
     */
    MCAPI bool enableItemStackNetManager() const;
    /**
     * @symbol ?getEditorManager\@ServerInstance\@\@QEBA?AV?$NonOwnerPointer\@VIEditorManager\@Editor\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class Editor::IEditorManager> getEditorManager() const;
    /**
     * @symbol ?getScriptingEngineV2\@ServerInstance\@\@QEAAPEAVScriptEngine\@Scripting\@\@XZ
     */
    MCAPI class Scripting::ScriptEngine * getScriptingEngineV2();
    /**
     * @symbol ?getServerItemRegistry\@ServerInstance\@\@QEBA?AVItemRegistryRef\@\@XZ
     */
    MCAPI class ItemRegistryRef getServerItemRegistry() const;
    /**
     * @symbol ?initializeServer\@ServerInstance\@\@QEAA_NAEAVIMinecraftApp\@\@AEAVAllowList\@\@PEAVPermissionsFile\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VFilePathManager\@Core\@\@\@Bedrock\@\@\@gsl\@\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@9\@55VLevelSettings\@\@H_NUConnectionDefinition\@\@7AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@9\@5AEBVUUID\@mce\@\@AEAVIMinecraftEventing\@\@AEAVIResourcePackRepository\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentTierManager\@\@\@Bedrock\@\@\@6\@AEAVResourcePackManager\@\@V?$function\@$$A6A?AV?$unique_ptr\@VLevelStorage\@\@U?$default_delete\@VLevelStorage\@\@\@std\@\@\@std\@\@AEAVScheduler\@\@\@Z\@9\@V?$unique_ptr\@VLevelLooseFileStorage\@\@U?$default_delete\@VLevelLooseFileStorage\@\@\@std\@\@\@9\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@9\@PEAVLevelData\@\@55V?$unique_ptr\@VEducationOptions\@\@U?$default_delete\@VEducationOptions\@\@\@std\@\@\@9\@PEAVResourcePackManager\@\@V?$function\@$$A6AXXZ\@9\@V?$function\@$$A6AXXZ\@9\@PEAVServerMetrics\@\@PEAVDebugEndPoint\@\@7V?$shared_ptr\@VFileStorageArea\@Core\@\@\@9\@AEBUNetworkSettingOptions\@\@77V?$optional\@UPlayerMovementSettings\@\@\@9\@V?$optional\@UScriptSettings\@\@\@9\@AEBVExperiments\@\@7MV?$optional\@_N\@9\@W4ForceBlockNetworkIdsAreHashes\@\@AEBUNetworkPermissions\@\@V?$not_null\@V?$NonOwnerPointer\@VNetworkSession\@\@\@Bedrock\@\@\@6\@\@Z
     */
    MCAPI bool initializeServer(class IMinecraftApp &, class AllowList &, class PermissionsFile *, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class std::chrono::duration<__int64, struct std::ratio<1, 1>>, std::string, std::string, std::string, class LevelSettings, int, bool, struct ConnectionDefinition, bool, std::vector<std::string> const &, std::string, class mce::UUID const &, class IMinecraftEventing &, class IResourcePackRepository &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const &, class ResourcePackManager &, class std::function<std::unique_ptr<class LevelStorage> (class Scheduler &)>, std::unique_ptr<class LevelLooseFileStorage>, std::string const &, class LevelData *, std::string, std::string, std::unique_ptr<class EducationOptions>, class ResourcePackManager *, class std::function<void (void)>, class std::function<void (void)>, class ServerMetrics *, class DebugEndPoint *, bool, class std::shared_ptr<class Core::FileStorageArea>, struct NetworkSettingOptions const &, bool, bool, class std::optional<struct PlayerMovementSettings>, class std::optional<struct ScriptSettings>, class Experiments const &, bool, float, class std::optional<bool>, enum class ForceBlockNetworkIdsAreHashes, struct NetworkPermissions const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class NetworkSession>>);
    /**
     * @symbol ?leaveGameSync\@ServerInstance\@\@QEAAXXZ
     */
    MCAPI void leaveGameSync();
    /**
     * @symbol ?queueForServerThread\@ServerInstance\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void queueForServerThread(class std::function<void (void)>);
    /**
     * @symbol ?setLevelCorruptionCallback\@ServerInstance\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void setLevelCorruptionCallback(class std::function<void (void)>);
    /**
     * @symbol ?setWakeupFrequency\@ServerInstance\@\@QEAAXH\@Z
     */
    MCAPI void setWakeupFrequency(int);
    /**
     * @symbol ?shutDownWithMessage\@ServerInstance\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void shutDownWithMessage(std::string);
    /**
     * @symbol ?startServerThread\@ServerInstance\@\@QEAAXXZ
     */
    MCAPI void startServerThread();
    /**
     * @symbol ?SERVER_MAX_DELAY_BEFORE_SLOWDOWN\@ServerInstance\@\@2V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@B
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

//private:
    /**
     * @symbol ?_resetServerScriptManager\@ServerInstance\@\@AEAAXXZ
     */
    MCAPI void _resetServerScriptManager();
    /**
     * @symbol ?_threadSafeExecute\@ServerInstance\@\@AEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void _threadSafeExecute(class std::function<void (void)>);
    /**
     * @symbol ?_update\@ServerInstance\@\@AEAAXXZ
     */
    MCAPI void _update();
    /**
     * @symbol ?_useClientSideChunkGeneration\@ServerInstance\@\@AEBA_NPEAVLevelData\@\@\@Z
     */
    MCAPI bool _useClientSideChunkGeneration(class LevelData *) const;

private:

};
