/**
 * @file  LevelStorageObserver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelStorageObserver.
 *
 */
class LevelStorageObserver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGEOBSERVER
public:
    class LevelStorageObserver& operator=(class LevelStorageObserver const &) = delete;
    LevelStorageObserver(class LevelStorageObserver const &) = delete;
    LevelStorageObserver() = delete;
#endif

public:
    /**
     * @hash   1469149372
     * @symbol ?onSave@LevelStorageObserver@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void onSave(std::string const &);

};