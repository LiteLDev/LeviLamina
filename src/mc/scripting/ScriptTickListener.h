#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptTickListener {

public:
    // prevent constructor by default
    ScriptTickListener& operator=(ScriptTickListener const&) = delete;
    ScriptTickListener(ScriptTickListener const&)            = delete;
    ScriptTickListener()                                     = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
