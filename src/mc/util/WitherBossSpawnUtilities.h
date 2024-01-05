#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WitherBossSpawnUtilities {
// NOLINTBEGIN
// symbol:
// ?createWitherBuilder@WitherBossSpawnUtilities@@YA?AV?$unique_ptr@VBlockPatternBuilder@@U?$default_delete@VBlockPatternBuilder@@@std@@@std@@AEAVBlockSource@@@Z
MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilder(class BlockSource& region);

// symbol:
// ?createWitherBuilderForTShape@WitherBossSpawnUtilities@@YA?AV?$unique_ptr@VBlockPatternBuilder@@U?$default_delete@VBlockPatternBuilder@@@std@@@std@@AEAVBlockSource@@@Z
MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilderForTShape(class BlockSource& region);
// NOLINTEND

}; // namespace WitherBossSpawnUtilities
