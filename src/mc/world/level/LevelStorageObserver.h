#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelStorageObserver {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGEOBSERVER
public:
    LevelStorageObserver& operator=(LevelStorageObserver const&) = delete;
    LevelStorageObserver(LevelStorageObserver const&)            = delete;
    LevelStorageObserver()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?onSave\@LevelStorageObserver\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void onSave(std::string const&);
};
