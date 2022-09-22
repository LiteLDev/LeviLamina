/**
 * @file  LevelDataWrapper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   914853553
     * @symbol ??0LevelDataWrapper@@QEAA@XZ
     */
    MCAPI LevelDataWrapper();
    /**
     * @hash   97767084
     * @symbol ??DLevelDataWrapper@@QEBAAEBVLevelData@@XZ
     */
    MCAPI class LevelData const & operator*() const;
    /**
     * @hash   -1097004686
     * @symbol ??DLevelDataWrapper@@QEAAAEAVLevelData@@XZ
     */
    MCAPI class LevelData & operator*();
    /**
     * @hash   -1597439801
     * @symbol ??CLevelDataWrapper@@QEBAPEBVLevelData@@XZ
     */
    MCAPI class LevelData const * operator->() const;
    /**
     * @hash   1502755725
     * @symbol ??CLevelDataWrapper@@QEAAPEAVLevelData@@XZ
     */
    MCAPI class LevelData * operator->();
    /**
     * @hash   878452792
     * @symbol ?setLevelData@LevelDataWrapper@@QEAAXAEAVLevelData@@@Z
     */
    MCAPI void setLevelData(class LevelData &);
    /**
     * @hash   175101087
     * @symbol ??1LevelDataWrapper@@QEAA@XZ
     */
    MCAPI ~LevelDataWrapper();

};