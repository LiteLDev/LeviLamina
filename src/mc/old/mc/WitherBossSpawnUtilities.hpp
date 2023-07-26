/**
 * @file  WitherBossSpawnUtilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace WitherBossSpawnUtilities.
 *
 */
namespace WitherBossSpawnUtilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?createWitherBuilder\@WitherBossSpawnUtilities\@\@YA?AV?$unique_ptr\@VBlockPatternBuilder\@\@U?$default_delete\@VBlockPatternBuilder\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilder(class BlockSource &);
    /**
     * @symbol  ?createWitherBuilderForTShape\@WitherBossSpawnUtilities\@\@YA?AV?$unique_ptr\@VBlockPatternBuilder\@\@U?$default_delete\@VBlockPatternBuilder\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilderForTShape(class BlockSource &);

};