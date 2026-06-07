#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::GzipUtil {
// functions
// NOLINTBEGIN
MCNAPI bool compress(::std::string const& uncompressedData, ::std::string& compressedData);

MCNAPI bool decompress(::std::string const& compressedData, ::std::string& uncompressedData);
// NOLINTEND

} // namespace Core::GzipUtil
