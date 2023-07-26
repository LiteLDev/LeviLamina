#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkMetaDataDebug {

public:
    // prevent constructor by default
    LevelChunkMetaDataDebug& operator=(LevelChunkMetaDataDebug const&) = delete;
    LevelChunkMetaDataDebug(LevelChunkMetaDataDebug const&)            = delete;
    LevelChunkMetaDataDebug()                                          = delete;
};
