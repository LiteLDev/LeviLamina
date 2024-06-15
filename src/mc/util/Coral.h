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
// symbol: ?get@Coral@FlatteningUtils@@YA?AUInstance@2@XZ
MCAPI struct FlatteningUtils::Instance get();

// symbol:
// ?getColorSplitStates@Coral@FlatteningUtils@@YA?AV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@_N@Z
MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getColorSplitStates(bool);

// symbol:
// ?getDeadSplitStates@Coral@FlatteningUtils@@YA?AV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@W4CoralColor@@@Z
MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getDeadSplitStates(::CoralColor);
// NOLINTEND

}; // namespace FlatteningUtils::Coral
