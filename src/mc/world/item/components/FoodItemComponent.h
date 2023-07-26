#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FoodItemComponent {

public:
    // prevent constructor by default
    FoodItemComponent(FoodItemComponent const&) = delete;
    FoodItemComponent()                         = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOODITEMCOMPONENT
    /**
     * @symbol ?canAlwaysEat\@FoodItemComponent\@\@UEBA_NXZ
     */
    MCVAPI bool canAlwaysEat() const; // NOLINT
    /**
     * @symbol ?eatItem\@FoodItemComponent\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVActor\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI class Item const* eatItem(class ItemStack&, class Actor&, class Level&); // NOLINT
    /**
     * @symbol ?getNutrition\@FoodItemComponent\@\@UEBAHXZ
     */
    MCVAPI int getNutrition() const; // NOLINT
    /**
     * @symbol ?getSaturationModifier\@FoodItemComponent\@\@UEBAMXZ
     */
    MCVAPI float getSaturationModifier() const; // NOLINT
    /**
     * @symbol ?use\@FoodItemComponent\@\@UEAA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI bool use(class ItemStack&, class Player&); // NOLINT
    /**
     * @symbol ?useTimeDepleted\@FoodItemComponent\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVPlayer\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI class Item const* useTimeDepleted(class ItemStack&, class Player&, class Level&); // NOLINT
#endif
    /**
     * @symbol ?getUsingConvertsToItemDescriptor\@FoodItemComponent\@\@QEBA?AVItemDescriptor\@\@XZ
     */
    MCAPI class ItemDescriptor getUsingConvertsToItemDescriptor() const; // NOLINT
    /**
     * @symbol ??4FoodItemComponent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class FoodItemComponent& operator=(class FoodItemComponent const&); // NOLINT
    /**
     * @symbol ?bindType\@FoodItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?getIdentifier\@FoodItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier(); // NOLINT
    /**
     * @symbol ?registerVersionUpgrades\@FoodItemComponent\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&); // NOLINT
};
