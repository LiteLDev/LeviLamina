#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BlockStateGroup {

public:
    // prevent constructor by default
    BlockStateGroup& operator=(BlockStateGroup const&) = delete;
    BlockStateGroup(BlockStateGroup const&)            = delete;

public:
    /**
     * @symbol ??0BlockStateGroup\@\@QEAA\@XZ
     */
    MCAPI BlockStateGroup(); // NOLINT
    /**
     * @symbol ?getBlockStateFromHash\@BlockStateGroup\@\@QEBAPEBVBlockStateMeta\@\@AEB_K\@Z
     */
    MCAPI class BlockStateMeta const* getBlockStateFromHash(unsigned __int64 const&) const; // NOLINT
    /**
     * @symbol
     * ?getBlockStateFromName\@BlockStateGroup\@\@QEBAPEBVBlockStateMeta\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BlockStateMeta const* getBlockStateFromName(std::string const&) const; // NOLINT
    /**
     * @symbol ?registerBlockStateDefinition\@BlockStateGroup\@\@QEAAXAEBUBlockStateDefinition\@\@\@Z
     */
    MCAPI void registerBlockStateDefinition(struct BlockStateDefinition const&); // NOLINT
    /**
     * @symbol ?registerExistingBlockState\@BlockStateGroup\@\@QEAAXAEBVBlockState\@\@\@Z
     */
    MCAPI void registerExistingBlockState(class BlockState const&); // NOLINT
    /**
     * @symbol ?registerToBlock\@BlockStateGroup\@\@QEAAXAEAVBlockLegacy\@\@\@Z
     */
    MCAPI void registerToBlock(class BlockLegacy&); // NOLINT
    /**
     * @symbol
     * ?loadBlockStateFromJson\@BlockStateGroup\@\@SA_NAEAUBlockStateDefinition\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static bool
    loadBlockStateFromJson(struct BlockStateDefinition&, std::string const&, class Json::Value const&); // NOLINT
    /**
     * @symbol ?MAX_ENUM_SIZE\@BlockStateGroup\@\@2HB
     */
    MCAPI static int const MAX_ENUM_SIZE; // NOLINT
};
