#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
namespace Crypto::Hash { class Hash; }
// clang-format on

namespace CryptoUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void _generateFileChecksum(::Core::PathView path, ::Crypto::Hash::Hash& hashToUpdate);
#endif

#ifdef LL_PLAT_S
MCNAPI void _generateFileChecksum(::Core::PathView path, ::Crypto::Hash::Hash& hashToUpdate);
#endif

MCNAPI ::std::string getFileChecksum(::Core::PathView path);
// NOLINTEND

} // namespace CryptoUtils
