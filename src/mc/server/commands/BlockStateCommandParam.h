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
    MCAPI BlockStateCommandParam(std::string state, std::string value, ::BlockStateCommandParam::Type type);

    MCAPI std::optional<std::pair<class HashedString, int>>
          getNameAndValue(class CommandOutput& output, class Block const& defaultNewBlock) const;

    MCAPI bool setBlockState(class Block const** inputBlock, class CommandOutput& output) const;

    MCAPI ~BlockStateCommandParam();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _createCompoundTag(class CompoundTag& tag, class CommandOutput& output) const;

    MCAPI class BlockState const* _getBlockState(class Block const& block) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::string state, std::string value, ::BlockStateCommandParam::Type type);

    MCAPI void dtor$();

    // NOLINTEND
};
