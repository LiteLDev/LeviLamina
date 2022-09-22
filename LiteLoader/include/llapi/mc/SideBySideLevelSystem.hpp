/**
 * @file  SideBySideLevelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideLevelSystem.
 *
 */
class SideBySideLevelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDELEVELSYSTEM
public:
    class SideBySideLevelSystem& operator=(class SideBySideLevelSystem const &) = delete;
    SideBySideLevelSystem(class SideBySideLevelSystem const &) = delete;
    SideBySideLevelSystem() = delete;
#endif

public:
    /**
     * @hash   -1236599456
     * @symbol ?emptyEventingRequests@SideBySideLevelSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo emptyEventingRequests();
    /**
     * @hash   -1495894670
     * @symbol ?emptySoundRequests@SideBySideLevelSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo emptySoundRequests();

};