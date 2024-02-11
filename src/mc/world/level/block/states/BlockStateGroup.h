#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BlockStateGroup {
public:
    // prevent constructor by default
    BlockStateGroup& operator=(BlockStateGroup const&);
    BlockStateGroup(BlockStateGroup const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BlockStateGroup@@QEAA@XZ
    MCAPI BlockStateGroup();

    // symbol: ?getBlockStateFromHash@BlockStateGroup@@QEBAPEBVBlockStateMeta@@AEB_K@Z
    MCAPI class BlockStateMeta const* getBlockStateFromHash(uint64 const& h) const;

    // symbol:
    // ?getBlockStateFromName@BlockStateGroup@@QEBAPEBVBlockStateMeta@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class BlockStateMeta const* getBlockStateFromName(std::string const& name) const;

    // symbol: ?registerBlockStateDefinition@BlockStateGroup@@QEAAXAEBUBlockStateDefinition@@@Z
    MCAPI void registerBlockStateDefinition(struct BlockStateDefinition const& def);

    // symbol: ?registerExistingBlockState@BlockStateGroup@@QEAAXAEBVBlockState@@@Z
    MCAPI void registerExistingBlockState(class BlockState const& state);

    // symbol:
    // ?loadBlockStateFromJson@BlockStateGroup@@SA_NAEAUBlockStateDefinition@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    MCAPI static bool loadBlockStateFromJson(
        struct BlockStateDefinition& blockState,
        std::string const&           name,
        class Json::Value const&     root
    );

    // symbol: ?MAX_ENUM_SIZE@BlockStateGroup@@2HB
    MCAPI static int const MAX_ENUM_SIZE;

    // NOLINTEND
};
