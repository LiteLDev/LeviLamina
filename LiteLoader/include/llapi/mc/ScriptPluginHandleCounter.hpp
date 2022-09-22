/**
 * @file  ScriptPluginHandleCounter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ScriptPluginHandleCounter {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINHANDLECOUNTER
public:
    class ScriptPluginHandleCounter& operator=(class ScriptPluginHandleCounter const &) = delete;
    ScriptPluginHandleCounter(class ScriptPluginHandleCounter const &) = delete;
    ScriptPluginHandleCounter() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptPluginHandleCounter();
    /**
     * @vftbl  1
     * @symbol ?onMakeObject@ScriptPluginHandleCounter@@UEAAXAEBVWeakLifetimeScope@Scripting@@UObjectHandle@3@Vmeta_type@entt@@I@Z
     */
    virtual void onMakeObject(class Scripting::WeakLifetimeScope const &, struct Scripting::ObjectHandle, class entt::meta_type, unsigned int);
    /**
     * @vftbl  2
     * @symbol ?onDestroyObject@ScriptPluginHandleCounter@@UEAAXAEBVWeakLifetimeScope@Scripting@@UObjectHandle@3@Vmeta_type@entt@@I@Z
     */
    virtual void onDestroyObject(class Scripting::WeakLifetimeScope const &, struct Scripting::ObjectHandle, class entt::meta_type, unsigned int);
    /**
     * @vftbl  3
     * @symbol ?onTrackObject@ScriptPluginHandleCounter@@UEAAXAEBVWeakLifetimeScope@Scripting@@UObjectHandle@3@Vmeta_type@entt@@I@Z
     */
    virtual void onTrackObject(class Scripting::WeakLifetimeScope const &, struct Scripting::ObjectHandle, class entt::meta_type, unsigned int);
    /**
     * @vftbl  4
     * @symbol ?onUntrackObject@ScriptPluginHandleCounter@@UEAAXAEBVWeakLifetimeScope@Scripting@@UObjectHandle@3@Vmeta_type@entt@@I@Z
     */
    virtual void onUntrackObject(class Scripting::WeakLifetimeScope const &, struct Scripting::ObjectHandle, class entt::meta_type, unsigned int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLUGINHANDLECOUNTER
    /**
     * @symbol ?onObjectPromotedToMultipleOwners@ScriptPluginHandleCounter@@UEAAXAEBVWeakLifetimeScope@Scripting@@UObjectHandle@3@@Z
     */
    MCVAPI void onObjectPromotedToMultipleOwners(class Scripting::WeakLifetimeScope const &, struct Scripting::ObjectHandle);
    /**
     * @symbol ?onObjectReducedToSingleOwner@ScriptPluginHandleCounter@@UEAAXAEBVWeakLifetimeScope@Scripting@@UObjectHandle@3@@Z
     */
    MCVAPI void onObjectReducedToSingleOwner(class Scripting::WeakLifetimeScope const &, struct Scripting::ObjectHandle);
    /**
     * @symbol ?onPostLifetimeScopeDestroy@ScriptPluginHandleCounter@@UEAAXAEBVWeakLifetimeScope@Scripting@@@Z
     */
    MCVAPI void onPostLifetimeScopeDestroy(class Scripting::WeakLifetimeScope const &);
    /**
     * @symbol ?onPreLifetimeScopeDestroy@ScriptPluginHandleCounter@@UEAAXAEBVWeakLifetimeScope@Scripting@@@Z
     */
    MCVAPI void onPreLifetimeScopeDestroy(class Scripting::WeakLifetimeScope const &);
#endif
    /**
     * @symbol ??0ScriptPluginHandleCounter@@QEAA@AEAVScriptPlugin@@@Z
     */
    MCAPI ScriptPluginHandleCounter(class ScriptPlugin &);
    /**
     * @symbol ?getName@ScriptPluginHandleCounter@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @symbol ?getScriptPlugin@ScriptPluginHandleCounter@@QEAAAEAVScriptPlugin@@XZ
     */
    MCAPI class ScriptPlugin & getScriptPlugin();

//private:
    /**
     * @symbol ?_getOrMakeStats@ScriptPluginHandleCounter@@AEAAPEAUTypeStats@1@Vmeta_type@entt@@@Z
     */
    MCAPI struct ScriptPluginHandleCounter::TypeStats * _getOrMakeStats(class entt::meta_type);

private:

};