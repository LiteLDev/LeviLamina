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
    // symbol: ?cleanup@ResourcePackFileDownloaderManager@@QEAAXXZ
    MCAPI void cleanup();

    // symbol: ?update@ResourcePackFileDownloaderManager@@QEAAXXZ
    MCAPI void update();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?MAX_CHUNK_ATTEMPTS@ResourcePackFileDownloaderManager@@0HB
    MCAPI static int const MAX_CHUNK_ATTEMPTS;

    // NOLINTEND
};
