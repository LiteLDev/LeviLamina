/**
 * @file  GlideInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GlideInputSystem.
 *
 */
class GlideInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDEINPUTSYSTEM
public:
    class GlideInputSystem& operator=(class GlideInputSystem const &) = delete;
    GlideInputSystem(class GlideInputSystem const &) = delete;
    GlideInputSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createGlideInputSystem\@GlideInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGlideInputSystem();

};