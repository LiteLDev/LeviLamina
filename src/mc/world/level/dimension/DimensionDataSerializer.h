#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class LevelStorage;
struct DimensionType;
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
    MCNAPI ::std::string _createLevelStorageID(
        ::std::string const& savePrefix,
        ::std::string const& dimensionPrefix,
        ::std::string const& saveId
    );

    MCNAPI ::std::string createSaveID(::std::string const& savePrefix, ::std::string const& dimensionPrefix);

    MCNAPI void forEachKeyWithDimensionPrefix(
        ::std::string const&                                                     savePrefix,
        ::std::string const&                                                     dimensionPrefix,
        ::DimensionType                                                          type,
        ::LevelStorage&                                                          levelStorage,
        ::std::function<void(::std::string const&, ::CompoundTag const&)> const& callback
    );
    // NOLINTEND
};
