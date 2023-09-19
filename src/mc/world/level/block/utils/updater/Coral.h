#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CoralColor.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace VanillaComplexAliasBlockUtils::Coral {
// NOLINTBEGIN
// symbol:
// ?getColorSplitStates@Coral@VanillaComplexAliasBlockUtils@@YA?AV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@_N@Z
MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getColorSplitStates(bool);

// symbol: ?getComplexAliasCallback@Coral@VanillaComplexAliasBlockUtils@@YA?AV?$function@$$A6APEBVBlock@@H@Z@std@@XZ
MCAPI std::function<class Block const*(int)> getComplexAliasCallback();

// symbol:
// ?getDeadSplitStates@Coral@VanillaComplexAliasBlockUtils@@YA?AV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@W4CoralColor@@@Z
MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getDeadSplitStates(::CoralColor);
// NOLINTEND

}; // namespace VanillaComplexAliasBlockUtils::Coral
