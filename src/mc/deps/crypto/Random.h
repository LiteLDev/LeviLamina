#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Random {
// NOLINTBEGIN
MCAPI class mce::UUID generateCryptographicPlatformUUID();

MCAPI class mce::UUID generateUUID();

MCAPI uint64 generateUUID64Bit();
// NOLINTEND

}; // namespace Crypto::Random
