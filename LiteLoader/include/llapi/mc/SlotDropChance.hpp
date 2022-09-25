/**
 * @file  SlotDropChance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SlotDropChance.
 *
 */
class SlotDropChance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLOTDROPCHANCE
public:
    class SlotDropChance& operator=(class SlotDropChance const &) = delete;
    SlotDropChance(class SlotDropChance const &) = delete;
    SlotDropChance() = delete;
#endif

public:
    /**
     * @hash   935193916
     * @symbol ?setEquipmentSlot@SlotDropChance@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setEquipmentSlot(std::string const &);

};