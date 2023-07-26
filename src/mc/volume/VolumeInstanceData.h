#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VolumeInstanceData {
/**
 * @symbol ?bindVolumeStorageType\@VolumeInstanceData\@\@YAXXZ
 */
MCAPI void bindVolumeStorageType(); // NOLINT
/**
 * @symbol
 * ?deserialize\@VolumeInstanceData\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAVEntityContext\@\@\@Z
 */
MCAPI void deserialize(std::string const&, class CompoundTag const&, class EntityContext&); // NOLINT
/**
 * @symbol
 * ?getIdentifier\@VolumeInstanceData\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
 */
MCAPI std::string const& getIdentifier(class CompoundTag const&); // NOLINT
/**
 * @symbol ?serialize\@VolumeInstanceData\@\@YA?AVCompoundTag\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI class CompoundTag serialize(class EntityContext const&); // NOLINT

}; // namespace VolumeInstanceData
