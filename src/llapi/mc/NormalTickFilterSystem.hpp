/**
 * @file  NormalTickFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NormalTickFilterSystem.
 *
 */
class NormalTickFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NORMALTICKFILTERSYSTEM
public:
    class NormalTickFilterSystem& operator=(class NormalTickFilterSystem const &) = delete;
    NormalTickFilterSystem(class NormalTickFilterSystem const &) = delete;
    NormalTickFilterSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createGenericSystem\@NormalTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGenericSystem();
    /**
     * @symbol  ?createLocalPlayerSystem\@NormalTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLocalPlayerSystem();

};