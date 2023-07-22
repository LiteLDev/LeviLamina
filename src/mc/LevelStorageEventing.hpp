/**
 * @file  LevelStorageEventing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelStorageEventing.
 *
 */
class LevelStorageEventing {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGEEVENTING
public:
    class LevelStorageEventing& operator=(class LevelStorageEventing const &) = delete;
    LevelStorageEventing(class LevelStorageEventing const &) = delete;
    LevelStorageEventing() = delete;
#endif

public:
    /**
     * @symbol  ??0LevelStorageEventing\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelData\@\@0\@Z
     */
    MCAPI LevelStorageEventing(std::string const &, class LevelData const &, std::string const &);
    /**
     * @symbol  ?fireDBStorageError\@LevelStorageEventing\@\@QEAAXPEBD\@Z
     */
    MCAPI void fireDBStorageError(char const *);
    /**
     * @symbol  ?fireEventWorldCorruptionCausedWorldShutdown\@LevelStorageEventing\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@_N\@3\@\@Z
     */
    MCAPI void fireEventWorldCorruptionCausedWorldShutdown(std::string const &, class std::optional<bool>);

};