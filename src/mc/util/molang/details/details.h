#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Molang::details {
// static variables
// NOLINTBEGIN
MCNAPI ::std::unordered_map<uint64, ::std::pair<::std::pair<::std::string, ::std::string>, ::std::string>>&
preOptimizedHashes();
// NOLINTEND

} // namespace Molang::details
