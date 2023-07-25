#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldTemplateLevelData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATELEVELDATA
public:
    WorldTemplateLevelData& operator=(WorldTemplateLevelData const&) = delete;
    WorldTemplateLevelData(WorldTemplateLevelData const&)            = delete;
#endif

public:
    /**
     * @symbol ??0WorldTemplateLevelData\@\@QEAA\@XZ
     */
    MCAPI WorldTemplateLevelData();
    /**
     * @symbol ?getBaseGameVersion\@WorldTemplateLevelData\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const& getBaseGameVersion() const;
    /**
     * @symbol ??1WorldTemplateLevelData\@\@QEAA\@XZ
     */
    MCAPI ~WorldTemplateLevelData();

    // protected:
    /**
     * @symbol ?_getTagData\@WorldTemplateLevelData\@\@IEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _getTagData(class CompoundTag const&);
    /**
     * @symbol ?_setTagData\@WorldTemplateLevelData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _setTagData(class CompoundTag&) const;

protected:
};
