#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Random {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCFOLD ::mce::UUID generateCryptographicPlatformUUID();
#endif

MCFOLD ::mce::UUID generateUUID();

MCAPI uint64 generateUUID64Bit();
// NOLINTEND

} // namespace Crypto::Random
