/**
 * @file  ScaffoldingSensingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScaffoldingSensingSystem.
 *
 */
class ScaffoldingSensingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCAFFOLDINGSENSINGSYSTEM
public:
    class ScaffoldingSensingSystem& operator=(class ScaffoldingSensingSystem const &) = delete;
    ScaffoldingSensingSystem(class ScaffoldingSensingSystem const &) = delete;
    ScaffoldingSensingSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createScaffoldingSensingSystem\@ScaffoldingSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createScaffoldingSensingSystem();

};