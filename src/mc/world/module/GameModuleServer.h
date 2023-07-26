#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameModuleServer {

public:
    // prevent constructor by default
    GameModuleServer& operator=(GameModuleServer const&) = delete;
    GameModuleServer(GameModuleServer const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEMODULESERVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GameModuleServer(); // NOLINT
#endif
    /**
     * @symbol ??0GameModuleServer\@\@QEAA\@XZ
     */
    MCAPI GameModuleServer(); // NOLINT
};
