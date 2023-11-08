#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class MultiRecipe : public ::Recipe {
public:
    // prevent constructor by default
    MultiRecipe& operator=(MultiRecipe const&);
    MultiRecipe(MultiRecipe const&);
    MultiRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MultiRecipe@@UEAA@XZ
    virtual ~MultiRecipe() = default;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 9, symbol: ?isMultiRecipe@MultiRecipe@@EEBA_NXZ
    virtual bool isMultiRecipe() const;

    // vIndex: 10, symbol: ?hasDataDrivenResult@MultiRecipe@@EEBA_NXZ
    virtual bool hasDataDrivenResult() const;

    // symbol: ?isShapeless@MultiRecipe@@EEBA_NXZ
    MCVAPI bool isShapeless() const;

    // symbol: ??0MultiRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@VHashedString@@@Z
    MCAPI MultiRecipe(std::string_view, class HashedString);

    // NOLINTEND
};
