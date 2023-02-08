/**
 * @file  LevelDataWrapper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelDataWrapper.
 *
 */
class LevelDataWrapper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDATAWRAPPER
public:
    class LevelDataWrapper& operator=(class LevelDataWrapper const &) = delete;
    LevelDataWrapper(class LevelDataWrapper const &) = delete;
#endif

public:
    /**
     * @hash   1644752273
     * @symbol  ??0LevelDataWrapper\@\@QEAA\@XZ
     */
    MCAPI LevelDataWrapper();
    /**
     * @hash   827681180
     * @symbol  ??DLevelDataWrapper\@\@QEBAAEBVLevelData\@\@XZ
     */
    MCAPI class LevelData const & operator*() const;
    /**
     * @hash   -367090590
     * @symbol  ??DLevelDataWrapper\@\@QEAAAEAVLevelData\@\@XZ
     */
    MCAPI class LevelData & operator*();
    /**
     * @hash   -867525705
     * @symbol  ??CLevelDataWrapper\@\@QEBAPEBVLevelData\@\@XZ
     */
    MCAPI class LevelData const * operator->() const;
    /**
     * @hash   -2062297475
     * @symbol  ??CLevelDataWrapper\@\@QEAAPEAVLevelData\@\@XZ
     */
    MCAPI class LevelData * operator->();
    /**
     * @hash   1755130808
     * @symbol  ?setLevelData\@LevelDataWrapper\@\@QEAAXAEAVLevelData\@\@\@Z
     */
    MCAPI void setLevelData(class LevelData &);
    /**
     * @hash   960030511
     * @symbol  ??1LevelDataWrapper\@\@QEAA\@XZ
     */
    MCAPI ~LevelDataWrapper();

};