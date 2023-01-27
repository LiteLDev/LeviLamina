/**
 * @file  MapCloningRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapCloningRecipe.
 *
 */
class MapCloningRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPCLONINGRECIPE
public:
    class MapCloningRecipe& operator=(class MapCloningRecipe const &) = delete;
    MapCloningRecipe(class MapCloningRecipe const &) = delete;
    MapCloningRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MapCloningRecipe();
    /**
     * @hash   1031048762
     * @vftbl  1
     * @symbol  ?assemble\@MapCloningRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   -1340121816
     * @vftbl  2
     * @symbol  ?getCraftingSize\@MapCloningRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   307140745
     * @vftbl  3
     * @symbol  ?getIngredient\@MapCloningRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   1084084949
     * @vftbl  4
     * @symbol  ?getResultItem\@MapCloningRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   1874474970
     * @vftbl  6
     * @symbol  ?matches\@MapCloningRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   87460720
     * @vftbl  7
     * @symbol  ?size\@MapCloningRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   -402238380
     * @symbol  ??0MapCloningRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI MapCloningRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @hash   -950317573
     * @symbol  ?CartographyTableID\@MapCloningRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CartographyTableID;
    /**
     * @hash   1865260489
     * @symbol  ?CraftingTableID\@MapCloningRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CraftingTableID;

};