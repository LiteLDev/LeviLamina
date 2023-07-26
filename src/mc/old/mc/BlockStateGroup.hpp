/**
 * @file  BlockStateGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  ??0BlockStateGroup\@\@QEAA\@XZ
     */
    MCAPI BlockStateGroup();
    /**
     * @symbol  ?getBlockStateFromHash\@BlockStateGroup\@\@QEBAPEBVBlockStateMeta\@\@AEB_K\@Z
     */
    MCAPI class BlockStateMeta const * getBlockStateFromHash(unsigned __int64 const &) const;
    /**
     * @symbol  ?getBlockStateFromName\@BlockStateGroup\@\@QEBAPEBVBlockStateMeta\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BlockStateMeta const * getBlockStateFromName(std::string const &) const;
    /**
     * @symbol  ?registerBlockStateDefinition\@BlockStateGroup\@\@QEAAXAEBUBlockStateDefinition\@\@\@Z
     */
    MCAPI void registerBlockStateDefinition(struct BlockStateDefinition const &);
    /**
     * @symbol  ?registerToBlock\@BlockStateGroup\@\@QEAAXAEAVBlockLegacy\@\@\@Z
     */
    MCAPI void registerToBlock(class BlockLegacy &);
    /**
     * @symbol  ?MAX_ENUM_SIZE\@BlockStateGroup\@\@2HB
     */
    MCAPI static int const MAX_ENUM_SIZE;
    /**
     * @symbol  ?loadBlockStateFromJson\@BlockStateGroup\@\@SA_NAEAUBlockStateDefinition\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static bool loadBlockStateFromJson(struct BlockStateDefinition &, std::string const &, class Json::Value const &);

};