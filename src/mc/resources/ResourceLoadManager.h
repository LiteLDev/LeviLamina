#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class ResourceLoadManager : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    ResourceLoadManager& operator=(ResourceLoadManager const&) = delete;
    ResourceLoadManager(ResourceLoadManager const&)            = delete;
    ResourceLoadManager()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?cancel\@ResourceLoadManager\@\@QEAAXW4ResourceLoadType\@\@\@Z
     */
    MCAPI void cancel(enum class ResourceLoadType);
    // NOLINTEND
};
