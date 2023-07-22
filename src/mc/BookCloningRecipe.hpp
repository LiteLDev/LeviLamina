/**
 * @file  BookCloningRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BookCloningRecipe.
 *
 */
class BookCloningRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOKCLONINGRECIPE
public:
    class BookCloningRecipe& operator=(class BookCloningRecipe const &) = delete;
    BookCloningRecipe(class BookCloningRecipe const &) = delete;
    BookCloningRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BookCloningRecipe();
    /**
     * @vftbl  1
     * @symbol  ?assemble\@BookCloningRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @vftbl  2
     * @symbol  ?getCraftingSize\@BookCloningRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl  3
     * @symbol  ?getIngredient\@BookCloningRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl  4
     * @symbol  ?getResultItem\@BookCloningRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl  6
     * @symbol  ?matches\@BookCloningRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  7
     * @symbol  ?size\@BookCloningRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @symbol  ??0BookCloningRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI BookCloningRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @symbol  ??0BookCloningRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI BookCloningRecipe(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?ID\@BookCloningRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;

};