/**
 * @file  ServerInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
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
     * @hash   -595908060
     * @symbol ?onAppResumed@ServerInstance@@UEAAXXZ
     */
    MCVAPI void onAppResumed();
    /**
     * @hash   674452888
     * @symbol ?onAppSuspended@ServerInstance@@UEAAXXZ
     */
    MCVAPI void onAppSuspended();
    /**
     * @hash   -912607979
     * @symbol ?onCriticalDiskError@ServerInstance@@UEAAX_NAEBW4LevelStorageState@Core@@@Z
     */
    MCVAPI void onCriticalDiskError(bool, enum Core::LevelStorageState const &);
    /**
     * @hash   2035691503
     * @symbol ?onGameModeChanged@ServerInstance@@UEAAXXZ
     */
    MCVAPI void onGameModeChanged();
    /**
     * @hash   -650193671
     * @symbol ?onGameSessionReset@ServerInstance@@UEAAXXZ
     */
    MCVAPI void onGameSessionReset();
    /**
     * @hash   -2078803176
     * @symbol ?onInternetUpdate@ServerInstance@@UEAAXXZ
     */
    MCVAPI void onInternetUpdate();
    /**
     * @hash   -1835728313
     * @symbol ?onLevelCorrupt@ServerInstance@@UEAAXXZ
     */
    MCVAPI void onLevelCorrupt();
    /**
     * @hash   -523598318
     * @symbol ?onLevelExit@ServerInstance@@UEAAXXZ
     */
    MCVAPI void onLevelExit();
    /**
     * @hash   -1904995239
     * @symbol ?onLowDiskSpace@ServerInstance@@UEAAX_N@Z
     */
    MCVAPI void onLowDiskSpace(bool);
    /**
     * @hash   1283463189
     * @symbol ?onLowMemory@ServerInstance@@UEAAXXZ
     */
    MCVAPI void onLowMemory();
    /**
     * @hash   885350250
     * @symbol ?onOutOfDiskSpace@ServerInstance@@UEAAX_N@Z
     */
    MCVAPI void onOutOfDiskSpace(bool);
    /**
     * @hash   -1441699530
     * @symbol ?onRequestResourceReload@ServerInstance@@UEAAXXZ
     */
    MCVAPI void onRequestResourceReload();
    /**
     * @hash   -780888309
     * @symbol ?onTick@ServerInstance@@UEAAXHH@Z
     */
    MCVAPI void onTick(int, int);
    /**
     * @hash   609016013
     * @symbol ?updateScreens@ServerInstance@@UEAAXXZ
     */
    MCVAPI void updateScreens();
    /**
     * @hash   985867508
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerInstance();
#endif
    /**
     * @hash   -650878220
     * @symbol ??0ServerInstance@@QEAA@AEAVIMinecraftApp@@AEBV?$not_null@V?$NonOwnerPointer@VServerInstanceEventCoordinator@@@Bedrock@@@gsl@@@Z
     */
    MCAPI ServerInstance(class IMinecraftApp &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerInstanceEventCoordinator>> const &);
    /**
     * @hash   1944874048
     * @symbol ?disconnectAllClientsWithMessage@ServerInstance@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void disconnectAllClientsWithMessage(std::string);
    /**
     * @hash   -940913964
     * @symbol ?enableItemStackNetManager@ServerInstance@@QEBA_NXZ
     */
    MCAPI bool enableItemStackNetManager() const;
    /**
     * @symbol ?getServerItemRegistry@ServerInstance@@QEBA?AVItemRegistryRef@@XZ
     */
    MCAPI class ItemRegistryRef getServerItemRegistry() const;
    /**
     * @symbol ?initializeServer@ServerInstance@@QEAA_NAEAVIMinecraftApp@@AEAVAllowList@@PEAVPermissionsFile@@AEBV?$not_null@V?$NonOwnerPointer@VFilePathManager@Core@@@Bedrock@@@gsl@@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@9@55VLevelSettings@@H_NUConnectionDefinition@@7AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@9@5AEBVUUID@mce@@AEAVIMinecraftEventing@@AEAVIResourcePackRepository@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentTierManager@@@Bedrock@@@6@AEAVResourcePackManager@@V?$function@$$A6A?AV?$unique_ptr@VLevelStorage@@U?$default_delete@VLevelStorage@@@std@@@std@@AEAVScheduler@@@Z@9@V?$unique_ptr@VLevelLooseFileStorage@@U?$default_delete@VLevelLooseFileStorage@@@std@@@9@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@9@PEAVLevelData@@55V?$unique_ptr@VEducationOptions@@U?$default_delete@VEducationOptions@@@std@@@9@PEAVResourcePackManager@@V?$function@$$A6AXXZ@9@V?$function@$$A6AXXZ@9@PEAVDebugEndPoint@@7V?$shared_ptr@VFileStorageArea@Core@@@9@AEBUNetworkSettingOptions@@77V?$optional@UPlayerMovementSettings@@@9@V?$optional@UScriptSettings@@@9@AEBVExperiments@@W4TransportLayer@@M@Z
     */
    MCAPI bool initializeServer(class IMinecraftApp &, class AllowList &, class PermissionsFile *, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class std::chrono::duration<__int64, struct std::ratio<1, 1>>, std::string, std::string, std::string, class LevelSettings, int, bool, struct ConnectionDefinition, bool, std::vector<std::string> const &, std::string, class mce::UUID const &, class IMinecraftEventing &, class IResourcePackRepository &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const &, class ResourcePackManager &, class std::function<std::unique_ptr<class LevelStorage> (class Scheduler &)>, std::unique_ptr<class LevelLooseFileStorage>, std::string const &, class LevelData *, std::string, std::string, std::unique_ptr<class EducationOptions>, class ResourcePackManager *, class std::function<void (void)>, class std::function<void (void)>, class DebugEndPoint *, bool, class std::shared_ptr<class Core::FileStorageArea>, struct NetworkSettingOptions const &, bool, bool, class std::optional<struct PlayerMovementSettings>, class std::optional<struct ScriptSettings>, class Experiments const &, enum TransportLayer, float);
    /**
     * @hash   1237873667
     * @symbol ?leaveGameSync@ServerInstance@@QEAAXXZ
     */
    MCAPI void leaveGameSync();
    /**
     * @hash   1546222430
     * @symbol ?queueForServerThread@ServerInstance@@QEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI void queueForServerThread(class std::function<void (void)>);
    /**
     * @symbol ?setLevelCorruptionCallback@ServerInstance@@QEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI void setLevelCorruptionCallback(class std::function<void (void)>);
    /**
     * @hash   -821325498
     * @symbol ?setWakeupFrequency@ServerInstance@@QEAAXH@Z
     */
    MCAPI void setWakeupFrequency(int);
    /**
     * @symbol ?shutDownWithMessage@ServerInstance@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void shutDownWithMessage(std::string);
    /**
     * @hash   1108255139
     * @symbol ?startServerThread@ServerInstance@@QEAAXXZ
     */
    MCAPI void startServerThread();
    /**
     * @hash   -953982622
     * @symbol ?SERVER_MAX_DELAY_BEFORE_SLOWDOWN@ServerInstance@@2V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@B
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

//private:
    /**
     * @hash   1154367466
     * @symbol ?_threadSafeExecute@ServerInstance@@AEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI void _threadSafeExecute(class std::function<void (void)>);
    /**
     * @hash   -594100036
     * @symbol ?_update@ServerInstance@@AEAAXXZ
     */
    MCAPI void _update();

private:

};