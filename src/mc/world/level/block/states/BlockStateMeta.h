#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class BlockState;
class ListTag;
struct BlockStateDefinition;
// clang-format on

class BlockStateMeta {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Tag::Type>                                mType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ListTag>>               mEnumValues;
    ::ll::TypedStorage<8, 128, ::BidirectionalUnorderedMap<int, uint64>> mHashIndexMap;
    ::ll::TypedStorage<8, 8, ::BlockState const&>                        mBlockState;
    ::ll::TypedStorage<8, 32, ::std::string>                             mName;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateMeta& operator=(BlockStateMeta const&);
    BlockStateMeta(BlockStateMeta const&);
    BlockStateMeta();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockStateMeta(::BlockState const& blockState, ::BlockStateDefinition const& def);

    MCAPI bool const getBool(int index) const;

    MCAPI uint64 getID() const;

    MCAPI int const getInt(int index) const;

    MCFOLD ::std::string const& getName() const;

    MCFOLD ::BlockState const& getState() const;

    MCAPI ::std::string const& getString(int index) const;

    MCFOLD ::Tag::Type const getType() const;

    MCAPI int indexOf(uint64 const& h) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockState const& blockState, ::BlockStateDefinition const& def);
    // NOLINTEND
};
