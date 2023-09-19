#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelStorageObserver {
public:
    // prevent constructor by default
    LevelStorageObserver& operator=(LevelStorageObserver const&);
    LevelStorageObserver(LevelStorageObserver const&);
    LevelStorageObserver();

public:
    // NOLINTBEGIN
    // symbol: ?onSave@LevelStorageObserver@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void onSave(std::string const&);

    // NOLINTEND
};
