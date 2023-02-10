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
     * @hash   -1423514703
     * @vftbl  2
     * @symbol  ?getCraftingSize\@ShapelessRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const = 0;
    /**
     * @hash   1418852850
     * @vftbl  3
     * @symbol  ?getIngredient\@ShapelessRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const = 0;
    /**
     * @hash   -737841698
     * @vftbl  4
     * @symbol  ?getResultItem\@ShapelessRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const = 0;
    /**
     * @hash   748928437
     * @vftbl  5
     * @symbol  ?isShapeless\@ShapelessRecipe\@\@UEBA_NXZ
     */
    virtual bool isShapeless() const = 0;
    /**
     * @hash   446482067
     * @vftbl  6
     * @symbol  ?matches\@ShapelessRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const = 0;
    /**
     * @hash   -1084891239
     * @vftbl  7
     * @symbol  ?size\@ShapelessRecipe\@\@UEBAHXZ
     */
    virtual int size() const = 0;
    /**
     * @hash   1985067334
     * @vftbl  8
     * @symbol  ?getId\@Recipe\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    virtual class mce::UUID const & getId() const;
    /**
     * @hash   -2064179577
     * @vftbl  9
     * @symbol  ?isMultiRecipe\@Recipe\@\@UEBA_NXZ
     */
    virtual bool isMultiRecipe() const;
    /**
     * @hash   -1269366547
     * @vftbl  10
     * @symbol  ?itemValidForRecipe\@Recipe\@\@UEBA_NAEBVItemDescriptor\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool itemValidForRecipe(class ItemDescriptor const &, class ItemStack const &) const;
    /**
     * @hash   437861991
     * @vftbl  11
     * @symbol  ?itemsMatch\@Recipe\@\@UEBA_NAEBVItemDescriptor\@\@0\@Z
     */
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &) const;
    /**
     * @hash   877785261
     * @vftbl  12
     * @symbol  ?itemsMatch\@Recipe\@\@UEBA_NAEBVItemDescriptor\@\@0PEBVCompoundTag\@\@\@Z
     */
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   -1249621156
     * @vftbl  13
     * @symbol  ?getIngredientsHash\@Recipe\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getIngredientsHash() const;
    /**
     * @hash   -1976205080
     * @vftbl  14
     * @symbol  ?loadResultList\@Recipe\@\@UEBAXAEBVBlockPalette\@\@\@Z
     */
    virtual void loadResultList(class BlockPalette const &) const;
    /**
     * @hash   1756943049
     * @symbol  ?countQuantityOfIngredient\@Recipe\@\@QEBAHAEBVItemInstance\@\@\@Z
     */
    MCAPI int countQuantityOfIngredient(class ItemInstance const &) const;
    /**
     * @hash   1568294438
     * @symbol  ?getHeight\@Recipe\@\@QEBAHXZ
     */
    MCAPI int getHeight() const;
    /**
     * @hash   1608631212
     * @symbol  ?getIngredients\@Recipe\@\@QEBAAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class RecipeIngredient> const & getIngredients() const;
    /**
     * @hash   2063531455
     * @symbol  ?getNetId\@Recipe\@\@QEBAAEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const & getNetId() const;
    /**
     * @hash   -386363674
     * @symbol  ?getPriority\@Recipe\@\@QEBAHXZ
     */
    MCAPI int getPriority() const;
    /**
     * @hash   1366471296
     * @symbol  ?getRecipeId\@Recipe\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getRecipeId() const;
    /**
     * @hash   1037234634
     * @symbol  ?getTag\@Recipe\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getTag() const;
    /**
     * @hash   -1155526520
     * @symbol  ?getWidth\@Recipe\@\@QEBAHXZ
     */
    MCAPI int getWidth() const;
    /**
     * @hash   1623700141
     * @symbol  ?setNetId\@Recipe\@\@QEAAXAEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI void setNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    /**
     * @hash   433723955
     * @symbol  ?isAnyAuxValue\@Recipe\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isAnyAuxValue(class ItemDescriptor const &);

//protected:
    /**
     * @hash   -227528950
     * @symbol  ??0Recipe\@\@IEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@VHashedString\@\@AEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI Recipe(class gsl::basic_string_span<char const, -1>, class HashedString, std::vector<class RecipeIngredient> const &);

protected:

};