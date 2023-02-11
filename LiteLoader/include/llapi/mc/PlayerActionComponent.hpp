/**
 * @file  PlayerActionComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerActionComponent.
 *
 */
struct PlayerActionComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERACTIONCOMPONENT
public:
    struct PlayerActionComponent& operator=(struct PlayerActionComponent const &) = delete;
    PlayerActionComponent(struct PlayerActionComponent const &) = delete;
#endif

public:
    /**
     * @hash   -293976046
     * @symbol  ??0PlayerActionComponent\@\@QEAA\@XZ
     */
    MCAPI PlayerActionComponent();
    /**
     * @hash   2080039891
     * @symbol  ??0PlayerActionComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI PlayerActionComponent(struct PlayerActionComponent &&);
    /**
     * @hash   -125959107
     * @symbol  ?addAbortDestroyBlock\@PlayerActionComponent\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addAbortDestroyBlock(class BlockPos const &, int);
    /**
     * @hash   -1155198453
     * @symbol  ?addContinueDestroyBlock\@PlayerActionComponent\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addContinueDestroyBlock(class BlockPos const &, int);
    /**
     * @hash   -595301219
     * @symbol  ?addStartDestroyBlock\@PlayerActionComponent\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addStartDestroyBlock(class BlockPos const &, int);
    /**
     * @hash   -1512182239
     * @symbol  ?addStopDestroyBlock\@PlayerActionComponent\@\@QEAAXXZ
     */
    MCAPI void addStopDestroyBlock();
    /**
     * @hash   -1500800612
     * @symbol  ??4PlayerActionComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PlayerActionComponent & operator=(struct PlayerActionComponent &&);
    /**
     * @hash   -947695038
     * @symbol  ??1PlayerActionComponent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerActionComponent();

};