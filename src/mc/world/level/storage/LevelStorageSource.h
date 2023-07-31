#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelStorageSource {

public:
    // prevent constructor by default
    LevelStorageSource& operator=(LevelStorageSource const&) = delete;
    LevelStorageSource(LevelStorageSource const&)            = delete;
    LevelStorageSource()                                     = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSTORAGESOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelStorageSource();
#endif
    /**
     * @symbol
     * ?WORLD_SAVE_FLUSH_INTERVAL\@LevelStorageSource\@\@2V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@B
     */
    MCAPI static std::chrono::nanoseconds const WORLD_SAVE_FLUSH_INTERVAL;
    /**
     * @symbol
     * ?WORLD_SAVE_MENU_FLUSH_INTERVAL\@LevelStorageSource\@\@2V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@B
     */
    MCAPI static std::chrono::nanoseconds const WORLD_SAVE_MENU_FLUSH_INTERVAL;
    // NOLINTEND
};
