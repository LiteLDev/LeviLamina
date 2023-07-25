#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WitherBossSpawnUtilities {
/**
 * @symbol
 * ?createWitherBuilder\@WitherBossSpawnUtilities\@\@YA?AV?$unique_ptr\@VBlockPatternBuilder\@\@U?$default_delete\@VBlockPatternBuilder\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
 */
MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilder(class BlockSource&);
/**
 * @symbol
 * ?createWitherBuilderForTShape\@WitherBossSpawnUtilities\@\@YA?AV?$unique_ptr\@VBlockPatternBuilder\@\@U?$default_delete\@VBlockPatternBuilder\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
 */
MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilderForTShape(class BlockSource&);

}; // namespace WitherBossSpawnUtilities
