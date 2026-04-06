#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

namespace personaDefault {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI bool isBuiltinSkinPack(::mce::UUID const& packId);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::set<::mce::UUID> const& ALLOW_ITEM_LIST();

MCNAPI ::std::vector<::std::string> const& EMOTE_LIST();
// NOLINTEND

} // namespace personaDefault
