/**
 * @file  Recipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Recipe.
 *
 */
class Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPE
public:
    class Recipe& operator=(class Recipe const &) = delete;
    Recipe(class Recipe const &) = delete;
    Recipe() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?assemble\@ShapelessRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &, class CraftingContext &) const = 0;
    /**
     * @vftbl 2
     * @symbol ?getCraftingSize\@BannerAddPatternRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const = 0;
    /**
     * @vftbl 3
     * @symbol ?getIngredient\@ShapelessRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const = 0;
    /**
     * @vftbl 4
     * @symbol ?getResultItem\@ShapelessRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const = 0;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5() = 0;
    /**
     * @vftbl 6
     * @symbol ?matches\@ShapedChemistryRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const &, class CraftingContext const &) const = 0;
    /**
     * @vftbl 7
     * @symbol ?size\@BannerAddPatternRecipe\@\@UEBAHXZ
     */
    virtual int size() const = 0;
    /**
     * @vftbl 8
     * @symbol ?getId\@Recipe\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    virtual class mce::UUID const & getId() const;
    /**
     * @vftbl 9
     * @symbol ?isMultiRecipe\@Recipe\@\@UEBA_NXZ
     */
    virtual bool isMultiRecipe() const;
    /**
     * @vftbl 10
     * @symbol ?hasDataDrivenResult\@Recipe\@\@UEBA_NXZ
     */
    virtual bool hasDataDrivenResult() const;
    /**
     * @vftbl 11
     * @symbol ?itemValidForRecipe\@Recipe\@\@UEBA_NAEBVItemDescriptor\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool itemValidForRecipe(class ItemDescriptor const &, class ItemStack const &) const;
    /**
     * @vftbl 12
     * @symbol ?itemsMatch\@Recipe\@\@UEBA_NAEBVItemDescriptor\@\@0\@Z
     */
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &) const;
    /**
     * @vftbl 13
     * @symbol ?itemsMatch\@Recipe\@\@UEBA_NAEBVItemDescriptor\@\@0PEBVCompoundTag\@\@\@Z
     */
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl 14
     * @symbol ?getIngredientsHash\@Recipe\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getIngredientsHash() const;
    /**
     * @vftbl 15
     * @symbol ?loadResultList\@Recipe\@\@UEBAXAEBVBlockPalette\@\@\@Z
     */
    virtual void loadResultList(class BlockPalette const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECIPE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Recipe();
#endif
    /**
     * @symbol ?countQuantityOfIngredient\@Recipe\@\@QEBAHAEBVItemInstance\@\@\@Z
     */
    MCAPI int countQuantityOfIngredient(class ItemInstance const &) const;
    /**
     * @symbol ?getHeight\@Recipe\@\@QEBAHXZ
     */
    MCAPI int getHeight() const;
    /**
     * @symbol ?getIngredients\@Recipe\@\@QEBAAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class RecipeIngredient> const & getIngredients() const;
    /**
     * @symbol ?getNetId\@Recipe\@\@QEBAAEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const & getNetId() const;
    /**
     * @symbol ?getPriority\@Recipe\@\@QEBAHXZ
     */
    MCAPI int getPriority() const;
    /**
     * @symbol ?getRecipeId\@Recipe\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getRecipeId() const;
    /**
     * @symbol ?getTag\@Recipe\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getTag() const;
    /**
     * @symbol ?getUnlockingRequirement\@Recipe\@\@QEBAAEBVRecipeUnlockingRequirement\@\@XZ
     */
    MCAPI class RecipeUnlockingRequirement const & getUnlockingRequirement() const;
    /**
     * @symbol ?getWidth\@Recipe\@\@QEBAHXZ
     */
    MCAPI int getWidth() const;
    /**
     * @symbol ?setNetId\@Recipe\@\@QEAAXAEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI void setNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    /**
     * @symbol ?isAnyAuxValue\@Recipe\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isAnyAuxValue(class ItemDescriptor const &);

//protected:
    /**
     * @symbol ??0Recipe\@\@IEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@VHashedString\@\@AEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@V?$optional\@VRecipeUnlockingRequirement\@\@\@2\@\@Z
     */
    MCAPI Recipe(class std::basic_string_view<char, struct std::char_traits<char>>, class HashedString, std::vector<class RecipeIngredient> const &, class std::optional<class RecipeUnlockingRequirement>);

protected:

};
