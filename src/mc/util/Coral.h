#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CoralColor.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::Coral {
// NOLINTBEGIN
MCAPI struct FlatteningUtils::Instance get();

MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getColorSplitStates(bool);

MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getDeadSplitStates(::CoralColor);
// NOLINTEND

}; // namespace FlatteningUtils::Coral
