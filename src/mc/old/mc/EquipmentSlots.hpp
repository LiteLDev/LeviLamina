/**
 * @file  EquipmentSlots.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace EquipmentSlots.
 *
 */
namespace EquipmentSlots {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?equipmentSlotToString\@EquipmentSlots\@\@YAPEBDW4EquipmentSlot\@\@\@Z
     */
    MCAPI char const * equipmentSlotToString(enum class EquipmentSlot);
    /**
     * @symbol  ?hashToEquipmentSlot\@EquipmentSlots\@\@YA?AW4EquipmentSlot\@\@AEB_K\@Z
     */
    MCAPI enum class EquipmentSlot hashToEquipmentSlot(unsigned __int64 const &);
    /**
     * @symbol  ?stringToEquipmentSlot\@EquipmentSlots\@\@YA?AW4EquipmentSlot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class EquipmentSlot stringToEquipmentSlot(std::string const &);

};