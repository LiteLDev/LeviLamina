#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Random {
// NOLINTBEGIN
// symbol: ?generateCryptographicPlatformUUID@Random@Crypto@@YA?AVUUID@mce@@XZ
MCAPI class mce::UUID generateCryptographicPlatformUUID();

// symbol: ?generateUUID@Random@Crypto@@YA?AVUUID@mce@@XZ
MCAPI class mce::UUID generateUUID();

// symbol: ?generateUUID64Bit@Random@Crypto@@YA_KXZ
MCAPI uint64 generateUUID64Bit();
// NOLINTEND

}; // namespace Crypto::Random
