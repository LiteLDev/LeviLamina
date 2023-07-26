#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlotDropChance {

public:
    // prevent constructor by default
    SlotDropChance& operator=(SlotDropChance const&) = delete;
    SlotDropChance(SlotDropChance const&)            = delete;
    SlotDropChance()                                 = delete;

public:
    /**
     * @symbol
     * ?setEquipmentSlot\@SlotDropChance\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setEquipmentSlot(std::string const&); // NOLINT
};
