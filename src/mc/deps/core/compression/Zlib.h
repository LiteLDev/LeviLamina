#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Core::Compression::Zlib {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::Result<::std::string> compress(::std::string_view input, int compressionLevel, bool raw);

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Result<::std::string> decompress(::std::string_view input, bool raw);
#endif

#ifdef LL_PLAT_S
MCNAPI ::Bedrock::Result<::std::string> decompress(::std::string_view input, bool raw, uint64 maxOutputSize);
#endif
// NOLINTEND

} // namespace Core::Compression::Zlib
