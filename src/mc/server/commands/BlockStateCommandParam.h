#pragma once

#include "ll/api/Expected.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/Block.h"

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
    // prevent constructor by default
    BlockStateCommandParam();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockStateCommandParam(::std::string state, ::std::string value, ::BlockStateCommandParam::Type type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string state, ::std::string value, ::BlockStateCommandParam::Type type);
    // NOLINTEND
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::std::vector<::BlockStateCommandParam, ::std::allocator<::BlockStateCommandParam> >>();
// clang-format on
