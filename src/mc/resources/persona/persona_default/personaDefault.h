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
#ifdef LL_PLAT_S
MCNAPI ::std::set<::mce::UUID> const& ALLOW_ITEM_LIST();
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::std::string> const& EMOTE_LIST();
#endif
// NOLINTEND

} // namespace personaDefault
