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
     * @hash   -1165189084
     * @symbol  ?onAppResumed\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onAppResumed();
    /**
     * @hash   105141112
     * @symbol  ?onAppSuspended\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onAppSuspended();
    /**
     * @hash   -1481950507
     * @symbol  ?onCriticalDiskError\@ServerInstance\@\@UEAAX_NAEBW4LevelStorageState\@Core\@\@\@Z
     */
    MCVAPI void onCriticalDiskError(bool, enum class Core::LevelStorageState const &);
    /**
     * @hash   2127578479
     * @symbol  ?onGameModeChanged\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onGameModeChanged();
    /**
     * @hash   -558306695
     * @symbol  ?onGameSessionReset\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onGameSessionReset();
    /**
     * @hash   -1986916200
     * @symbol  ?onInternetUpdate\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onInternetUpdate();
    /**
     * @hash   1889881079
     * @symbol  ?onLevelCorrupt\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onLevelCorrupt();
    /**
     * @hash   -431711342
     * @symbol  ?onLevelExit\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onLevelExit();
    /**
     * @hash   1820660281
     * @symbol  ?onLowDiskSpace\@ServerInstance\@\@UEAAX_N\@Z
     */
    MCVAPI void onLowDiskSpace(bool);
    /**
     * @hash   714120661
     * @symbol  ?onLowMemory\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onLowMemory();
    /**
     * @hash   315976970
     * @symbol  ?onOutOfDiskSpace\@ServerInstance\@\@UEAAX_N\@Z
     */
    MCVAPI void onOutOfDiskSpace(bool);
    /**
     * @hash   -2011103562
     * @symbol  ?onRequestResourceReload\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void onRequestResourceReload();
    /**
     * @hash   -689001333
     * @symbol  ?onTick\@ServerInstance\@\@UEAAXHH\@Z
     */
    MCVAPI void onTick(int, int);
    /**
     * @hash   700902989
     * @symbol  ?updateScreens\@ServerInstance\@\@UEAAXXZ
     */
    MCVAPI void updateScreens();
    /**
     * @hash   414772116
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~ServerInstance();
#endif
    /**
     * @hash   -1221650716
     * @symbol  ??0ServerInstance\@\@QEAA\@AEAVIMinecraftApp\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VServerInstanceEventCoordinator\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI ServerInstance(class IMinecraftApp &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerInstanceEventCoordinator>> const &);
    /**
     * @hash   1374901104
     * @symbol  ?disconnectAllClientsWithMessage\@ServerInstance\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void disconnectAllClientsWithMessage(std::string);
    /**
     * @hash   -1510886908
     * @symbol  ?enableItemStackNetManager\@ServerInstance\@\@QEBA_NXZ
     */
    MCAPI bool enableItemStackNetManager() const;
    /**
     * @symbol  ?getEditorManager\@ServerInstance\@\@QEBA?AV?$NonOwnerPointer\@VIEditorManager\@Editor\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class Editor::IEditorManager> getEditorManager() const;
    /**
     * @hash   769396445
     * @symbol  ?getScriptingEngineV2\@ServerInstance\@\@QEAAPEAVScriptEngine\@Scripting\@\@XZ
     */
    MCAPI class Scripting::ScriptEngine * getScriptingEngineV2();
    /**
     * @hash   -1328599234
     * @symbol  ?getServerItemRegistry\@ServerInstance\@\@QEBA?AVItemRegistryRef\@\@XZ
     */
    MCAPI class ItemRegistryRef getServerItemRegistry() const;
    /**
     * @hash   -1379469762
     * @symbol  ?initializeServer\@ServerInstance\@\@QEAA_NAEAVIMinecraftApp\@\@AEAVAllowList\@\@PEAVPermissionsFile\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VFilePathManager\@Core\@\@\@Bedrock\@\@\@gsl\@\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@9\@55VLevelSettings\@\@H_NUConnectionDefinition\@\@7AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@9\@5AEBVUUID\@mce\@\@AEAVIMinecraftEventing\@\@AEAVIResourcePackRepository\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentTierManager\@\@\@Bedrock\@\@\@6\@AEAVResourcePackManager\@\@V?$function\@$$A6A?AV?$unique_ptr\@VLevelStorage\@\@U?$default_delete\@VLevelStorage\@\@\@std\@\@\@std\@\@AEAVScheduler\@\@\@Z\@9\@V?$unique_ptr\@VLevelLooseFileStorage\@\@U?$default_delete\@VLevelLooseFileStorage\@\@\@std\@\@\@9\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@9\@PEAVLevelData\@\@55V?$unique_ptr\@VEducationOptions\@\@U?$default_delete\@VEducationOptions\@\@\@std\@\@\@9\@PEAVResourcePackManager\@\@V?$function\@$$A6AXXZ\@9\@V?$function\@$$A6AXXZ\@9\@PEAVServerMetrics\@\@PEAVDebugEndPoint\@\@7V?$shared_ptr\@VFileStorageArea\@Core\@\@\@9\@AEBUNetworkSettingOptions\@\@77V?$optional\@UPlayerMovementSettings\@\@\@9\@V?$optional\@UScriptSettings\@\@\@9\@AEBVExperiments\@\@W4TransportLayer\@\@7MV?$optional\@_N\@9\@\@Z
     */
    MCAPI bool initializeServer(class IMinecraftApp &, class AllowList &, class PermissionsFile *, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class std::chrono::duration<__int64, struct std::ratio<1, 1>>, std::string, std::string, std::string, class LevelSettings, int, bool, struct ConnectionDefinition, bool, std::vector<std::string> const &, std::string, class mce::UUID const &, class IMinecraftEventing &, class IResourcePackRepository &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const &, class ResourcePackManager &, class std::function<std::unique_ptr<class LevelStorage> (class Scheduler &)>, std::unique_ptr<class LevelLooseFileStorage>, std::string const &, class LevelData *, std::string, std::string, std::unique_ptr<class EducationOptions>, class ResourcePackManager *, class std::function<void (void)>, class std::function<void (void)>, class ServerMetrics *, class DebugEndPoint *, bool, class std::shared_ptr<class Core::FileStorageArea>, struct NetworkSettingOptions const &, bool, bool, class std::optional<struct PlayerMovementSettings>, class std::optional<struct ScriptSettings>, class Experiments const &, enum class TransportLayer, bool, float, class std::optional<bool>);
    /**
     * @hash   668654147
     * @symbol  ?leaveGameSync\@ServerInstance\@\@QEAAXXZ
     */
    MCAPI void leaveGameSync();
    /**
     * @hash   976864526
     * @symbol  ?queueForServerThread\@ServerInstance\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void queueForServerThread(class std::function<void (void)>);
    /**
     * @symbol  ?setLevelCorruptionCallback\@ServerInstance\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void setLevelCorruptionCallback(class std::function<void (void)>);
    /**
     * @hash   -1390898666
     * @symbol  ?setWakeupFrequency\@ServerInstance\@\@QEAAXH\@Z
     */
    MCAPI void setWakeupFrequency(int);
    /**
     * @hash   1518877366
     * @symbol  ?shutDownWithMessage\@ServerInstance\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void shutDownWithMessage(std::string);
    /**
     * @hash   538681971
     * @symbol  ?startServerThread\@ServerInstance\@\@QEAAXXZ
     */
    MCAPI void startServerThread();
    /**
     * @hash   19917842
     * @symbol  ?SERVER_MAX_DELAY_BEFORE_SLOWDOWN\@ServerInstance\@\@2V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@B
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

//private:
    /**
     * @hash   584071626
     * @symbol  ?_threadSafeExecute\@ServerInstance\@\@AEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void _threadSafeExecute(class std::function<void (void)>);
    /**
     * @hash   -1164380500
     * @symbol  ?_update\@ServerInstance\@\@AEAAXXZ
     */
    MCAPI void _update();

private:

};