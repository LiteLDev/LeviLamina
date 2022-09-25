/**
 * @file  ResourcePackFileDownloaderManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -264975491
     * @symbol ?cleanup@ResourcePackFileDownloaderManager@@QEAAXXZ
     */
    MCAPI void cleanup();
    /**
     * @hash   -524347355
     * @symbol ?update@ResourcePackFileDownloaderManager@@QEAAXXZ
     */
    MCAPI void update();

//private:

private:
    /**
     * @hash   679671734
     * @symbol ?MAX_CHUNK_ATTEMPTS@ResourcePackFileDownloaderManager@@0HB
     */
    MCAPI static int const MAX_CHUNK_ATTEMPTS;

};