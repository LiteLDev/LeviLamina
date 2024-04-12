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
    // symbol:
    // ?createSaveID@DimensionDataSerializer@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
    MCAPI std::string createSaveID(std::string const&, std::string const& dimensionPrefix);

    // symbol:
    // ?deleteDataWithID@DimensionDataSerializer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelStorage@@@Z
    MCAPI void deleteDataWithID(std::string const&, class LevelStorage& levelStorage);

    // symbol:
    // ?forEachKeyWithDimensionPrefix@DimensionDataSerializer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVLevelStorage@@AEBV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z@3@@Z
    MCAPI void forEachKeyWithDimensionPrefix(
        std::string const&,
        std::string const&                                                       dimensionPrefix,
        class LevelStorage&                                                      levelStorage,
        std::function<void(std::string const&, class CompoundTag const&)> const& callback
    );

    // symbol:
    // ?saveDataWithID@DimensionDataSerializer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVLevelStorage@@@Z
    MCAPI void saveDataWithID(std::string const&, class CompoundTag const& tag, class LevelStorage& levelStorage);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_createLevelStorageID@DimensionDataSerializer@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@00@Z
    MCAPI std::string
          _createLevelStorageID(std::string const&, std::string const& dimensionPrefix, std::string const& saveId);

    // NOLINTEND
};
