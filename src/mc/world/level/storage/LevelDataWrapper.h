#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDataWrapper {

public:
    // prevent constructor by default
    LevelDataWrapper& operator=(LevelDataWrapper const&) = delete;
    LevelDataWrapper(LevelDataWrapper const&)            = delete;

public:
    /**
     * @symbol ??0LevelDataWrapper\@\@QEAA\@XZ
     */
    MCAPI LevelDataWrapper(); // NOLINT
    /**
     * @symbol ??DLevelDataWrapper\@\@QEBAAEBVLevelData\@\@XZ
     */
    MCAPI class LevelData const& operator*() const; // NOLINT
    /**
     * @symbol ??DLevelDataWrapper\@\@QEAAAEAVLevelData\@\@XZ
     */
    MCAPI class LevelData& operator*(); // NOLINT
    /**
     * @symbol ??CLevelDataWrapper\@\@QEBAPEBVLevelData\@\@XZ
     */
    MCAPI class LevelData const* operator->() const; // NOLINT
    /**
     * @symbol ??CLevelDataWrapper\@\@QEAAPEAVLevelData\@\@XZ
     */
    MCAPI class LevelData* operator->(); // NOLINT
    /**
     * @symbol ?setLevelData\@LevelDataWrapper\@\@QEAAXAEAVLevelData\@\@\@Z
     */
    MCAPI void setLevelData(class LevelData&); // NOLINT
    /**
     * @symbol ??1LevelDataWrapper\@\@QEAA\@XZ
     */
    MCAPI ~LevelDataWrapper(); // NOLINT
};
