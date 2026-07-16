#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace personaDefault::packId {
// static variables
// NOLINTBEGIN
MCNAPI ::mce::UUID const& PERSONA_BUILTIN_PACK();

#ifdef LL_PLAT_C
MCNAPI ::mce::UUID const& PERSONA_TESTING_PACK();
#endif
// NOLINTEND

} // namespace personaDefault::packId
