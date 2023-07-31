#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EquipmentSlots {
// NOLINTBEGIN
/**
 * @symbol ?equipmentSlotToString\@EquipmentSlots\@\@YAPEBDW4EquipmentSlot\@\@\@Z
 */
MCAPI char const* equipmentSlotToString(enum class EquipmentSlot);
/**
 * @symbol ?hashToEquipmentSlot\@EquipmentSlots\@\@YA?AW4EquipmentSlot\@\@AEB_K\@Z
 */
MCAPI enum class EquipmentSlot hashToEquipmentSlot(uint64_t const&);
/**
 * @symbol
 * ?stringToEquipmentSlot\@EquipmentSlots\@\@YA?AW4EquipmentSlot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI enum class EquipmentSlot stringToEquipmentSlot(std::string const&);
// NOLINTEND

}; // namespace EquipmentSlots
