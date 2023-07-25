#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptTickListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTTICKLISTENER
public:
    ScriptTickListener& operator=(ScriptTickListener const&) = delete;
    ScriptTickListener(ScriptTickListener const&)            = delete;
    ScriptTickListener()                                     = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTTICKLISTENER
    /**
     * @symbol ?onLevelRemovedPlayer\@ScriptTickListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelRemovedPlayer(class Level&, class Player&);
    /**
     * @symbol ?onLevelTickEnd\@ScriptTickListener\@\@UEAAXXZ
     */
    MCVAPI void onLevelTickEnd();
#endif
};
