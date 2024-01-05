#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelStorageEventing {
public:
    // prevent constructor by default
    LevelStorageEventing& operator=(LevelStorageEventing const&);
    LevelStorageEventing(LevelStorageEventing const&);
    LevelStorageEventing();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0LevelStorageEventing@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelData@@0@Z
    MCAPI LevelStorageEventing(std::string const&, class LevelData const& levelData, std::string const& levelId);

    // symbol: ?fireDBStorageError@LevelStorageEventing@@QEAAXPEBD@Z
    MCAPI void fireDBStorageError(char const* errorType);

    // symbol:
    // ?fireEventWorldCorruptionCausedWorldShutdown@LevelStorageEventing@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@_N@3@@Z
    MCAPI void fireEventWorldCorruptionCausedWorldShutdown(std::string const& reason, std::optional<bool>);

    // NOLINTEND
};
