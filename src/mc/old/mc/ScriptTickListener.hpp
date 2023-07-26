/**
 * @file  ScriptTickListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptTickListener.
 *
 */
class ScriptTickListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTTICKLISTENER
public:
    class ScriptTickListener& operator=(class ScriptTickListener const &) = delete;
    ScriptTickListener(class ScriptTickListener const &) = delete;
    ScriptTickListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptTickListener();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
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
     * @symbol  ?onLevelRemovedPlayer\@ScriptTickListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    virtual enum class EventResult onLevelRemovedPlayer(class Level &, class Player &);
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  ?onLevelScriptTick\@ScriptTickListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    virtual enum class EventResult onLevelScriptTick(class Level &);
    /**
     * @symbol  ??0ScriptTickListener\@\@QEAA\@AEAVScriptEngine\@Scripting\@\@AEAVScriptFormPromiseTracker\@\@AEAVScriptDeferredActionManager\@\@\@Z
     */
    MCAPI ScriptTickListener(class Scripting::ScriptEngine &, class ScriptFormPromiseTracker &, class ScriptDeferredActionManager &);

};