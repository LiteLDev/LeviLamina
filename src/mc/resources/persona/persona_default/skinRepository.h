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
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::mce::UUID const& PERSONA_SKIN_PACK_UUID();

MCNAPI ::mce::UUID const& VANILLA_SKIN_PACK_UUID();
// NOLINTEND

} // namespace personaDefault::skinRepository
