/**
 * @file  DanceComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DanceComponent.
 *
 */
class DanceComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DANCECOMPONENT
public:
    class DanceComponent& operator=(class DanceComponent const &) = delete;
    DanceComponent(class DanceComponent const &) = delete;
#endif

public:
    /**
     * @hash   310453686
     * @symbol ??0DanceComponent@@QEAA@XZ
     */
    MCAPI DanceComponent();
    /**
     * @hash   -497450527
     * @symbol ?inListenDistance@DanceComponent@@QEBA_NAEBVVec3@@@Z
     */
    MCAPI bool inListenDistance(class Vec3 const &) const;
    /**
     * @hash   -831057894
     * @symbol ?initFromDefinition@DanceComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   1535494199
     * @symbol ?initFromDefinition@DanceComponent@@QEAAXAEAVActor@@M@Z
     */
    MCAPI void initFromDefinition(class Actor &, float);

};