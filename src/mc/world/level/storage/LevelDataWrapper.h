#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDataWrapper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDATAWRAPPER
public:
    LevelDataWrapper& operator=(LevelDataWrapper const&) = delete;
    LevelDataWrapper(LevelDataWrapper const&)            = delete;
#endif

public:
    /**
     * @symbol ??0LevelDataWrapper\@\@QEAA\@XZ
     */
    MCAPI LevelDataWrapper();
    /**
     * @symbol ??DLevelDataWrapper\@\@QEBAAEBVLevelData\@\@XZ
     */
    MCAPI class LevelData const& operator*() const;
    /**
     * @symbol ??DLevelDataWrapper\@\@QEAAAEAVLevelData\@\@XZ
     */
    MCAPI class LevelData& operator*();
    /**
     * @symbol ??CLevelDataWrapper\@\@QEBAPEBVLevelData\@\@XZ
     */
    MCAPI class LevelData const* operator->() const;
    /**
     * @symbol ??CLevelDataWrapper\@\@QEAAPEAVLevelData\@\@XZ
     */
    MCAPI class LevelData* operator->();
    /**
     * @symbol ?setLevelData\@LevelDataWrapper\@\@QEAAXAEAVLevelData\@\@\@Z
     */
    MCAPI void setLevelData(class LevelData&);
    /**
     * @symbol ??1LevelDataWrapper\@\@QEAA\@XZ
     */
    MCAPI ~LevelDataWrapper();
};
