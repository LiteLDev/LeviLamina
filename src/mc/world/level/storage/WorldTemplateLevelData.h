#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldTemplateLevelData {
public:
    // prevent constructor by default
    WorldTemplateLevelData& operator=(WorldTemplateLevelData const&);
    WorldTemplateLevelData(WorldTemplateLevelData const&);

public:
    // NOLINTBEGIN
    // symbol: ??0WorldTemplateLevelData@@QEAA@XZ
    MCAPI WorldTemplateLevelData();

    // symbol: ?getBaseGameVersion@WorldTemplateLevelData@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getBaseGameVersion() const;

    // symbol: ??1WorldTemplateLevelData@@QEAA@XZ
    MCAPI ~WorldTemplateLevelData();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getTagData@WorldTemplateLevelData@@IEAAXAEBVCompoundTag@@@Z
    MCAPI void _getTagData(class CompoundTag const& tag);

    // symbol: ?_setTagData@WorldTemplateLevelData@@IEBAXAEAVCompoundTag@@@Z
    MCAPI void _setTagData(class CompoundTag& tag) const;

    // NOLINTEND
};
