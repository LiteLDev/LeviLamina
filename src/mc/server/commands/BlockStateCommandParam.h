#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/Block.h"

#include "ll/api/Expected.h"

class BlockStateCommandParam {
public:
    // BlockStateCommandParam inner types define
    enum class Type : int {
        Integer = 0x0,
        Float   = 0x1,
        Bool    = 0x2,
        String  = 0x3,
        Invalid = 0x4,
    };

    std::string mBlockState; // this+0x0
    std::string mValue;      // this+0x20
    Type        mType;       // this+0x40

    LLNDAPI ll::Expected<Block::BlockStateValueType> toStateValue() const;

    LLNDAPI static ll::Expected<Block::BlockStatesType> toStateMap(std::vector<BlockStateCommandParam> const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ??0BlockStateCommandParam@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4Type@0@@Z
    MCAPI BlockStateCommandParam(std::string state, std::string value, ::BlockStateCommandParam::Type type);

    // symbol:
    // ?getNameAndValue@BlockStateCommandParam@@QEBA?AV?$optional@U?$pair@VHashedString@@H@std@@@std@@AEAVCommandOutput@@AEBVBlock@@@Z
    MCAPI std::optional<std::pair<class HashedString, int>>
          getNameAndValue(class CommandOutput& output, class Block const&) const;

    // symbol: ?setBlockState@BlockStateCommandParam@@QEBA_NPEAPEBVBlock@@AEAVCommandOutput@@@Z
    MCAPI bool setBlockState(class Block const**, class CommandOutput& output) const;

    // symbol: ??1BlockStateCommandParam@@QEAA@XZ
    MCAPI ~BlockStateCommandParam();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createCompoundTag@BlockStateCommandParam@@AEBA_NAEAVCompoundTag@@AEAVCommandOutput@@@Z
    MCAPI bool _createCompoundTag(class CompoundTag& tag, class CommandOutput& output) const;

    // symbol: ?_getBlockState@BlockStateCommandParam@@AEBAPEBVBlockState@@AEBVBlock@@@Z
    MCAPI class BlockState const* _getBlockState(class Block const& block) const;

    // NOLINTEND
};
