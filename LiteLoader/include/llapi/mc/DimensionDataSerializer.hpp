/**
 * @file  DimensionDataSerializer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DimensionDataSerializer.
 *
 */
class DimensionDataSerializer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDATASERIALIZER
public:
    class DimensionDataSerializer& operator=(class DimensionDataSerializer const &) = delete;
    DimensionDataSerializer(class DimensionDataSerializer const &) = delete;
    DimensionDataSerializer() = delete;
#endif

public:
    /**
     * @hash   756467641
     * @symbol  ?createSaveID\@DimensionDataSerializer\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI std::string createSaveID(std::string const &, std::string const &);
    /**
     * @hash   1474765739
     * @symbol  ?deleteDataWithID\@DimensionDataSerializer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void deleteDataWithID(std::string const &, class LevelStorage &);
    /**
     * @hash   1441767904
     * @symbol  ?forEachKeyWithDimensionPrefix\@DimensionDataSerializer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAVLevelStorage\@\@AEBV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z\@3\@\@Z
     */
    MCAPI void forEachKeyWithDimensionPrefix(std::string const &, std::string const &, class LevelStorage &, class std::function<void (std::string const &, class CompoundTag const &)> const &);
    /**
     * @hash   322051482
     * @symbol  ?saveDataWithID\@DimensionDataSerializer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void saveDataWithID(std::string const &, class CompoundTag const &, class LevelStorage &);

//protected:
    /**
     * @hash   854979410
     * @symbol  ?_createLevelStorageID\@DimensionDataSerializer\@\@IEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@00\@Z
     */
    MCAPI std::string _createLevelStorageID(std::string const &, std::string const &, std::string const &);

protected:

};