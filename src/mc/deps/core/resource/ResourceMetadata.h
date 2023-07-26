#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceMetadata {

public:
    // prevent constructor by default
    ResourceMetadata& operator=(ResourceMetadata const&) = delete;
    ResourceMetadata(ResourceMetadata const&)            = delete;

public:
    /**
     * @symbol ??0ResourceMetadata\@\@QEAA\@XZ
     */
    MCAPI ResourceMetadata(); // NOLINT
    /**
     * @symbol ??1ResourceMetadata\@\@QEAA\@XZ
     */
    MCAPI ~ResourceMetadata(); // NOLINT
};
