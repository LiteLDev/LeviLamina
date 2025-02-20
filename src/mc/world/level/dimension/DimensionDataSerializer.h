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
    ::ll::UntypedStorage<4, 4> mUnkeb24b9;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionDataSerializer& operator=(DimensionDataSerializer const&);
    DimensionDataSerializer(DimensionDataSerializer const&);
    DimensionDataSerializer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string _createLevelStorageID(
        ::std::string const& savePrefix,
        ::std::string const& dimensionPrefix,
        ::std::string const& saveId
    );

    MCAPI void forEachKeyWithDimensionPrefix(
        ::std::string const&                                                     savePrefix,
        ::std::string const&                                                     dimensionPrefix,
        ::LevelStorage&                                                          levelStorage,
        ::std::function<void(::std::string const&, ::CompoundTag const&)> const& callback
    );

    MCAPI void
    saveDataWithID(::std::string const& levelStorageId, ::CompoundTag const& tag, ::LevelStorage& levelStorage);
    // NOLINTEND
};
