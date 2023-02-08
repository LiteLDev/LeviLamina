/**
 * @file  VolumeInstanceData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1663677492
     * @symbol  ?bindVolumeStorageType\@VolumeInstanceData\@\@YAXXZ
     */
    MCAPI void bindVolumeStorageType();
    /**
     * @hash   1689821699
     * @symbol  ?deserialize\@VolumeInstanceData\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI void deserialize(std::string const &, class CompoundTag const &, class EntityContext &);
    /**
     * @hash   1641741492
     * @symbol  ?getIdentifier\@VolumeInstanceData\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI std::string const & getIdentifier(class CompoundTag const &);
    /**
     * @hash   172942366
     * @symbol  ?serialize\@VolumeInstanceData\@\@YA?AVCompoundTag\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI class CompoundTag serialize(class EntityContext const &);

};