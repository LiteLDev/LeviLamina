#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Core::Compression::Zlib {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::Result<::std::string> compress(::std::string_view input, int compressionLevel, bool raw);

MCNAPI ::Bedrock::Result<::std::string> decompress(::std::string_view input, bool raw);
// NOLINTEND

}
