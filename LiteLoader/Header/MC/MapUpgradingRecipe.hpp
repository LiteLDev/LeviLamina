// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MapUpgradingRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPUPGRADINGRECIPE
public:
    class MapUpgradingRecipe& operator=(class MapUpgradingRecipe const&) = delete;
    MapUpgradingRecipe(class MapUpgradingRecipe const&) = delete;
    MapUpgradingRecipe() = delete;
#endif

public:
    /*0*/ virtual ~MapUpgradingRecipe();
    /*1*/ virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&) const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual void __unk_vfn_3();
    /*6*/ virtual bool matches(class CraftingContainer&, class Level&) const;
    /*7*/ virtual void __unk_vfn_4();
    /*8*/ virtual class mce::UUID const& getId() const;
    /*9*/ virtual class ItemPack const& getItemPack() const;
    /*10*/ virtual bool isShapeless() const;
    /*11*/ virtual void loadResultList(class BlockPalette const&) const;
    /*
    inline int getCraftingSize() const{
        int (MapUpgradingRecipe::*rv)() const;
        *((void**)&rv) = dlsym("?getCraftingSize@MapUpgradingRecipe@@UEBAHXZ");
        return (this->*rv)();
    }
    inline std::vector<class ItemInstance> const& getResultItem() const{
        std::vector<class ItemInstance> const& (MapUpgradingRecipe::*rv)() const;
        *((void**)&rv) = dlsym("?getResultItem@MapUpgradingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline int size() const{
        int (MapUpgradingRecipe::*rv)() const;
        *((void**)&rv) = dlsym("?size@MapUpgradingRecipe@@UEBAHXZ");
        return (this->*rv)();
    }
    inline class RecipeIngredient const& getIngredient(int a0, int a1) const{
        class RecipeIngredient const& (MapUpgradingRecipe::*rv)(int, int) const;
        *((void**)&rv) = dlsym("?getIngredient@MapUpgradingRecipe@@UEBAAEBVRecipeIngredient@@HH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    */
    MCAPI MapUpgradingRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const&);
    MCAPI static class mce::UUID const CartographyTableID;
    MCAPI static class mce::UUID const CraftingTableID;

protected:

private:

};