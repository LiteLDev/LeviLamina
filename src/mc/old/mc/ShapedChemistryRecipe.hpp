/**
 * @file  ShapedChemistryRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "ShapedRecipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShapedChemistryRecipe.
 *
 */
class ShapedChemistryRecipe : public ShapedRecipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAPEDCHEMISTRYRECIPE
public:
    class ShapedChemistryRecipe& operator=(class ShapedChemistryRecipe const &) = delete;
    ShapedChemistryRecipe(class ShapedChemistryRecipe const &) = delete;
    ShapedChemistryRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShapedChemistryRecipe();
    /**
     * @vftbl  6
     * @symbol  ?matches\@ShapedChemistryRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  8
     * @symbol  ?getId\@ShapedChemistryRecipe\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    virtual class mce::UUID const & getId() const;
    /**
     * @symbol  ?ID\@ShapedChemistryRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;

};