#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace personaDefault::skinRepository {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::mce::UUID const& getCustomSkinPackUUID();

MCNAPI ::mce::UUID const& getVanillaSkinPackUUID();
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::mce::UUID const& PERSONA_SKIN_PACK_UUID();

#ifdef LL_PLAT_C
MCNAPI ::std::string const& PERSONA_SKIN_TYPE();
#endif
// NOLINTEND

} // namespace personaDefault::skinRepository
