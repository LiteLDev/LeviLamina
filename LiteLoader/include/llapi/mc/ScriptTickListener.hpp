/**
 * @file  ScriptTickListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTTICKLISTENER
    /**
     * @symbol ?onLevelRemovedPlayer\@ScriptTickListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelRemovedPlayer(class Level &, class Player &);
    /**
     * @symbol ?onLevelTickEnd\@ScriptTickListener\@\@UEAAXXZ
     */
    MCVAPI void onLevelTickEnd();
#endif
    /**
     * @symbol ??0ScriptTickListener\@\@QEAA\@AEAVScriptEngine\@Scripting\@\@AEAVScriptFormPromiseTracker\@\@\@Z
     */
    MCAPI ScriptTickListener(class Scripting::ScriptEngine &, class ScriptFormPromiseTracker &);

};
