#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkMetaData {
public:
    // prevent constructor by default
    LevelChunkMetaData& operator=(LevelChunkMetaData const&);
    LevelChunkMetaData();

public:
    // NOLINTBEGIN
    MCAPI LevelChunkMetaData(class LevelChunkMetaData const& otherMetaData);

    MCAPI uint64 getCurrentHash() const;

    MCAPI ~LevelChunkMetaData();

    MCAPI static uint64 const INVALID_META_DATA;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _recomputeHash() const;

    // NOLINTEND
};
