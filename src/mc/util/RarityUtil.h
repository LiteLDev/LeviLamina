#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Rarity.h"

namespace RarityUtil {
// functions
// NOLINTBEGIN
MCAPI ::Rarity getRarityFromName(::std::string const& name);

MCAPI ::std::string const& getTitleColor(::Rarity rarity);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::unordered_map<::std::string, ::Rarity> const& NAME_TO_ENUM();
// NOLINTEND

} // namespace RarityUtil
