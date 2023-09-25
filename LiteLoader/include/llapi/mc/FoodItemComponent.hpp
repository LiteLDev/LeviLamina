/**
 * @file  FoodItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

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
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOODITEMCOMPONENT
    /**
     * @symbol ?canAlwaysEat\@FoodItemComponent\@\@UEBA_NXZ
     */
    MCVAPI bool canAlwaysEat() const;
    /**
     * @symbol ?eatItem\@FoodItemComponent\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVActor\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI class Item const * eatItem(class ItemStack &, class Actor &, class Level &);
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
    MCVAPI bool use(class ItemStack &, class Player &);
    /**
     * @symbol ?useTimeDepleted\@FoodItemComponent\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVPlayer\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI class Item const * useTimeDepleted(class ItemStack &, class Player &, class Level &);
#endif
    /**
     * @symbol ??0FoodItemComponent\@\@QEAA\@XZ
     */
    MCAPI FoodItemComponent();
    /**
     * @symbol ?getUsingConvertsToItemDescriptor\@FoodItemComponent\@\@QEBA?AVItemDescriptor\@\@XZ
     */
    MCAPI class ItemDescriptor getUsingConvertsToItemDescriptor() const;
    /**
     * @symbol ??4FoodItemComponent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class FoodItemComponent & operator=(class FoodItemComponent const &);
    /**
     * @symbol ?bindType\@FoodItemComponent\@\@SAXAEAUReflectionCtx\@cereal\@\@AEBV?$vector\@W4AllExperiments\@\@V?$allocator\@W4AllExperiments\@\@\@std\@\@\@std\@\@V?$optional\@VSemVersion\@\@\@5\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &, std::vector<enum class AllExperiments> const &, class std::optional<class SemVersion>);
    /**
     * @symbol ?getIdentifier\@FoodItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};
