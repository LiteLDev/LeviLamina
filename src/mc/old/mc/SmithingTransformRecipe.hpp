/**
 * @file  SmithingTransformRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "ShapelessRecipe.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SmithingTransformRecipe : public ShapelessRecipe {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMITHINGTRANSFORMRECIPE
public:
    class SmithingTransformRecipe& operator=(class SmithingTransformRecipe const &) = delete;
    SmithingTransformRecipe(class SmithingTransformRecipe const &) = delete;
    SmithingTransformRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SmithingTransformRecipe();
    /**
     * @vftbl  1
     * @symbol  ?assemble\@SmithingTransformRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @symbol  ??0SmithingTransformRecipe\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVRecipeIngredient\@\@1AEBVItemInstance\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI SmithingTransformRecipe(std::string const &, class RecipeIngredient const &, class RecipeIngredient const &, class ItemInstance const &, class HashedString const &);
    /**
     * @symbol  ?getAddition\@SmithingTransformRecipe\@\@QEBAAEBVRecipeIngredient\@\@XZ
     */
    MCAPI class RecipeIngredient const & getAddition() const;
    /**
     * @symbol  ?getBase\@SmithingTransformRecipe\@\@QEBAAEBVRecipeIngredient\@\@XZ
     */
    MCAPI class RecipeIngredient const & getBase() const;
    /**
     * @symbol  ?getResult\@SmithingTransformRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getResult() const;
    /**
     * @symbol  ?ID\@SmithingTransformRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;

};