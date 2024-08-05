#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackFileDownloaderManager {
public:
    // prevent constructor by default
    ResourcePackFileDownloaderManager& operator=(ResourcePackFileDownloaderManager const&);
    ResourcePackFileDownloaderManager(ResourcePackFileDownloaderManager const&);
    ResourcePackFileDownloaderManager();

public:
    // NOLINTBEGIN
    MCAPI void cleanup();

    MCAPI void update();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const MAX_CHUNK_ATTEMPTS;

    // NOLINTEND
};
