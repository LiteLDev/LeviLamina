#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ILevel {

public:
    // prevent constructor by default
    ILevel& operator=(ILevel const&) = delete;
    ILevel(ILevel const&)            = delete;
    ILevel()                         = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ILEVEL
    /**
     * @symbol ?asLevel\@ILevel\@\@UEAAPEAVLevel\@\@XZ
     */
    MCVAPI class Level* asLevel(); // NOLINT
    /**
     * @symbol ?asMultiPlayerLevel\@ILevel\@\@UEAAPEAVMultiPlayerLevel\@\@XZ
     */
    MCVAPI class MultiPlayerLevel* asMultiPlayerLevel(); // NOLINT
    /**
     * @symbol ?getTradeTables\@ILevel\@\@UEAAPEAVTradeTables\@\@XZ
     */
    MCVAPI class TradeTables* getTradeTables(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ILevel(); // NOLINT
#endif
};
