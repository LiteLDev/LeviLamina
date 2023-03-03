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
     * @symbol  ??0LevelDataWrapper\@\@QEAA\@XZ
     */
    MCAPI LevelDataWrapper();
    /**
     * @symbol  ??DLevelDataWrapper\@\@QEBAAEBVLevelData\@\@XZ
     */
    MCAPI class LevelData const & operator*() const;
    /**
     * @symbol  ??DLevelDataWrapper\@\@QEAAAEAVLevelData\@\@XZ
     */
    MCAPI class LevelData & operator*();
    /**
     * @symbol  ??CLevelDataWrapper\@\@QEBAPEBVLevelData\@\@XZ
     */
    MCAPI class LevelData const * operator->() const;
    /**
     * @symbol  ??CLevelDataWrapper\@\@QEAAPEAVLevelData\@\@XZ
     */
    MCAPI class LevelData * operator->();
    /**
     * @symbol  ?setLevelData\@LevelDataWrapper\@\@QEAAXAEAVLevelData\@\@\@Z
     */
    MCAPI void setLevelData(class LevelData &);
    /**
     * @symbol  ??1LevelDataWrapper\@\@QEAA\@XZ
     */
    MCAPI ~LevelDataWrapper();

};