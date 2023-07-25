#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShapelessChemistryRecipe : public ::ShapelessRecipe {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAPELESSCHEMISTRYRECIPE
public:
    ShapelessChemistryRecipe& operator=(ShapelessChemistryRecipe const&) = delete;
    ShapelessChemistryRecipe(ShapelessChemistryRecipe const&)            = delete;
    ShapelessChemistryRecipe()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?matches\@ShapelessChemistryRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const&, class CraftingContext const&) const;
    /**
     * @vftbl 8
     * @symbol ?getId\@ShapelessChemistryRecipe\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    virtual class mce::UUID const& getId() const;
    /**
     * @symbol ?ID\@ShapelessChemistryRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;
};
