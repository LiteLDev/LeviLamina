/**
 * @file  BookCloningRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -1998866259
     * @vftbl  1
     * @symbol  ?assemble\@BookCloningRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   935850197
     * @vftbl  2
     * @symbol  ?getCraftingSize\@BookCloningRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   295446070
     * @vftbl  3
     * @symbol  ?getIngredient\@BookCloningRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   -1698927742
     * @vftbl  4
     * @symbol  ?getResultItem\@BookCloningRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   878124471
     * @vftbl  6
     * @symbol  ?matches\@BookCloningRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   726112349
     * @vftbl  7
     * @symbol  ?size\@BookCloningRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   1287203255
     * @symbol  ??0BookCloningRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI BookCloningRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @hash   2034428956
     * @symbol  ??0BookCloningRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI BookCloningRecipe(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -1839622609
     * @symbol  ?ID\@BookCloningRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;

};