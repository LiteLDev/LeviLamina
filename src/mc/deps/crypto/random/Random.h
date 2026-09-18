#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/random/RandomPurpose.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Random {
// functions
// NOLINTBEGIN
MCAPI ::mce::UUID generateUUID(::Crypto::Random::RandomPurpose purpose);

MCAPI uint64 generateUUID64Bit(::Crypto::Random::RandomPurpose purpose);
// NOLINTEND

} // namespace Crypto::Random
