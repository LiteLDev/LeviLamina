/**
 * @file  ServerScriptManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Scripting.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerScriptManager();
    /**
     * @hash   -398951057
     * @vftbl  1
     * @symbol  ?onServerLevelInitialized\@ServerScriptManager\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@AEAVLevel\@\@\@Z
     */
    virtual enum class EventResult onServerLevelInitialized(class ServerInstance &, class Level &);
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   1641494740
     * @vftbl  5
     * @symbol  ?onServerUpdateStart\@ServerScriptManager\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    virtual enum class EventResult onServerUpdateStart(class ServerInstance &);
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @hash   -1533612298
     * @vftbl  9
     * @symbol  ?onServerThreadStarted\@ServerScriptManager\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    virtual enum class EventResult onServerThreadStarted(class ServerInstance &);
    /**
     * @hash   904492346
     * @vftbl  10
     * @symbol  ?onServerThreadStopped\@ServerScriptManager\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    virtual enum class EventResult onServerThreadStopped(class ServerInstance &);
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @hash   -1666872446
     * @vftbl  12
     * @symbol  ?onEvent\@ServerScriptManager\@\@UEAA?AW4EventResult\@\@AEBUServerInstanceRequestResourceReload\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ServerInstanceRequestResourceReload const &);
    /**
     * @hash   691638720
     * @vftbl  13
     * @symbol  ?onEvent\@?$EventListenerDispatcher\@VServerInstanceEventListener\@\@\@\@MEAA?AW4EventResult\@\@AEBUServerInstanceNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ServerInstanceNotificationEvent const &);
    /**
     * @hash   1771138786
     * @symbol  ??0ServerScriptManager\@\@QEAA\@UScriptSettings\@\@V?$NonOwnerPointer\@VScheduler\@\@\@Bedrock\@\@AEAVIMinecraftEventing\@\@_N\@Z
     */
    MCAPI ServerScriptManager(struct ScriptSettings, class Bedrock::NonOwnerPointer<class Scheduler>, class IMinecraftEventing &, bool);
    /**
     * @hash   757531327
     * @symbol  ?addModuleFilter\@ServerScriptManager\@\@QEAAXAEBV?$function\@$$A6A_NAEBVPackManifest\@\@AEBUModuleDescriptor\@Scripting\@\@1AEAVScriptPluginResult\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void addModuleFilter(class std::function<bool (class PackManifest const &, struct Scripting::ModuleDescriptor const &, struct Scripting::ModuleDescriptor const &, class ScriptPluginResult &)> const &);
    /**
     * @hash   1953409478
     * @symbol  ?getScriptEngine\@ServerScriptManager\@\@QEAAAEAVScriptEngine\@Scripting\@\@XZ
     */
    MCAPI class Scripting::ScriptEngine & getScriptEngine();
    /**
     * @hash   -799623307
     * @symbol  ?onMainThreadStartLeaveGame\@ServerScriptManager\@\@QEAAXXZ
     */
    MCAPI void onMainThreadStartLeaveGame();

//private:
    /**
     * @hash   249834422
     * @symbol  ?_loadAndRunAllPlugins\@ServerScriptManager\@\@AEAA_NAEAVServerInstance\@\@AEAVServerLevel\@\@\@Z
     */
    MCAPI bool _loadAndRunAllPlugins(class ServerInstance &, class ServerLevel &);
    /**
     * @hash   -1716089991
     * @symbol  ?_registerEventHandlers\@ServerScriptManager\@\@AEBAXAEAVLevel\@\@\@Z
     */
    MCAPI void _registerEventHandlers(class Level &) const;
    /**
     * @hash   1533495218
     * @symbol  ?_unregisterEventHandlers\@ServerScriptManager\@\@AEBAXAEAVLevel\@\@\@Z
     */
    MCAPI void _unregisterEventHandlers(class Level &) const;
    /**
     * @hash   -1530419972
     * @symbol  ?_sendWorldInitializeEvent\@ServerScriptManager\@\@CAXAEAVServerLevel\@\@VWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI static void _sendWorldInitializeEvent(class ServerLevel &, class Scripting::WeakLifetimeScope);

private:

};