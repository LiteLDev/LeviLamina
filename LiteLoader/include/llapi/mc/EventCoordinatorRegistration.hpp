/**
 * @file  EventCoordinatorRegistration.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace EventCoordinatorRegistration.
 *
 */
namespace EventCoordinatorRegistration {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -1050683959
     * @symbol ?registerClientEventCoordinators@EventCoordinatorRegistration@@YAXAEAVLevel@@@Z
     */
    MCAPI void registerClientEventCoordinators(class Level &);
    /**
     * @hash   14889055
     * @symbol ?registerServerEventCoordinators@EventCoordinatorRegistration@@YAXAEAVServerLevel@@@Z
     */
    MCAPI void registerServerEventCoordinators(class ServerLevel &);
    /**
     * @hash   1799235241
     * @symbol ?registerSharedEventCoordinators@EventCoordinatorRegistration@@YAXAEAVLevel@@@Z
     */
    MCAPI void registerSharedEventCoordinators(class Level &);

};