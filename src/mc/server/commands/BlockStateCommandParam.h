#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateCommandParam {
public:
    // BlockStateCommandParam inner types define
    enum class Type {};

public:
    // prevent constructor by default
    BlockStateCommandParam& operator=(BlockStateCommandParam const&);
    BlockStateCommandParam(BlockStateCommandParam const&);
    BlockStateCommandParam();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0BlockStateCommandParam@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4Type@0@@Z
    MCAPI BlockStateCommandParam(std::string, std::string, ::BlockStateCommandParam::Type);

    // symbol:
    // ?getNameAndValue@BlockStateCommandParam@@QEBA?AV?$optional@U?$pair@VHashedString@@H@std@@@std@@AEAVCommandOutput@@AEBVBlock@@@Z
    MCAPI std::optional<std::pair<class HashedString, int>>
          getNameAndValue(class CommandOutput&, class Block const&) const;

    // symbol: ?setBlockState@BlockStateCommandParam@@QEBA_NPEAPEBVBlock@@AEAVCommandOutput@@@Z
    MCAPI bool setBlockState(class Block const**, class CommandOutput&) const;

    // symbol: ??1BlockStateCommandParam@@QEAA@XZ
    MCAPI ~BlockStateCommandParam();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createCompoundTag@BlockStateCommandParam@@AEBA_NAEAVCompoundTag@@AEAVCommandOutput@@@Z
    MCAPI bool _createCompoundTag(class CompoundTag&, class CommandOutput&) const;

    // symbol: ?_getBlockState@BlockStateCommandParam@@AEBAPEBVBlockState@@AEBVBlock@@@Z
    MCAPI class BlockState const* _getBlockState(class Block const&) const;

    // NOLINTEND
};
