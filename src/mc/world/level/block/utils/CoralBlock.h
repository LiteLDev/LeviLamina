#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CoralColor.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::CoralBlock {
// NOLINTBEGIN
// symbol: ?get@CoralBlock@FlatteningUtils@@YA?AUInstance@2@XZ
MCAPI struct FlatteningUtils::Instance get();

// symbol: ?getBlockComplexAliasCallback@CoralBlock@FlatteningUtils@@YA?AV?$function@$$A6APEBVBlock@@H@Z@std@@XZ
MCAPI std::function<class Block const*(int)> getBlockComplexAliasCallback();

// symbol:
// ?getColorSplitStates@CoralBlock@FlatteningUtils@@YA?AV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@_N@Z
MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getColorSplitStates(bool);

// symbol:
// ?getDeadSplitStates@CoralBlock@FlatteningUtils@@YA?AV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@W4CoralColor@@@Z
MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getDeadSplitStates(::CoralColor);
// NOLINTEND

}; // namespace FlatteningUtils::CoralBlock
