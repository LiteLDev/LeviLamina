/**
 * @file  RailMovementComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1142947336
     * @symbol  ??0RailMovementComponent\@\@QEAA\@XZ
     */
    MCAPI RailMovementComponent();
    /**
     * @hash   -150833912
     * @symbol  ?getMaxSpeed\@RailMovementComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxSpeed() const;
    /**
     * @hash   1602507835
     * @symbol  ??8RailMovementComponent\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class RailMovementComponent const &) const;

};