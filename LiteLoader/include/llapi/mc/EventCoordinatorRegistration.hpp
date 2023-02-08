/**
 * @file  EventCoordinatorRegistration.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -322230583
     * @symbol  ?registerClientEventCoordinators\@EventCoordinatorRegistration\@\@YAXAEAVLevel\@\@\@Z
     */
    MCAPI void registerClientEventCoordinators(class Level &);
    /**
     * @hash   743388559
     * @symbol  ?registerServerEventCoordinators\@EventCoordinatorRegistration\@\@YAXAEAVServerLevel\@\@\@Z
     */
    MCAPI void registerServerEventCoordinators(class ServerLevel &);
    /**
     * @hash   -1767171047
     * @symbol  ?registerSharedEventCoordinators\@EventCoordinatorRegistration\@\@YAXAEAVLevel\@\@\@Z
     */
    MCAPI void registerSharedEventCoordinators(class Level &);

};