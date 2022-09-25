/**
 * @file  RailMovementComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RailMovementComponent.
 *
 */
class RailMovementComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILMOVEMENTCOMPONENT
public:
    class RailMovementComponent& operator=(class RailMovementComponent const &) = delete;
    RailMovementComponent(class RailMovementComponent const &) = delete;
#endif

public:
    /**
     * @hash   2107145544
     * @symbol ??0RailMovementComponent@@QEAA@XZ
     */
    MCAPI RailMovementComponent();
    /**
     * @hash   1391242076
     * @symbol ?comeOffTrack@RailMovementComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void comeOffTrack(class Actor &);
    /**
     * @hash   -1952159427
     * @symbol ?moveAlongTrack@RailMovementComponent@@QEAAXAEAVActor@@AEBVBlockPos@@@Z
     */
    MCAPI void moveAlongTrack(class Actor &, class BlockPos const &);
    /**
     * @hash   488962539
     * @symbol ??8RailMovementComponent@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class RailMovementComponent const &) const;

};