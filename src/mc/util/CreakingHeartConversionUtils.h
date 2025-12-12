#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
// clang-format on

namespace CreakingHeartConversionUtils {
// static variables
// NOLINTBEGIN
MCNAPI ::std::function<::std::optional<int>(::BlockType const&, int)>& CreakingHeartStateGetter();

MCNAPI ::std::function<::Block const*(::BlockType const&, int, int)>& CreakingHeartStateSetter();
// NOLINTEND

} // namespace CreakingHeartConversionUtils
