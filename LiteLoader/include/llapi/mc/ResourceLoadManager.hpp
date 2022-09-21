/**
 * @file  MC/ResourceLoadManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourceLoadManager.
 *
 */
class ResourceLoadManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCELOADMANAGER
public:
    class ResourceLoadManager& operator=(class ResourceLoadManager const &) = delete;
    ResourceLoadManager(class ResourceLoadManager const &) = delete;
    ResourceLoadManager() = delete;
#endif

public:
    /**
     * @hash   1466719628
     * @symbol ?cancel@ResourceLoadManager@@QEAAXW4ResourceLoadType@@@Z
     */
    MCAPI void cancel(enum ResourceLoadType);

};