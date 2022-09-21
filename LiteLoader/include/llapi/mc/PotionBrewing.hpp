/**
 * @file  MC/PotionBrewing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PotionBrewing.
 *
 */
class PotionBrewing {

#define AFTER_EXTRA
// Add Member There
public:
class Ingredient {
public:
    Ingredient() = delete;
    Ingredient(Ingredient const&) = delete;
    Ingredient(Ingredient const&&) = delete;
};
template <typename T0>
class Mix {
public:
    Mix() = delete;
    Mix(Mix const&) = delete;
    Mix(Mix const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POTIONBREWING
public:
    class PotionBrewing& operator=(class PotionBrewing const &) = delete;
    PotionBrewing(class PotionBrewing const &) = delete;
    PotionBrewing() = delete;
#endif

public:
    /**
     * @hash   1948228727
     * @symbol ?addContainerRecipe@PotionBrewing@@SAXAEBVItem@@AEBVIngredient@1@0@Z
     */
    MCAPI static void addContainerRecipe(class Item const &, class PotionBrewing::Ingredient const &, class Item const &);
    /**
     * @hash   1283367418
     * @symbol ?addPotionMix@PotionBrewing@@SAXAEBVItemDescriptor@@AEBVIngredient@1@0@Z
     */
    MCAPI static void addPotionMix(class ItemDescriptor const &, class PotionBrewing::Ingredient const &, class ItemDescriptor const &);
    /**
     * @hash   791147427
     * @symbol ?getFuelValue@PotionBrewing@@SAHAEBVItemDescriptor@@@Z
     */
    MCAPI static int getFuelValue(class ItemDescriptor const &);
    /**
     * @hash   2055883956
     * @symbol ?hasMix@PotionBrewing@@SA_NAEBVItemInstance@@AEBVItemDescriptor@@@Z
     */
    MCAPI static bool hasMix(class ItemInstance const &, class ItemDescriptor const &);
    /**
     * @hash   -1351817059
     * @symbol ?initPotionBrewing@PotionBrewing@@SAXXZ
     */
    MCAPI static void initPotionBrewing();
    /**
     * @hash   -2040255085
     * @symbol ?isFuel@PotionBrewing@@SA_NAEBVItemDescriptor@@@Z
     */
    MCAPI static bool isFuel(class ItemDescriptor const &);
    /**
     * @hash   -242001331
     * @symbol ?isIngredient@PotionBrewing@@SA_NAEBVItemDescriptor@@@Z
     */
    MCAPI static bool isIngredient(class ItemDescriptor const &);
    /**
     * @hash   971753923
     * @symbol ?isPotionRecipeInput@PotionBrewing@@SA_NAEBVItemDescriptor@@@Z
     */
    MCAPI static bool isPotionRecipeInput(class ItemDescriptor const &);
    /**
     * @hash   -1713189894
     * @symbol ?mix@PotionBrewing@@SA?AVItemInstance@@AEBVItemDescriptor@@AEBV2@@Z
     */
    MCAPI static class ItemInstance mix(class ItemDescriptor const &, class ItemInstance const &);
    /**
     * @hash   1995672669
     * @symbol ?shutdown@PotionBrewing@@SAXXZ
     */
    MCAPI static void shutdown();

//private:
    /**
     * @hash   1110540623
     * @symbol ?addChemistryMix@PotionBrewing@@CAXAEBVItemInstance@@AEBVIngredient@1@0@Z
     */
    MCAPI static void addChemistryMix(class ItemInstance const &, class PotionBrewing::Ingredient const &, class ItemInstance const &);
    /**
     * @hash   254053426
     * @symbol ?getChemistryMix@PotionBrewing@@CA?AVItemInstance@@AEBVItemDescriptor@@0@Z
     */
    MCAPI static class ItemInstance getChemistryMix(class ItemDescriptor const &, class ItemDescriptor const &);

private:
    /**
     * @hash   -1606596213
     * @symbol ?mChemistryMixes@PotionBrewing@@0V?$vector@V?$Mix@VItemInstance@@@PotionBrewing@@V?$allocator@V?$Mix@VItemInstance@@@PotionBrewing@@@std@@@std@@A
     */
    MCAPI static std::vector<class PotionBrewing::Mix<class ItemInstance>> mChemistryMixes;
    /**
     * @hash   -1134008298
     * @symbol ?mContainerMixes@PotionBrewing@@0V?$vector@V?$Mix@AEBVItem@@@PotionBrewing@@V?$allocator@V?$Mix@AEBVItem@@@PotionBrewing@@@std@@@std@@A
     */
    MCAPI static std::vector<class PotionBrewing::Mix<class Item const &>> mContainerMixes;
    /**
     * @hash   643661618
     * @symbol ?mPotionMixes@PotionBrewing@@0V?$vector@V?$Mix@VItemDescriptor@@@PotionBrewing@@V?$allocator@V?$Mix@VItemDescriptor@@@PotionBrewing@@@std@@@std@@A
     */
    MCAPI static std::vector<class PotionBrewing::Mix<class ItemDescriptor>> mPotionMixes;
    /**
     * @hash   1388834741
     * @symbol ?mValidContainers@PotionBrewing@@0V?$vector@VIngredient@PotionBrewing@@V?$allocator@VIngredient@PotionBrewing@@@std@@@std@@A
     */
    MCAPI static std::vector<class PotionBrewing::Ingredient> mValidContainers;
    /**
     * @hash   -755659755
     * @symbol ?mValidIngredients@PotionBrewing@@0V?$unordered_set@VIngredient@PotionBrewing@@U?$hash@VIngredient@PotionBrewing@@@std@@U?$equal_to@VIngredient@PotionBrewing@@@4@V?$allocator@VIngredient@PotionBrewing@@@4@@std@@A
     */
    MCAPI static class std::unordered_set<class PotionBrewing::Ingredient, struct std::hash<class PotionBrewing::Ingredient>, struct std::equal_to<class PotionBrewing::Ingredient>, class std::allocator<class PotionBrewing::Ingredient>> mValidIngredients;
    /**
     * @hash   -491790968
     * @symbol ?mValidRecipeInputs@PotionBrewing@@0V?$unordered_set@VIngredient@PotionBrewing@@U?$hash@VIngredient@PotionBrewing@@@std@@U?$equal_to@VIngredient@PotionBrewing@@@4@V?$allocator@VIngredient@PotionBrewing@@@4@@std@@A
     */
    MCAPI static class std::unordered_set<class PotionBrewing::Ingredient, struct std::hash<class PotionBrewing::Ingredient>, struct std::equal_to<class PotionBrewing::Ingredient>, class std::allocator<class PotionBrewing::Ingredient>> mValidRecipeInputs;

};