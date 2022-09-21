/**
 * @file  MC/VolumeInstanceData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VolumeInstanceData.
 *
 */
namespace VolumeInstanceData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -609714196
     * @symbol ?bindVolumeStorageType@VolumeInstanceData@@YAXXZ
     */
    MCAPI void bindVolumeStorageType();
    /**
     * @hash   -1551182301
     * @symbol ?deserialize@VolumeInstanceData@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVEntityContext@@@Z
     */
    MCAPI void deserialize(std::string const &, class CompoundTag const &, class EntityContext &);
    /**
     * @hash   -1600154316
     * @symbol ?getIdentifier@VolumeInstanceData@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
     */
    MCAPI std::string const & getIdentifier(class CompoundTag const &);
    /**
     * @hash   1226244494
     * @symbol ?serialize@VolumeInstanceData@@YA?AVCompoundTag@@AEBVEntityContext@@@Z
     */
    MCAPI class CompoundTag serialize(class EntityContext const &);

};