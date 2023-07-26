#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkMetaData {

public:
    // prevent constructor by default
    LevelChunkMetaData& operator=(LevelChunkMetaData const&) = delete;
    LevelChunkMetaData()                                     = delete;

public:
    /**
     * @symbol ??0LevelChunkMetaData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI LevelChunkMetaData(class LevelChunkMetaData const&); // NOLINT
    /**
     * @symbol ?getCurrentHash\@LevelChunkMetaData\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCurrentHash() const; // NOLINT
    /**
     * @symbol ??1LevelChunkMetaData\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunkMetaData(); // NOLINT
    /**
     * @symbol ?INVALID_META_DATA\@LevelChunkMetaData\@\@2_KB
     */
    MCAPI static unsigned __int64 const INVALID_META_DATA; // NOLINT

    // protected:
    /**
     * @symbol ?_recomputeHash\@LevelChunkMetaData\@\@IEBAXXZ
     */
    MCAPI void _recomputeHash() const; // NOLINT

protected:
};
