#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionDataSerializer {

public:
    // prevent constructor by default
    DimensionDataSerializer& operator=(DimensionDataSerializer const&) = delete;
    DimensionDataSerializer(DimensionDataSerializer const&)            = delete;
    DimensionDataSerializer()                                          = delete;

public:
    /**
     * @symbol
     * ?createSaveID\@DimensionDataSerializer\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI std::string createSaveID(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?deleteDataWithID\@DimensionDataSerializer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void deleteDataWithID(std::string const&, class LevelStorage&); // NOLINT
    /**
     * @symbol
     * ?forEachKeyWithDimensionPrefix\@DimensionDataSerializer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAVLevelStorage\@\@AEBV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z\@3\@\@Z
     */
    MCAPI void
    forEachKeyWithDimensionPrefix(std::string const&, std::string const&, class LevelStorage&, class std::function<void(std::string const&, class CompoundTag const&)> const&); // NOLINT
    /**
     * @symbol
     * ?saveDataWithID\@DimensionDataSerializer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void saveDataWithID(std::string const&, class CompoundTag const&, class LevelStorage&); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_createLevelStorageID\@DimensionDataSerializer\@\@IEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@00\@Z
     */
    MCAPI std::string _createLevelStorageID(std::string const&, std::string const&, std::string const&); // NOLINT

protected:
};
