/**
 * @file  MC/PlayerActionComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   669314978
     * @symbol ??0PlayerActionComponent@@QEAA@XZ
     */
    MCAPI PlayerActionComponent();
    /**
     * @hash   -1251636381
     * @symbol ??0PlayerActionComponent@@QEAA@$$QEAU0@@Z
     */
    MCAPI PlayerActionComponent(struct PlayerActionComponent &&);
    /**
     * @hash   837301165
     * @symbol ?addAbortDestroyBlock@PlayerActionComponent@@QEAAXAEBVBlockPos@@H@Z
     */
    MCAPI void addAbortDestroyBlock(class BlockPos const &, int);
    /**
     * @hash   -191938181
     * @symbol ?addContinueDestroyBlock@PlayerActionComponent@@QEAAXAEBVBlockPos@@H@Z
     */
    MCAPI void addContinueDestroyBlock(class BlockPos const &, int);
    /**
     * @hash   367959053
     * @symbol ?addStartDestroyBlock@PlayerActionComponent@@QEAAXAEBVBlockPos@@H@Z
     */
    MCAPI void addStartDestroyBlock(class BlockPos const &, int);
    /**
     * @hash   -548921967
     * @symbol ?addStopDestroyBlock@PlayerActionComponent@@QEAAXXZ
     */
    MCAPI void addStopDestroyBlock();
    /**
     * @hash   -537509588
     * @symbol ??4PlayerActionComponent@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct PlayerActionComponent & operator=(struct PlayerActionComponent &&);
    /**
     * @hash   15595986
     * @symbol ??1PlayerActionComponent@@QEAA@XZ
     */
    MCAPI ~PlayerActionComponent();

};