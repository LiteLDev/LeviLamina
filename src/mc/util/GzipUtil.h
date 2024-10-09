#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::GzipUtil {
// NOLINTBEGIN
MCAPI bool decompress(std::string const& compressedData, std::string& uncompressedData);
// NOLINTEND

}; // namespace Core::GzipUtil
