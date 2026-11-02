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
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mResults;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::ItemInstance> const& assemble(::CraftingContainer& craftSlots, ::CraftingContext&) const
        /*override*/;

    virtual int getCraftingSize() const /*override*/;

    virtual ::RecipeIngredient const& getIngredient(int, int) const /*override*/;

    virtual ::std::vector<::ItemInstance> const& getResultItems() const /*override*/;

    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const&) const /*override*/;

    virtual int size() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NonOwnerPointer<::BannerPattern const> const
    matchPatterns(::CraftingContainer const& craftSlots) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::vector<::ItemInstance> const& $assemble(::CraftingContainer& craftSlots, ::CraftingContext&) const;

    MCNAPI int $getCraftingSize() const;

    MCNAPI ::RecipeIngredient const& $getIngredient(int, int) const;

    MCNAPI ::std::vector<::ItemInstance> const& $getResultItems() const;

    MCAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const&) const;

    MCNAPI int $size() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
