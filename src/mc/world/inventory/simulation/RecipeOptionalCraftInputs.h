#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/RecipeCraftInputs.h"

// auto generated forward declare list
// clang-format off
struct RecipeNetIdTag;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

struct RecipeOptionalCraftInputs : public ::RecipeCraftInputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk9ae5fb;
    ::ll::UntypedStorage<8, 72> mUnka567b8;
    // NOLINTEND

public:
    // prevent constructor by default
    RecipeOptionalCraftInputs& operator=(RecipeOptionalCraftInputs const&);
    RecipeOptionalCraftInputs(RecipeOptionalCraftInputs const&);
    RecipeOptionalCraftInputs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RecipeOptionalCraftInputs(
        ::RecipeNetId const&                       recipeNetId,
        ::Bedrock::Safety::RedactableString const& previewName,
        ::Bedrock::Safety::RedactableString const& itemName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::RecipeNetId const&                       recipeNetId,
        ::Bedrock::Safety::RedactableString const& previewName,
        ::Bedrock::Safety::RedactableString const& itemName
    );
    // NOLINTEND
};
