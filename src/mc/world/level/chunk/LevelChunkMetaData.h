#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkMetaData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKMETADATA
public:
    LevelChunkMetaData& operator=(LevelChunkMetaData const&) = delete;
    LevelChunkMetaData()                                     = delete;
#endif

public:
    /**
     * @symbol ??0LevelChunkMetaData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI LevelChunkMetaData(class LevelChunkMetaData const&);
    /**
     * @symbol ?getCurrentHash\@LevelChunkMetaData\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCurrentHash() const;
    /**
     * @symbol ??1LevelChunkMetaData\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunkMetaData();
    /**
     * @symbol ?INVALID_META_DATA\@LevelChunkMetaData\@\@2_KB
     */
    MCAPI static unsigned __int64 const INVALID_META_DATA;

    // protected:
    /**
     * @symbol ?_recomputeHash\@LevelChunkMetaData\@\@IEBAXXZ
     */
    MCAPI void _recomputeHash() const;

protected:
};
