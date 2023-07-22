/**
 * @file  ShapelessChemistryRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ShapelessRecipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShapelessChemistryRecipe.
 *
 */
class ShapelessChemistryRecipe : public ShapelessRecipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAPELESSCHEMISTRYRECIPE
public:
    class ShapelessChemistryRecipe& operator=(class ShapelessChemistryRecipe const &) = delete;
    ShapelessChemistryRecipe(class ShapelessChemistryRecipe const &) = delete;
    ShapelessChemistryRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShapelessChemistryRecipe();
    /**
     * @vftbl  6
     * @symbol  ?matches\@ShapelessChemistryRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  8
     * @symbol  ?getId\@ShapelessChemistryRecipe\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    virtual class mce::UUID const & getId() const;
    /**
     * @symbol  ?ID\@ShapelessChemistryRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;

};