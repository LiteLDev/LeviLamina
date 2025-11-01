#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class BlockState;
class ListTag;
// clang-format on

class BlockStateMeta {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Tag::Type> mType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ListTag>> mEnumValues;
    ::ll::TypedStorage<8, 128, ::BidirectionalUnorderedMap<int, uint64>> mHashIndexMap;
    ::ll::TypedStorage<8, 8, ::BlockState const&> mBlockState;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateMeta& operator=(BlockStateMeta const&);
    BlockStateMeta(BlockStateMeta const&);
    BlockStateMeta();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int indexOf(uint64 const& h) const;
    // NOLINTEND

};
