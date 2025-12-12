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
    // prevent constructor by default
    LevelChunkMetaDataBaseGameVersionWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LevelChunkMetaDataBaseGameVersionWrapper(::BaseGameVersion const& baseGameVersion);

    MCNAPI void initializeLevelChunkMetaData(::LevelChunkMetaData& metaData, bool use3DBiomeMaps) const;

    MCNAPI void setUninitializedDataForMetaData(::LevelChunkMetaData& metaData, bool use1_18Initialization) const;

    MCNAPI void updateLevelChunkMetaDataForSaving(::LevelChunkMetaData& metaData) const;

    MCNAPI ~LevelChunkMetaDataBaseGameVersionWrapper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
