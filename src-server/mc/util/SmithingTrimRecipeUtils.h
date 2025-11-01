#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CraftingContext;
class ItemStack;
// clang-format on

namespace SmithingTrimRecipeUtils {
// functions
// NOLINTBEGIN
MCNAPI bool doesItemHaveResultingTrim(::CraftingContext const& craftingContext, ::ItemStack const& item, ::std::string const& templateName, ::std::string const& materialName);
// NOLINTEND

}
