#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace CryptoUtils {
// NOLINTBEGIN
MCAPI std::string getDirectroyChecksum(class Core::Path const&);

MCAPI std::string getFileChecksum(class Core::Path const&);
// NOLINTEND

}; // namespace CryptoUtils
