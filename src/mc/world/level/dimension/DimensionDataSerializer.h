#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionDataSerializer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDATASERIALIZER
public:
    DimensionDataSerializer& operator=(DimensionDataSerializer const&) = delete;
    DimensionDataSerializer(DimensionDataSerializer const&)            = delete;
    DimensionDataSerializer()                                          = delete;
#endif

public:
    /**
     * @symbol
     * ?createSaveID\@DimensionDataSerializer\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI std::string createSaveID(std::string const&, std::string const&);
    /**
     * @symbol
     * ?deleteDataWithID\@DimensionDataSerializer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void deleteDataWithID(std::string const&, class LevelStorage&);
    /**
     * @symbol
     * ?forEachKeyWithDimensionPrefix\@DimensionDataSerializer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAVLevelStorage\@\@AEBV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z\@3\@\@Z
     */
    MCAPI void
    forEachKeyWithDimensionPrefix(std::string const&, std::string const&, class LevelStorage&, class std::function<void(std::string const&, class CompoundTag const&)> const&);
    /**
     * @symbol
     * ?saveDataWithID\@DimensionDataSerializer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void saveDataWithID(std::string const&, class CompoundTag const&, class LevelStorage&);

    // protected:
    /**
     * @symbol
     * ?_createLevelStorageID\@DimensionDataSerializer\@\@IEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@00\@Z
     */
    MCAPI std::string _createLevelStorageID(std::string const&, std::string const&, std::string const&);

protected:
};
