#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BlockStateGroup {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEGROUP
public:
    BlockStateGroup& operator=(BlockStateGroup const&) = delete;
    BlockStateGroup(BlockStateGroup const&)            = delete;
#endif

public:
    /**
     * @symbol ??0BlockStateGroup\@\@QEAA\@XZ
     */
    MCAPI BlockStateGroup();
    /**
     * @symbol ?getBlockStateFromHash\@BlockStateGroup\@\@QEBAPEBVBlockStateMeta\@\@AEB_K\@Z
     */
    MCAPI class BlockStateMeta const* getBlockStateFromHash(unsigned __int64 const&) const;
    /**
     * @symbol
     * ?getBlockStateFromName\@BlockStateGroup\@\@QEBAPEBVBlockStateMeta\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BlockStateMeta const* getBlockStateFromName(std::string const&) const;
    /**
     * @symbol ?registerBlockStateDefinition\@BlockStateGroup\@\@QEAAXAEBUBlockStateDefinition\@\@\@Z
     */
    MCAPI void registerBlockStateDefinition(struct BlockStateDefinition const&);
    /**
     * @symbol ?registerExistingBlockState\@BlockStateGroup\@\@QEAAXAEBVBlockState\@\@\@Z
     */
    MCAPI void registerExistingBlockState(class BlockState const&);
    /**
     * @symbol ?registerToBlock\@BlockStateGroup\@\@QEAAXAEAVBlockLegacy\@\@\@Z
     */
    MCAPI void registerToBlock(class BlockLegacy&);
    /**
     * @symbol ?MAX_ENUM_SIZE\@BlockStateGroup\@\@2HB
     */
    MCAPI static int const MAX_ENUM_SIZE;
    /**
     * @symbol
     * ?loadBlockStateFromJson\@BlockStateGroup\@\@SA_NAEAUBlockStateDefinition\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static bool
    loadBlockStateFromJson(struct BlockStateDefinition&, std::string const&, class Json::Value const&);
};
