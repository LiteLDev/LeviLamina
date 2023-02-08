/**
 * @file  BlockStateGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockStateGroup.
 *
 */
class BlockStateGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEGROUP
public:
    class BlockStateGroup& operator=(class BlockStateGroup const &) = delete;
    BlockStateGroup(class BlockStateGroup const &) = delete;
#endif

public:
    /**
     * @hash   447988503
     * @symbol  ??0BlockStateGroup\@\@QEAA\@XZ
     */
    MCAPI BlockStateGroup();
    /**
     * @hash   982127514
     * @symbol  ?getBlockStateFromHash\@BlockStateGroup\@\@QEBAPEBVBlockStateMeta\@\@AEB_K\@Z
     */
    MCAPI class BlockStateMeta const * getBlockStateFromHash(unsigned __int64 const &) const;
    /**
     * @hash   -1109488334
     * @symbol  ?getBlockStateFromName\@BlockStateGroup\@\@QEBAPEBVBlockStateMeta\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BlockStateMeta const * getBlockStateFromName(std::string const &) const;
    /**
     * @hash   -923239810
     * @symbol  ?registerBlockStateDefinition\@BlockStateGroup\@\@QEAAXAEBUBlockStateDefinition\@\@\@Z
     */
    MCAPI void registerBlockStateDefinition(struct BlockStateDefinition const &);
    /**
     * @hash   -1269851606
     * @symbol  ?registerToBlock\@BlockStateGroup\@\@QEAAXAEAVBlockLegacy\@\@\@Z
     */
    MCAPI void registerToBlock(class BlockLegacy &);
    /**
     * @hash   410891321
     * @symbol  ?MAX_ENUM_SIZE\@BlockStateGroup\@\@2HB
     */
    MCAPI static int const MAX_ENUM_SIZE;
    /**
     * @hash   1341550587
     * @symbol  ?loadBlockStateFromJson\@BlockStateGroup\@\@SA_NAEAUBlockStateDefinition\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static bool loadBlockStateFromJson(struct BlockStateDefinition &, std::string const &, class Json::Value const &);

};