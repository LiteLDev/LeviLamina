#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceLoadManager {

public:
    // prevent constructor by default
    ResourceLoadManager& operator=(ResourceLoadManager const&) = delete;
    ResourceLoadManager(ResourceLoadManager const&)            = delete;
    ResourceLoadManager()                                      = delete;

public:
    /**
     * @symbol ?cancel\@ResourceLoadManager\@\@QEAAXW4ResourceLoadType\@\@\@Z
     */
    MCAPI void cancel(enum class ResourceLoadType); // NOLINT
};
