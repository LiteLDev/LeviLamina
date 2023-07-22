/**
 * @file  SlotDropChance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


struct SlotDropChance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLOTDROPCHANCE
public:
    struct SlotDropChance& operator=(struct SlotDropChance const &) = delete;
    SlotDropChance(struct SlotDropChance const &) = delete;
    SlotDropChance() = delete;
#endif

public:
    /**
     * @symbol  ?setEquipmentSlot\@SlotDropChance\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setEquipmentSlot(std::string const &);

};