/**
 * @file  TrailComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TrailComponent.
 *
 */
class TrailComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILCOMPONENT
public:
    class TrailComponent& operator=(class TrailComponent const &) = delete;
    TrailComponent(class TrailComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0TrailComponent\@\@QEAA\@XZ
     */
    MCAPI TrailComponent();
    /**
     * @symbol  ?initFromDefinition\@TrailComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);

};