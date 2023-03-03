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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Recipe();
    /**
     * @vftbl  1
     * @symbol  ?assemble\@SmithingTransformRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const = 0;
    /**
     * @vftbl  2
     * @symbol  ?getCraftingSize\@ShapelessRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const = 0;
    /**
     * @vftbl  3
     * @symbol  ?getIngredient\@ShapelessRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const = 0;
    /**
     * @vftbl  4
     * @symbol  ?getResultItem\@ShapelessRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const = 0;
    /**
     * @vftbl  5
     * @symbol  ?isShapeless\@ShapelessRecipe\@\@UEBA_NXZ
     */
    virtual bool isShapeless() const = 0;
    /**
     * @vftbl  6
     * @symbol  ?matches\@ShapelessRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const = 0;
    /**
     * @vftbl  7
     * @symbol  ?size\@ShapelessRecipe\@\@UEBAHXZ
     */
    virtual int size() const = 0;
    /**
     * @vftbl  8
     * @symbol  ?getId\@Recipe\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    virtual class mce::UUID const & getId() const;
    /**
     * @vftbl  9
     * @symbol  ?isMultiRecipe\@Recipe\@\@UEBA_NXZ
     */
    virtual bool isMultiRecipe() const;
    /**
     * @vftbl  10
     * @symbol  ?itemValidForRecipe\@Recipe\@\@UEBA_NAEBVItemDescriptor\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool itemValidForRecipe(class ItemDescriptor const &, class ItemStack const &) const;
    /**
     * @vftbl  11
     * @symbol  ?itemsMatch\@Recipe\@\@UEBA_NAEBVItemDescriptor\@\@0\@Z
     */
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &) const;
    /**
     * @vftbl  12
     * @symbol  ?itemsMatch\@Recipe\@\@UEBA_NAEBVItemDescriptor\@\@0PEBVCompoundTag\@\@\@Z
     */
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  13
     * @symbol  ?getIngredientsHash\@Recipe\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getIngredientsHash() const;
    /**
     * @vftbl  14
     * @symbol  ?loadResultList\@Recipe\@\@UEBAXAEBVBlockPalette\@\@\@Z
     */
    virtual void loadResultList(class BlockPalette const &) const;
    /**
     * @symbol  ?countQuantityOfIngredient\@Recipe\@\@QEBAHAEBVItemInstance\@\@\@Z
     */
    MCAPI int countQuantityOfIngredient(class ItemInstance const &) const;
    /**
     * @symbol  ?getHeight\@Recipe\@\@QEBAHXZ
     */
    MCAPI int getHeight() const;
    /**
     * @symbol  ?getIngredients\@Recipe\@\@QEBAAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class RecipeIngredient> const & getIngredients() const;
    /**
     * @symbol  ?getNetId\@Recipe\@\@QEBAAEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const & getNetId() const;
    /**
     * @symbol  ?getPriority\@Recipe\@\@QEBAHXZ
     */
    MCAPI int getPriority() const;
    /**
     * @symbol  ?getRecipeId\@Recipe\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getRecipeId() const;
    /**
     * @symbol  ?getTag\@Recipe\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getTag() const;
    /**
     * @symbol  ?getWidth\@Recipe\@\@QEBAHXZ
     */
    MCAPI int getWidth() const;
    /**
     * @symbol  ?setNetId\@Recipe\@\@QEAAXAEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI void setNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    /**
     * @symbol  ?isAnyAuxValue\@Recipe\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isAnyAuxValue(class ItemDescriptor const &);

//protected:
    /**
     * @symbol  ??0Recipe\@\@IEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@VHashedString\@\@AEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI Recipe(class gsl::basic_string_span<char const, -1>, class HashedString, std::vector<class RecipeIngredient> const &);

protected:

};