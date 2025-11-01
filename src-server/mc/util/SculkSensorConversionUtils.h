#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
// clang-format on

namespace SculkSensorConversionUtils {
// static variables
// NOLINTBEGIN
MCNAPI ::std::function<::std::optional<int>(::BlockType const&, int)>& SculkSensorPhaseStateGetter();

MCNAPI ::std::function<::Block const*(::BlockType const&, int, int)>& SculkSensorPhaseStateSetter();
// NOLINTEND

}
