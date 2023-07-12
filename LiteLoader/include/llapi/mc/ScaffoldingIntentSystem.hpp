/**
 * @file  ScaffoldingIntentSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ScaffoldingIntentSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCAFFOLDINGINTENTSYSTEM
public:
    class ScaffoldingIntentSystem& operator=(class ScaffoldingIntentSystem const &) = delete;
    ScaffoldingIntentSystem(class ScaffoldingIntentSystem const &) = delete;
    ScaffoldingIntentSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ScaffoldingIntentSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
