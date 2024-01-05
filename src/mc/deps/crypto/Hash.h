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
// symbol:
// ?generateUUID@Hash@Crypto@@YA?AVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4HashType@12@@Z
MCAPI class mce::UUID generateUUID(std::string const&, ::Crypto::Hash::HashType);

// symbol: ?generateUUID@Hash@Crypto@@YA?AVUUID@mce@@PEBXIW4HashType@12@@Z
MCAPI class mce::UUID generateUUID(void const* in, uint size, ::Crypto::Hash::HashType type);

// symbol: ?hash@Hash@Crypto@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4HashType@12@AEBV34@@Z
MCAPI std::string hash(::Crypto::Hash::HashType type, std::string const& in);

// symbol: ?hash@Hash@Crypto@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4HashType@12@PEBXI@Z
MCAPI std::string hash(::Crypto::Hash::HashType, void const*, uint);
// NOLINTEND

}; // namespace Crypto::Hash
