#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Hash {
// functions
// NOLINTBEGIN
MCAPI ::mce::UUID generateUUID(void const* in, uint size, ::Crypto::Hash::HashType type);

MCAPI ::std::string hash(::Crypto::Hash::HashType type, void const* in, uint size);
// NOLINTEND

} // namespace Crypto::Hash
