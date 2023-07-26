#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldTemplateLevelData {

public:
    // prevent constructor by default
    WorldTemplateLevelData& operator=(WorldTemplateLevelData const&) = delete;
    WorldTemplateLevelData(WorldTemplateLevelData const&)            = delete;

public:
    /**
     * @symbol ??0WorldTemplateLevelData\@\@QEAA\@XZ
     */
    MCAPI WorldTemplateLevelData(); // NOLINT
    /**
     * @symbol ?getBaseGameVersion\@WorldTemplateLevelData\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const& getBaseGameVersion() const; // NOLINT
    /**
     * @symbol ??1WorldTemplateLevelData\@\@QEAA\@XZ
     */
    MCAPI ~WorldTemplateLevelData(); // NOLINT

    // protected:
    /**
     * @symbol ?_getTagData\@WorldTemplateLevelData\@\@IEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _getTagData(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_setTagData\@WorldTemplateLevelData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _setTagData(class CompoundTag&) const; // NOLINT

protected:
};
