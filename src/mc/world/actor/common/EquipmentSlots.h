#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EquipmentSlots {
/**
 * @symbol ?equipmentSlotToString\@EquipmentSlots\@\@YAPEBDW4EquipmentSlot\@\@\@Z
 */
MCAPI char const* equipmentSlotToString(enum class EquipmentSlot); // NOLINT
/**
 * @symbol ?hashToEquipmentSlot\@EquipmentSlots\@\@YA?AW4EquipmentSlot\@\@AEB_K\@Z
 */
MCAPI enum class EquipmentSlot hashToEquipmentSlot(unsigned __int64 const&); // NOLINT
/**
 * @symbol
 * ?stringToEquipmentSlot\@EquipmentSlots\@\@YA?AW4EquipmentSlot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI enum class EquipmentSlot stringToEquipmentSlot(std::string const&); // NOLINT

}; // namespace EquipmentSlots
