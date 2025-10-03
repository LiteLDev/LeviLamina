#pragma once

#include "ll/api/Expected.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/Block.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
class CommandOutput;
class CompoundTag;
class HashedString;
// clang-format on

class BlockStateCommandParam {
public:
    // BlockStateCommandParam inner types define
    enum class Type : int {
        Integer = 0,
        Float   = 1,
        Bool    = 2,
        String  = 3,
        Invalid = 4,
    };

public:
    LLNDAPI ll::Expected<Block::BlockStateValueType> toStateValue() const;

    LLNDAPI static ll::Expected<Block::BlockStatesType> toStateMap(std::vector<BlockStateCommandParam> const&);

public:
    // member variables
    // NOLINTBEGIN
    ::std::string                  mBlockState;
    ::std::string                  mValue;
    ::BlockStateCommandParam::Type mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _createCompoundTag(::CompoundTag& tag, ::CommandOutput& output) const;

    MCAPI ::BlockState const* _getBlockState(::Block const& block) const;

    MCAPI ::std::optional<::std::pair<::HashedString, int>>
    getNameAndValue(::CommandOutput& output, ::Block const& defaultNewBlock) const;

    MCAPI bool setBlockState(::Block const** inputBlock, ::CommandOutput& output) const;

    MCAPI ~BlockStateCommandParam();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
