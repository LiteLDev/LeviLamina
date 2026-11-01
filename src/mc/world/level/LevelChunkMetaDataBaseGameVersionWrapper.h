#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class LevelChunkMetaData;
// clang-format on

class LevelChunkMetaDataBaseGameVersionWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::BaseGameVersion> mBaseGameVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initializeLevelChunkMetaData(::LevelChunkMetaData& metaData, bool use3DBiomeMaps) const;

    MCNAPI void updateLevelChunkMetaDataForSaving(::LevelChunkMetaData& metaData) const;
    // NOLINTEND
};
