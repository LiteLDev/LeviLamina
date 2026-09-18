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

    MCAPI ::BlockState const* getBlockState(::Block const& block) const;
    // NOLINTEND
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::std::vector<::BlockStateCommandParam, ::std::allocator<::BlockStateCommandParam> >>();
// clang-format on
