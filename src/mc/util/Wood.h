#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/WoodType.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::Wood {
// NOLINTBEGIN
// symbol: ?get@Wood@FlatteningUtils@@YA?AUInstance@2@XZ
MCAPI struct FlatteningUtils::Instance get();

// symbol: ?getComplexAliasCallback@Wood@FlatteningUtils@@YA?AV?$function@$$A6APEBVBlock@@H@Z@std@@XZ
MCAPI std::function<class Block const*(int)> getComplexAliasCallback();

// symbol:
// ?getStrippedSplitStates@Wood@FlatteningUtils@@YA?AV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@W4WoodType@@@Z
MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getStrippedSplitStates(::WoodType);

// symbol:
// ?getWoodTypeSplitStates@Wood@FlatteningUtils@@YA?AV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@_N@Z
MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getWoodTypeSplitStates(bool);
// NOLINTEND

}; // namespace FlatteningUtils::Wood
