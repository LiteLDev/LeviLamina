#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkBuilderData {
public:
    // prevent constructor by default
    LevelChunkBuilderData& operator=(LevelChunkBuilderData const&);
    LevelChunkBuilderData(LevelChunkBuilderData const&);

public:
    // NOLINTBEGIN
    MCAPI LevelChunkBuilderData();

    MCAPI ~LevelChunkBuilderData();

    // NOLINTEND
};
