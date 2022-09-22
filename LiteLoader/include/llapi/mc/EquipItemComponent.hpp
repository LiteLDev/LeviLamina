/**
 * @file  EquipItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EquipItemComponent.
 *
 */
class EquipItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPITEMCOMPONENT
public:
    class EquipItemComponent& operator=(class EquipItemComponent const &) = delete;
    EquipItemComponent(class EquipItemComponent const &) = delete;
    EquipItemComponent() = delete;
#endif

public:
    /**
     * @hash   691730775
     * @symbol ?onEquipItemPickedUp@EquipItemComponent@@QEAAXVItemStack@@H@Z
     */
    MCAPI void onEquipItemPickedUp(class ItemStack, int);
    /**
     * @hash   724127188
     * @symbol ??1EquipItemComponent@@QEAA@XZ
     */
    MCAPI ~EquipItemComponent();

};