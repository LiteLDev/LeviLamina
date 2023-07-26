#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelStorageSource {

public:
    // prevent constructor by default
    LevelStorageSource& operator=(LevelStorageSource const&) = delete;
    LevelStorageSource(LevelStorageSource const&)            = delete;
    LevelStorageSource()                                     = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSTORAGESOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelStorageSource(); // NOLINT
#endif
    /**
     * @symbol
     * ?WORLD_SAVE_FLUSH_INTERVAL\@LevelStorageSource\@\@2V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@B
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const
        WORLD_SAVE_FLUSH_INTERVAL; // NOLINT
    /**
     * @symbol
     * ?WORLD_SAVE_MENU_FLUSH_INTERVAL\@LevelStorageSource\@\@2V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@B
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const
        WORLD_SAVE_MENU_FLUSH_INTERVAL; // NOLINT
};
