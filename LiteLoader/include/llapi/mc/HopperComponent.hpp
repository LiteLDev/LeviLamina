/**
 * @file  HopperComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HopperComponent.
 *
 */
class HopperComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERCOMPONENT
public:
    class HopperComponent& operator=(class HopperComponent const &) = delete;
    HopperComponent(class HopperComponent const &) = delete;
#endif

public:
    /**
     * @hash   -1285783259
     * @symbol  ??0HopperComponent\@\@QEAA\@XZ
     */
    MCAPI HopperComponent();
    /**
     * @hash   1651863852
     * @symbol  ?getLastPosition\@HopperComponent\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getLastPosition() const;
    /**
     * @hash   -188362637
     * @symbol  ?pullInItems\@HopperComponent\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool pullInItems(class Actor &);

};