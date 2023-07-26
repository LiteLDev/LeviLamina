#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { enum class HashType; }
// clang-format on

namespace Crypto::Hash {
/**
 * @symbol
 * ?hash\@Hash\@Crypto\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4HashType\@12\@PEBXI\@Z
 */
MCAPI std::string hash(enum class Crypto::Hash::HashType, void const*, unsigned int); // NOLINT
/**
 * @symbol
 * ?hash\@Hash\@Crypto\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4HashType\@12\@AEBV34\@\@Z
 */
MCAPI std::string hash(enum class Crypto::Hash::HashType, std::string const&); // NOLINT

}; // namespace Crypto::Hash
