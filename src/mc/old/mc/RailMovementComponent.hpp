/**
 * @file  RailMovementComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0RailMovementComponent\@\@QEAA\@XZ
     */
    MCAPI RailMovementComponent();
    /**
     * @symbol  ?getMaxSpeed\@RailMovementComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxSpeed() const;
    /**
     * @symbol  ??8RailMovementComponent\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class RailMovementComponent const &) const;

};