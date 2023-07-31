#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FoodItemComponent {

public:
    // prevent constructor by default
    FoodItemComponent(FoodItemComponent const&) = delete;
    FoodItemComponent()                         = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOODITEMCOMPONENT
    /**
     * @symbol ?canAlwaysEat\@FoodItemComponent\@\@UEBA_NXZ
     */
    MCVAPI bool canAlwaysEat() const;
    /**
     * @symbol ?eatItem\@FoodItemComponent\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVActor\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI class Item const* eatItem(class ItemStack&, class Actor&, class Level&);
    /**
     * @symbol ?getNutrition\@FoodItemComponent\@\@UEBAHXZ
     */
    MCVAPI int getNutrition() const;
    /**
     * @symbol ?getSaturationModifier\@FoodItemComponent\@\@UEBAMXZ
     */
    MCVAPI float getSaturationModifier() const;
    /**
     * @symbol ?use\@FoodItemComponent\@\@UEAA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI bool use(class ItemStack&, class Player&);
    /**
     * @symbol ?useTimeDepleted\@FoodItemComponent\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVPlayer\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI class Item const* useTimeDepleted(class ItemStack&, class Player&, class Level&);
#endif
    /**
     * @symbol ?getUsingConvertsToItemDescriptor\@FoodItemComponent\@\@QEBA?AVItemDescriptor\@\@XZ
     */
    MCAPI class ItemDescriptor getUsingConvertsToItemDescriptor() const;
    /**
     * @symbol ??4FoodItemComponent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class FoodItemComponent& operator=(class FoodItemComponent const&);
    /**
     * @symbol ?bindType\@FoodItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@FoodItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
    /**
     * @symbol ?registerVersionUpgrades\@FoodItemComponent\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);
    // NOLINTEND
};
