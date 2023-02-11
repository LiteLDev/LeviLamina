/**
 * @file  PotionBrewing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1521155001
     * @symbol  ?addContainerRecipe\@PotionBrewing\@\@SAXAEBVItem\@\@AEBVIngredient\@1\@0\@Z
     */
    MCAPI static void addContainerRecipe(class Item const &, class PotionBrewing::Ingredient const &, class Item const &);
    /**
     * @hash   2109473770
     * @symbol  ?addPotionMix\@PotionBrewing\@\@SAXAEBVItemDescriptor\@\@AEBVIngredient\@1\@0\@Z
     */
    MCAPI static void addPotionMix(class ItemDescriptor const &, class PotionBrewing::Ingredient const &, class ItemDescriptor const &);
    /**
     * @hash   1617699683
     * @symbol  ?getFuelValue\@PotionBrewing\@\@SAHAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static int getFuelValue(class ItemDescriptor const &);
    /**
     * @hash   -1412515708
     * @symbol  ?hasMix\@PotionBrewing\@\@SA_NAEBVItemInstance\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool hasMix(class ItemInstance const &, class ItemDescriptor const &);
    /**
     * @hash   -525203299
     * @symbol  ?initPotionBrewing\@PotionBrewing\@\@SAXXZ
     */
    MCAPI static void initPotionBrewing();
    /**
     * @hash   -1213641325
     * @symbol  ?isFuel\@PotionBrewing\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isFuel(class ItemDescriptor const &);
    /**
     * @hash   584627805
     * @symbol  ?isIngredient\@PotionBrewing\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isIngredient(class ItemDescriptor const &);
    /**
     * @hash   1798398435
     * @symbol  ?isPotionRecipeInput\@PotionBrewing\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isPotionRecipeInput(class ItemDescriptor const &);
    /**
     * @hash   -886545382
     * @symbol  ?mix\@PotionBrewing\@\@SA?AVItemInstance\@\@AEBVItemDescriptor\@\@AEBV2\@\@Z
     */
    MCAPI static class ItemInstance mix(class ItemDescriptor const &, class ItemInstance const &);
    /**
     * @hash   -1472496355
     * @symbol  ?shutdown\@PotionBrewing\@\@SAXXZ
     */
    MCAPI static void shutdown();

//private:
    /**
     * @hash   1936139567
     * @symbol  ?addChemistryMix\@PotionBrewing\@\@CAXAEBVItemInstance\@\@AEBVIngredient\@1\@0\@Z
     */
    MCAPI static void addChemistryMix(class ItemInstance const &, class PotionBrewing::Ingredient const &, class ItemInstance const &);
    /**
     * @hash   1080667186
     * @symbol  ?getChemistryMix\@PotionBrewing\@\@CA?AVItemInstance\@\@AEBVItemDescriptor\@\@0\@Z
     */
    MCAPI static class ItemInstance getChemistryMix(class ItemDescriptor const &, class ItemDescriptor const &);

private:
    /**
     * @hash   -705700997
     * @symbol  ?mChemistryMixes\@PotionBrewing\@\@0V?$vector\@V?$Mix\@VItemInstance\@\@\@PotionBrewing\@\@V?$allocator\@V?$Mix\@VItemInstance\@\@\@PotionBrewing\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<class PotionBrewing::Mix<class ItemInstance>> mChemistryMixes;
    /**
     * @hash   -233113082
     * @symbol  ?mContainerMixes\@PotionBrewing\@\@0V?$vector\@V?$Mix\@AEBVItem\@\@\@PotionBrewing\@\@V?$allocator\@V?$Mix\@AEBVItem\@\@\@PotionBrewing\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<class PotionBrewing::Mix<class Item const &>> mContainerMixes;
    /**
     * @symbol  ?mIsInitialized\@PotionBrewing\@\@0_NA
     */
    MCAPI static bool mIsInitialized;
    /**
     * @hash   1544556834
     * @symbol  ?mPotionMixes\@PotionBrewing\@\@0V?$vector\@V?$Mix\@VItemDescriptor\@\@\@PotionBrewing\@\@V?$allocator\@V?$Mix\@VItemDescriptor\@\@\@PotionBrewing\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<class PotionBrewing::Mix<class ItemDescriptor>> mPotionMixes;
    /**
     * @hash   -2005237339
     * @symbol  ?mValidContainers\@PotionBrewing\@\@0V?$vector\@VIngredient\@PotionBrewing\@\@V?$allocator\@VIngredient\@PotionBrewing\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<class PotionBrewing::Ingredient> mValidContainers;
    /**
     * @hash   145235461
     * @symbol  ?mValidIngredients\@PotionBrewing\@\@0V?$unordered_set\@VIngredient\@PotionBrewing\@\@U?$hash\@VIngredient\@PotionBrewing\@\@\@std\@\@U?$equal_to\@VIngredient\@PotionBrewing\@\@\@4\@V?$allocator\@VIngredient\@PotionBrewing\@\@\@4\@\@std\@\@A
     */
    MCAPI static class std::unordered_set<class PotionBrewing::Ingredient, struct std::hash<class PotionBrewing::Ingredient>, struct std::equal_to<class PotionBrewing::Ingredient>, class std::allocator<class PotionBrewing::Ingredient>> mValidIngredients;
    /**
     * @hash   409104248
     * @symbol  ?mValidRecipeInputs\@PotionBrewing\@\@0V?$unordered_set\@VIngredient\@PotionBrewing\@\@U?$hash\@VIngredient\@PotionBrewing\@\@\@std\@\@U?$equal_to\@VIngredient\@PotionBrewing\@\@\@4\@V?$allocator\@VIngredient\@PotionBrewing\@\@\@4\@\@std\@\@A
     */
    MCAPI static class std::unordered_set<class PotionBrewing::Ingredient, struct std::hash<class PotionBrewing::Ingredient>, struct std::equal_to<class PotionBrewing::Ingredient>, class std::allocator<class PotionBrewing::Ingredient>> mValidRecipeInputs;

};