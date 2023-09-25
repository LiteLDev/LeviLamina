/**
 * @file  BlockPosNotificationSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace BlockPosNotificationSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?createCleanupSystem\@BlockPosNotificationSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol ?createFilterSystem\@BlockPosNotificationSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createFilterSystem();
    /**
     * @symbol ?createGenericStandOnSystem\@BlockPosNotificationSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createGenericStandOnSystem();
    /**
     * @symbol ?createHoneyOrSlimeStandOnSystem\@BlockPosNotificationSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createHoneyOrSlimeStandOnSystem();
    /**
     * @symbol ?onStandOnSlowingBlock\@BlockPosNotificationSystem\@\@YAXAEAVVec3\@\@_N\@Z
     */
    MCAPI void onStandOnSlowingBlock(class Vec3 &, bool);

};