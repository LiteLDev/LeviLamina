#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceLoadManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCELOADMANAGER
public:
    ResourceLoadManager& operator=(ResourceLoadManager const&) = delete;
    ResourceLoadManager(ResourceLoadManager const&)            = delete;
    ResourceLoadManager()                                      = delete;
#endif

public:
    /**
     * @symbol ?cancel\@ResourceLoadManager\@\@QEAAXW4ResourceLoadType\@\@\@Z
     */
    MCAPI void cancel(enum class ResourceLoadType);
};
