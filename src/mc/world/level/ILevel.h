#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ILevel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ILEVEL
public:
    ILevel& operator=(ILevel const&) = delete;
    ILevel(ILevel const&)            = delete;
    ILevel()                         = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ILEVEL
    /**
     * @symbol ?asLevel\@ILevel\@\@UEAAPEAVLevel\@\@XZ
     */
    MCVAPI class Level* asLevel();
    /**
     * @symbol ?asMultiPlayerLevel\@ILevel\@\@UEAAPEAVMultiPlayerLevel\@\@XZ
     */
    MCVAPI class MultiPlayerLevel* asMultiPlayerLevel();
    /**
     * @symbol ?getTradeTables\@ILevel\@\@UEAAPEAVTradeTables\@\@XZ
     */
    MCVAPI class TradeTables* getTradeTables();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ILevel();
#endif
};
