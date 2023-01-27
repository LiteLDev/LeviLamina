/**
 * @file  ScriptPluginHandleCounter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPluginHandleCounter.
 *
 */
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
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptPluginHandleCounter();
    /**
     * @hash   1021545880
     * @vftbl  1
     * @symbol  ?onMakeObject\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@Vmeta_type\@entt\@\@I\@Z
     */
    virtual void onMakeObject(class Scripting::LifetimeRegistry &, struct Scripting::ObjectHandle, class entt::meta_type, unsigned int);
    /**
     * @hash   180348566
     * @vftbl  2
     * @symbol  ?onDestroyObject\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@Vmeta_type\@entt\@\@I\@Z
     */
    virtual void onDestroyObject(class Scripting::LifetimeRegistry &, struct Scripting::ObjectHandle, class entt::meta_type, unsigned int);
    /**
     * @hash   -1108131081
     * @vftbl  3
     * @symbol  ?onTrackObject\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@Vmeta_type\@entt\@\@I\@Z
     */
    virtual void onTrackObject(class Scripting::LifetimeRegistry &, struct Scripting::ObjectHandle, class entt::meta_type, unsigned int);
    /**
     * @hash   2048455710
     * @vftbl  4
     * @symbol  ?onUntrackObject\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@Vmeta_type\@entt\@\@I\@Z
     */
    virtual void onUntrackObject(class Scripting::LifetimeRegistry &, struct Scripting::ObjectHandle, class entt::meta_type, unsigned int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLUGINHANDLECOUNTER
    /**
     * @hash   -763599673
     * @symbol  ?onObjectPromotedToMultipleOwners\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@\@Z
     */
    MCVAPI void onObjectPromotedToMultipleOwners(class Scripting::LifetimeRegistry &, struct Scripting::ObjectHandle);
    /**
     * @hash   7762282
     * @symbol  ?onObjectReducedToSingleOwner\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@\@Z
     */
    MCVAPI void onObjectReducedToSingleOwner(class Scripting::LifetimeRegistry &, struct Scripting::ObjectHandle);
    /**
     * @hash   345056840
     * @symbol  ?onPostLifetimeScopeDestroy\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@\@Z
     */
    MCVAPI void onPostLifetimeScopeDestroy(class Scripting::LifetimeRegistry &);
    /**
     * @hash   46894051
     * @symbol  ?onPreLifetimeScopeDestroy\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@\@Z
     */
    MCVAPI void onPreLifetimeScopeDestroy(class Scripting::LifetimeRegistry &);
#endif
    /**
     * @hash   1111698237
     * @symbol  ??0ScriptPluginHandleCounter\@\@QEAA\@AEAVScriptPlugin\@\@\@Z
     */
    MCAPI ScriptPluginHandleCounter(class ScriptPlugin &);
    /**
     * @hash   1810822960
     * @symbol  ?getName\@ScriptPluginHandleCounter\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @hash   -984637420
     * @symbol  ?getScriptPlugin\@ScriptPluginHandleCounter\@\@QEAAAEAVScriptPlugin\@\@XZ
     */
    MCAPI class ScriptPlugin & getScriptPlugin();

//private:
    /**
     * @hash   1320351759
     * @symbol  ?_getOrMakeStats\@ScriptPluginHandleCounter\@\@AEAAPEAUTypeStats\@1\@Vmeta_type\@entt\@\@\@Z
     */
    MCAPI struct ScriptPluginHandleCounter::TypeStats * _getOrMakeStats(class entt::meta_type);

private:

};