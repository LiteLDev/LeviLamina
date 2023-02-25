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
     * @symbol  ?registerClientEventCoordinators\@EventCoordinatorRegistration\@\@YAXAEAVLevel\@\@\@Z
     */
    MCAPI void registerClientEventCoordinators(class Level &);
    /**
     * @symbol  ?registerServerEventCoordinators\@EventCoordinatorRegistration\@\@YAXAEAVServerLevel\@\@\@Z
     */
    MCAPI void registerServerEventCoordinators(class ServerLevel &);
    /**
     * @symbol  ?registerSharedEventCoordinators\@EventCoordinatorRegistration\@\@YAXAEAVLevel\@\@\@Z
     */
    MCAPI void registerSharedEventCoordinators(class Level &);

};