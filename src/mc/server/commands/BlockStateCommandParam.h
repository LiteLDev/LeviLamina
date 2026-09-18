#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mBlockState;
    ::ll::TypedStorage<8, 32, ::std::string>                 mValue;
    ::ll::TypedStorage<4, 4, ::BlockStateCommandParam::Type> mType;
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
