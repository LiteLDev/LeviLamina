/**
 * @file  MC/FoodItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FoodItemComponent.
 *
 */
class FoodItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOODITEMCOMPONENT
public:
    FoodItemComponent(class FoodItemComponent const &) = delete;
    FoodItemComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOODITEMCOMPONENT
    /**
     * @hash   2129534149
     * @symbol ?canAlwaysEat@FoodItemComponent@@UEBA_NXZ
     */
    MCVAPI bool canAlwaysEat() const;
    /**
     * @hash   1537312930
     * @symbol ?eatItem@FoodItemComponent@@UEAAPEBVItem@@AEAVItemStack@@AEAVActor@@AEAVLevel@@@Z
     */
    MCVAPI class Item const * eatItem(class ItemStack &, class Actor &, class Level &);
    /**
     * @hash   -1994821167
     * @symbol ?getNutrition@FoodItemComponent@@UEBAHXZ
     */
    MCVAPI int getNutrition() const;
    /**
     * @hash   -1527826287
     * @symbol ?getSaturationModifier@FoodItemComponent@@UEBAMXZ
     */
    MCVAPI float getSaturationModifier() const;
    /**
     * @hash   224556592
     * @symbol ?use@FoodItemComponent@@UEAA_NAEAVItemStack@@AEAVPlayer@@@Z
     */
    MCVAPI bool use(class ItemStack &, class Player &);
    /**
     * @hash   -6637150
     * @symbol ?useTimeDepleted@FoodItemComponent@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z
     */
    MCVAPI class Item const * useTimeDepleted(class ItemStack &, class Player &, class Level &);
#endif
    /**
     * @hash   -1629108816
     * @symbol ?getUsingConvertsToItemDescriptor@FoodItemComponent@@QEBA?AVItemDescriptor@@XZ
     */
    MCAPI class ItemDescriptor getUsingConvertsToItemDescriptor() const;
    /**
     * @hash   -810355156
     * @symbol ??4FoodItemComponent@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class FoodItemComponent & operator=(class FoodItemComponent const &);
    /**
     * @hash   -1731535345
     * @symbol ?bindType@FoodItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1978733776
     * @symbol ?getIdentifier@FoodItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();
    /**
     * @hash   -1288610672
     * @symbol ?registerVersionUpgrades@FoodItemComponent@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};