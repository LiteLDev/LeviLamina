#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class RecipeIngredient;
struct RecipeNetIdTag;
// clang-format on

class ItemStackRequestActionCraftRecipeAuto : public ::ItemStackRequestActionCraft<::RecipeNetId, 13> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::RecipeIngredient>> mIngredients;
    ::ll::TypedStorage<1, 1, uchar>                              mNumIngredients;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemStackRequestActionCraftRecipeAuto();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ItemStackRequestActionCraftRecipeAuto(
        ::RecipeNetId const&                     recipeNetId,
        uchar                                    numCrafts,
        ::std::vector<::RecipeIngredient> const& ingredients
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void*
    $ctor(::RecipeNetId const& recipeNetId, uchar numCrafts, ::std::vector<::RecipeIngredient> const& ingredients);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_write(::BinaryStream& stream) const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
