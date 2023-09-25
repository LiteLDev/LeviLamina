/**
 * @file  BlockClimberSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockClimberSystem.
 *
 */
class BlockClimberSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCLIMBERSYSTEM
public:
    class BlockClimberSystem& operator=(class BlockClimberSystem const &) = delete;
    BlockClimberSystem(class BlockClimberSystem const &) = delete;
    BlockClimberSystem() = delete;
#endif

public:
    /**
     * @symbol ?canBlockBeAscendedByJumping\@BlockClimberSystem\@\@SA_NAEBVBlockLegacy\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@_N33\@Z
     */
    MCAPI static bool canBlockBeAscendedByJumping(class BlockLegacy const &, class IConstBlockSource const &, class BlockPos const &, bool, bool, bool);
    /**
     * @symbol ?createSystem\@BlockClimberSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
