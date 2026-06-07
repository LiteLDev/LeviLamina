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
    MCAPI ::std::string _createLevelStorageID(
        ::std::string const& savePrefix,
        ::std::string const& dimensionPrefix,
        ::std::string const& saveId
    );

    MCAPI ::std::string createSaveID(::std::string const& savePrefix, ::std::string const& dimensionPrefix);

    MCAPI void deleteDataWithID(::std::string const& levelStorageId, ::LevelStorage& levelStorage);

    MCAPI void forEachKeyWithDimensionPrefix(
        ::std::string const&                                                     savePrefix,
        ::std::string const&                                                     dimensionPrefix,
        ::DimensionType                                                          type,
        ::LevelStorage&                                                          levelStorage,
        ::std::function<void(::std::string const&, ::CompoundTag const&)> const& callback
    );

    MCAPI void
    saveDataWithID(::std::string const& levelStorageId, ::CompoundTag const& tag, ::LevelStorage& levelStorage);
    // NOLINTEND
};
