#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerActionComponent {

public:
    // prevent constructor by default
    PlayerActionComponent& operator=(PlayerActionComponent const&) = delete;
    PlayerActionComponent(PlayerActionComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0PlayerActionComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI PlayerActionComponent(struct PlayerActionComponent&&);
    /**
     * @symbol ??0PlayerActionComponent\@\@QEAA\@XZ
     */
    MCAPI PlayerActionComponent();
    /**
     * @symbol ?addAbortDestroyBlock\@PlayerActionComponent\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addAbortDestroyBlock(class BlockPos const&, int);
    /**
     * @symbol ?addContinueDestroyBlock\@PlayerActionComponent\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addContinueDestroyBlock(class BlockPos const&, int);
    /**
     * @symbol ?addStartDestroyBlock\@PlayerActionComponent\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addStartDestroyBlock(class BlockPos const&, int);
    /**
     * @symbol ?addStopDestroyBlock\@PlayerActionComponent\@\@QEAAXXZ
     */
    MCAPI void addStopDestroyBlock();
    /**
     * @symbol ??4PlayerActionComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PlayerActionComponent& operator=(struct PlayerActionComponent&&);
    /**
     * @symbol ??1PlayerActionComponent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerActionComponent();
    // NOLINTEND
};
