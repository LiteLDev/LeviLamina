#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockState;
class BlockStateMeta;
struct BlockStateDefinition;
namespace Json { class Value; }
// clang-format on

class BlockStateGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk29d861;
    ::ll::UntypedStorage<8, 128> mUnkbb2a76;
    ::ll::UntypedStorage<8, 128> mUnk4e0576;
    ::ll::UntypedStorage<8, 16>  mUnkf888c3;
    ::ll::UntypedStorage<8, 16>  mUnk4f96a3;
    ::ll::UntypedStorage<8, 8>   mUnk5c1e3c;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateGroup& operator=(BlockStateGroup const&);
    BlockStateGroup(BlockStateGroup const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockStateGroup();

    MCNAPI ::BlockStateMeta const* getBlockStateFromHash(uint64 const& h) const;

    MCNAPI void registerBlockStateDefinition(::BlockStateDefinition const& def);

    MCNAPI void registerExistingBlockState(::BlockState const& state);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    loadBlockStateFromJson(::BlockStateDefinition& blockState, ::std::string const& name, ::Json::Value const& root);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_ENUM_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
