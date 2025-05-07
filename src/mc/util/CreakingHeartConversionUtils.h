#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
// clang-format on

namespace CreakingHeartConversionUtils {
// static variables
// NOLINTBEGIN
MCNAPI ::std::function<::std::optional<int>(::BlockLegacy const&, int)>& CreakingHeartStateGetter();

MCNAPI ::std::function<::Block const*(::BlockLegacy const&, int, int)>& CreakingHeartStateSetter();
// NOLINTEND

} // namespace CreakingHeartConversionUtils
