#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionDataSerializer {
public:
    // prevent constructor by default
    DimensionDataSerializer& operator=(DimensionDataSerializer const&);
    DimensionDataSerializer(DimensionDataSerializer const&);
    DimensionDataSerializer();

public:
    // NOLINTBEGIN
    MCAPI std::string createSaveID(std::string const&, std::string const& dimensionPrefix);

    MCAPI void deleteDataWithID(std::string const&, class LevelStorage& levelStorage);

    MCAPI void forEachKeyWithDimensionPrefix(
        std::string const&,
        std::string const&                                                       dimensionPrefix,
        class LevelStorage&                                                      levelStorage,
        std::function<void(std::string const&, class CompoundTag const&)> const& callback
    );

    MCAPI void saveDataWithID(std::string const&, class CompoundTag const& tag, class LevelStorage& levelStorage);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::string
          _createLevelStorageID(std::string const&, std::string const& dimensionPrefix, std::string const& saveId);

    // NOLINTEND
};
