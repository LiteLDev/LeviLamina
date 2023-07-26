/**
 * @file  ResourcePackFileDownloaderManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePackFileDownloaderManager.
 *
 */
class ResourcePackFileDownloaderManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKFILEDOWNLOADERMANAGER
public:
    class ResourcePackFileDownloaderManager& operator=(class ResourcePackFileDownloaderManager const &) = delete;
    ResourcePackFileDownloaderManager(class ResourcePackFileDownloaderManager const &) = delete;
    ResourcePackFileDownloaderManager() = delete;
#endif

public:
    /**
     * @symbol  ?cleanup\@ResourcePackFileDownloaderManager\@\@QEAAXXZ
     */
    MCAPI void cleanup();
    /**
     * @symbol  ?update\@ResourcePackFileDownloaderManager\@\@QEAAXXZ
     */
    MCAPI void update();

//private:

private:
    /**
     * @symbol  ?MAX_CHUNK_ATTEMPTS\@ResourcePackFileDownloaderManager\@\@0HB
     */
    MCAPI static int const MAX_CHUNK_ATTEMPTS;

};