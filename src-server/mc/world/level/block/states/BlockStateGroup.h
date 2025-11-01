#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class BlockState;
class BlockStateMeta;
class CustomBlockStateVariant;
struct BlockStateDefinition;
namespace Json { class Value; }
// clang-format on

class BlockStateGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CustomBlockStateVariant>>> mRegisteredBlockStates;
    ::ll::TypedStorage<8, 128, ::BidirectionalUnorderedMap<uint64, ::std::string>> mHashNames;
    ::ll::TypedStorage<8, 128, ::BidirectionalUnorderedMap<int, uint64>> mIdNames;
    ::ll::TypedStorage<8, 16, ::std::map<int, ::std::unique_ptr<::BlockStateMeta>>> mBlockStates;
    ::ll::TypedStorage<8, 16, ::std::map<int, ::std::unique_ptr<::BlockStateMeta>>> mJsonBlockStates;
    ::ll::TypedStorage<8, 8, uint64> lastStateID;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockStateGroup();

    MCAPI ::BlockStateMeta const* getBlockStateFromHash(uint64 const& h) const;

    MCAPI void registerBlockStateDefinition(::BlockStateDefinition const& def);

    MCAPI void registerExistingBlockState(::BlockState const& state);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool loadBlockStateFromJson(::BlockStateDefinition& blockState, ::std::string const& name, ::Json::Value const& root);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_ENUM_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

};
