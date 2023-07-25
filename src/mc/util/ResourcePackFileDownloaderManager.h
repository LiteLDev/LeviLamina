#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackFileDownloaderManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKFILEDOWNLOADERMANAGER
public:
    ResourcePackFileDownloaderManager& operator=(ResourcePackFileDownloaderManager const&) = delete;
    ResourcePackFileDownloaderManager(ResourcePackFileDownloaderManager const&)            = delete;
    ResourcePackFileDownloaderManager()                                                    = delete;
#endif

public:
    /**
     * @symbol ?cleanup\@ResourcePackFileDownloaderManager\@\@QEAAXXZ
     */
    MCAPI void cleanup();
    /**
     * @symbol ?update\@ResourcePackFileDownloaderManager\@\@QEAAXXZ
     */
    MCAPI void update();

    // private:

private:
    /**
     * @symbol ?MAX_CHUNK_ATTEMPTS\@ResourcePackFileDownloaderManager\@\@0HB
     */
    MCAPI static int const MAX_CHUNK_ATTEMPTS;
};
