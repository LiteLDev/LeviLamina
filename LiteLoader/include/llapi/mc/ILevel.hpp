/**
 * @file  ILevel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ILevel.
 *
 */
class ILevel {

#define AFTER_EXTRA
// Add Member There
public:
    struct SleepStatus {};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ILEVEL
public:
    class ILevel& operator=(class ILevel const &) = delete;
    ILevel(class ILevel const &) = delete;
    ILevel() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ILEVEL
    /**
     * @hash   -901809944
     * @symbol  ?asLevel\@ILevel\@\@UEAAPEAVLevel\@\@XZ
     */
    MCVAPI class Level * asLevel();
    /**
     * @hash   -1775163836
     * @symbol  ?asMultiPlayerLevel\@ILevel\@\@UEAAPEAVMultiPlayerLevel\@\@XZ
     */
    MCVAPI class MultiPlayerLevel * asMultiPlayerLevel();
    /**
     * @hash   2097961828
     * @symbol  ?getTradeTables\@ILevel\@\@UEAAPEAVTradeTables\@\@XZ
     */
    MCVAPI class TradeTables * getTradeTables();
#endif

};