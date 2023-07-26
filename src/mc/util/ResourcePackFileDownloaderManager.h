#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackFileDownloaderManager {

public:
    // prevent constructor by default
    ResourcePackFileDownloaderManager& operator=(ResourcePackFileDownloaderManager const&) = delete;
    ResourcePackFileDownloaderManager(ResourcePackFileDownloaderManager const&)            = delete;
    ResourcePackFileDownloaderManager()                                                    = delete;

public:
    /**
     * @symbol ?cleanup\@ResourcePackFileDownloaderManager\@\@QEAAXXZ
     */
    MCAPI void cleanup(); // NOLINT
    /**
     * @symbol ?update\@ResourcePackFileDownloaderManager\@\@QEAAXXZ
     */
    MCAPI void update(); // NOLINT

    // private:

private:
    /**
     * @symbol ?MAX_CHUNK_ATTEMPTS\@ResourcePackFileDownloaderManager\@\@0HB
     */
    MCAPI static int const MAX_CHUNK_ATTEMPTS; // NOLINT
};
