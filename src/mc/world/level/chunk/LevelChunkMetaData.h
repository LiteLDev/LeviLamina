#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkMetaData {
public:
    // prevent constructor by default
    LevelChunkMetaData& operator=(LevelChunkMetaData const&);
    LevelChunkMetaData();

public:
    // NOLINTBEGIN
    // symbol: ??0LevelChunkMetaData@@QEAA@AEAVIDataInput@@@Z
    MCAPI explicit LevelChunkMetaData(class IDataInput& stream);

    // symbol: ??0LevelChunkMetaData@@QEAA@AEBV0@@Z
    MCAPI LevelChunkMetaData(class LevelChunkMetaData const&);

    // symbol: ?getCurrentHash@LevelChunkMetaData@@QEBA_KXZ
    MCAPI uint64 getCurrentHash() const;

    // symbol: ?serialize@LevelChunkMetaData@@QEBAXAEAVIDataOutput@@@Z
    MCAPI void serialize(class IDataOutput& stream) const;

    // symbol: ??1LevelChunkMetaData@@QEAA@XZ
    MCAPI ~LevelChunkMetaData();

    // symbol: ?INVALID_META_DATA@LevelChunkMetaData@@2_KB
    MCAPI static uint64 const INVALID_META_DATA;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_recomputeHash@LevelChunkMetaData@@IEBAXXZ
    MCAPI void _recomputeHash() const;

    // NOLINTEND
};
