/**
 * @file  WitherBossSpawnUtilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1631888258
     * @symbol ?createWitherBuilder@WitherBossSpawnUtilities@@YA?AV?$unique_ptr@VBlockPatternBuilder@@U?$default_delete@VBlockPatternBuilder@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilder(class BlockSource &);
    /**
     * @hash   -478598264
     * @symbol ?createWitherBuilderForTShape@WitherBossSpawnUtilities@@YA?AV?$unique_ptr@VBlockPatternBuilder@@U?$default_delete@VBlockPatternBuilder@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilderForTShape(class BlockSource &);

};