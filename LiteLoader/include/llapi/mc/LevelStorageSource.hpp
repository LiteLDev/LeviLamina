/**
 * @file  LevelStorageSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelStorageSource.
 *
 */
class LevelStorageSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGESOURCE
public:
    class LevelStorageSource& operator=(class LevelStorageSource const &) = delete;
    LevelStorageSource(class LevelStorageSource const &) = delete;
    LevelStorageSource() = delete;
#endif

public:
    /**
     * @symbol  ?WORLD_SAVE_FLUSH_INTERVAL\@LevelStorageSource\@\@2V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@B
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const WORLD_SAVE_FLUSH_INTERVAL;
    /**
     * @symbol  ?WORLD_SAVE_MENU_FLUSH_INTERVAL\@LevelStorageSource\@\@2V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@B
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const WORLD_SAVE_MENU_FLUSH_INTERVAL;

};