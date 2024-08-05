#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class IHash; }
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Hash {
// NOLINTBEGIN
MCAPI class mce::UUID generateUUID(std::string const&, ::Crypto::Hash::HashType);

MCAPI class mce::UUID generateUUID(void const* in, uint size, ::Crypto::Hash::HashType type);

MCAPI std::string hash(::Crypto::Hash::HashType type, std::string const& in);

MCAPI std::string hash(::Crypto::Hash::HashType, void const*, uint);
// NOLINTEND

}; // namespace Crypto::Hash
