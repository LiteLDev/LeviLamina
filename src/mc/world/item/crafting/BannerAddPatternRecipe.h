#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
class BannerPattern;
class CraftingContainer;
class CraftingContext;
class ItemInstance;
class RecipeIngredient;
namespace mce { class UUID; }
// clang-format on

class BannerAddPatternRecipe : public ::MultiRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc91759;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerAddPatternRecipe& operator=(BannerAddPatternRecipe const&);
    BannerAddPatternRecipe(BannerAddPatternRecipe const&);
    BannerAddPatternRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::vector<::ItemInstance> const& assemble(::CraftingContainer& craftSlots, ::CraftingContext&) const
        /*override*/;

    // vIndex: 2
    virtual int getCraftingSize() const /*override*/;

    // vIndex: 3
    virtual ::RecipeIngredient const& getIngredient(int, int) const /*override*/;

    // vIndex: 8
    virtual ::std::vector<::ItemInstance> const& getResultItems() const /*override*/;

    // vIndex: 5
    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const&) const /*override*/;

    // vIndex: 6
    virtual int size() const /*override*/;

    // vIndex: 0
    virtual ~BannerAddPatternRecipe() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BannerAddPatternRecipe(::std::string const& recipeId, ::mce::UUID const& uuid);

    MCAPI ::Bedrock::NonOwnerPointer<::BannerPattern const> const
    matchPatterns(::CraftingContainer const& craftSlots) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& recipeId, ::mce::UUID const& uuid);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::ItemInstance> const& $assemble(::CraftingContainer& craftSlots, ::CraftingContext&) const;

    MCFOLD int $getCraftingSize() const;

    MCFOLD ::RecipeIngredient const& $getIngredient(int, int) const;

    MCFOLD ::std::vector<::ItemInstance> const& $getResultItems() const;

    MCAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const&) const;

    MCFOLD int $size() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
