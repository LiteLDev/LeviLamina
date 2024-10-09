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
    MCAPI BlockStateCommandParam(std::string state, std::string value, ::BlockStateCommandParam::Type type);

    MCAPI std::optional<std::pair<class HashedString, int>>
          getNameAndValue(class CommandOutput& output, class Block const& defaultNewBlock) const;

    MCAPI bool setBlockState(class Block const** inputBlock, class CommandOutput& output) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _createCompoundTag(class CompoundTag& tag, class CommandOutput& output) const;

    MCAPI class BlockState const* _getBlockState(class Block const& block) const;

    // NOLINTEND
};
