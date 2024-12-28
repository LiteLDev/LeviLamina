#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mBlockState;
    ::ll::TypedStorage<8, 32, ::std::string>                 mValue;
    ::ll::TypedStorage<4, 4, ::BlockStateCommandParam::Type> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateCommandParam& operator=(BlockStateCommandParam const&);
    BlockStateCommandParam(BlockStateCommandParam const&);
    BlockStateCommandParam();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockStateCommandParam(::std::string state, ::std::string value, ::BlockStateCommandParam::Type type);

    MCAPI bool _createCompoundTag(::CompoundTag& tag, ::CommandOutput& output) const;

    MCAPI ::BlockState const* _getBlockState(::Block const& block) const;

    MCAPI ::std::optional<::std::pair<::HashedString, int>>
    getNameAndValue(::CommandOutput& output, ::Block const& defaultNewBlock) const;

    MCAPI bool setBlockState(::Block const** inputBlock, ::CommandOutput& output) const;

    MCAPI ~BlockStateCommandParam();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string state, ::std::string value, ::BlockStateCommandParam::Type type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
