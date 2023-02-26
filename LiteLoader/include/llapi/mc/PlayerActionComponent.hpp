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
     * @symbol  ??0PlayerActionComponent\@\@QEAA\@XZ
     */
    MCAPI PlayerActionComponent();
    /**
     * @symbol  ??0PlayerActionComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI PlayerActionComponent(struct PlayerActionComponent &&);
    /**
     * @symbol  ?addAbortDestroyBlock\@PlayerActionComponent\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addAbortDestroyBlock(class BlockPos const &, int);
    /**
     * @symbol  ?addContinueDestroyBlock\@PlayerActionComponent\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addContinueDestroyBlock(class BlockPos const &, int);
    /**
     * @symbol  ?addStartDestroyBlock\@PlayerActionComponent\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addStartDestroyBlock(class BlockPos const &, int);
    /**
     * @symbol  ?addStopDestroyBlock\@PlayerActionComponent\@\@QEAAXXZ
     */
    MCAPI void addStopDestroyBlock();
    /**
     * @symbol  ??4PlayerActionComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PlayerActionComponent & operator=(struct PlayerActionComponent &&);
    /**
     * @symbol  ??1PlayerActionComponent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerActionComponent();

};