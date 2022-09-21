/**
 * @file  MC/ServerScriptManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerScriptManager.
 *
 */
class ServerScriptManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSCRIPTMANAGER
public:
    class ServerScriptManager& operator=(class ServerScriptManager const &) = delete;
    ServerScriptManager(class ServerScriptManager const &) = delete;
    ServerScriptManager() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ServerScriptManager();
    /**
     * @hash   -504891697
     * @vftbl  1
     * @symbol ?onServerLevelInitialized@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@AEAVLevel@@@Z
     */
    virtual enum EventResult onServerLevelInitialized(class ServerInstance &, class Level &);
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   -1609642044
     * @vftbl  5
     * @symbol ?onServerUpdateStart@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
     */
    virtual enum EventResult onServerUpdateStart(class ServerInstance &);
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @hash   -490058554
     * @vftbl  9
     * @symbol ?onServerThreadStarted@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
     */
    virtual enum EventResult onServerThreadStarted(class ServerInstance &);
    /**
     * @hash   1948292106
     * @vftbl  10
     * @symbol ?onServerThreadStopped@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
     */
    virtual enum EventResult onServerThreadStopped(class ServerInstance &);
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @hash   -623272574
     * @vftbl  12
     * @symbol ?onEvent@ServerScriptManager@@UEAA?AW4EventResult@@AEBUServerInstanceRequestResourceReload@@@Z
     */
    virtual enum EventResult onEvent(struct ServerInstanceRequestResourceReload const &);
    /**
     * @hash   1735238592
     * @vftbl  13
     * @symbol ?onEvent@?$EventListenerDispatcher@VServerInstanceEventListener@@@@MEAA?AW4EventResult@@AEBUServerInstanceNotificationEvent@@@Z
     */
    virtual enum EventResult onEvent(struct ServerInstanceNotificationEvent const &);
    /**
     * @hash   -1477599342
     * @symbol ??0ServerScriptManager@@QEAA@UScriptSettings@@V?$NonOwnerPointer@VScheduler@@@Bedrock@@AEAVIMinecraftEventing@@_N@Z
     */
    MCAPI ServerScriptManager(struct ScriptSettings, class Bedrock::NonOwnerPointer<class Scheduler>, class IMinecraftEventing &, bool);
    /**
     * @hash   243930437
     * @symbol ?onMainThreadStartLeaveGame@ServerScriptManager@@QEAAXXZ
     */
    MCAPI void onMainThreadStartLeaveGame();

//private:
    /**
     * @hash   -1661760260
     * @symbol ?_loadAndRunAllPlugins@ServerScriptManager@@AEAAXAEAVServerInstance@@AEAVServerLevel@@@Z
     */
    MCAPI void _loadAndRunAllPlugins(class ServerInstance &, class ServerLevel &);
    /**
     * @hash   -671721319
     * @symbol ?_registerEventHandlers@ServerScriptManager@@AEBAXAEAVLevel@@@Z
     */
    MCAPI void _registerEventHandlers(class Level &) const;
    /**
     * @hash   -2015870486
     * @symbol ?_sendInitializeEvent@ServerScriptManager@@AEBAXAEAVServerLevel@@@Z
     */
    MCAPI void _sendInitializeEvent(class ServerLevel &) const;
    /**
     * @hash   -1717287918
     * @symbol ?_unregisterEventHandlers@ServerScriptManager@@AEBAXAEAVLevel@@@Z
     */
    MCAPI void _unregisterEventHandlers(class Level &) const;

private:

};