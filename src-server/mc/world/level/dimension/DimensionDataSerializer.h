#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class LevelStorage;
// clang-format on

class DimensionDataSerializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSaveCounter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string _createLevelStorageID(::std::string const& savePrefix, ::std::string const& dimensionPrefix, ::std::string const& saveId);

    MCNAPI void forEachKeyWithDimensionPrefix(::std::string const& savePrefix, ::std::string const& dimensionPrefix, ::LevelStorage& levelStorage, ::std::function<void(::std::string const&, ::CompoundTag const&)> const& callback);

    MCNAPI void saveDataWithID(::std::string const& levelStorageId, ::CompoundTag const& tag, ::LevelStorage& levelStorage);
    // NOLINTEND

};
