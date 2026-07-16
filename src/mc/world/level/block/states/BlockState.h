#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Tag;
// clang-format on

class BlockState {
public:
    // BlockState inner types declare
    // clang-format off
    struct StateListNode;
    // clang-format on

    // BlockState inner types define
    struct StateListNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockState::StateListNode*> mNext;
        ::ll::TypedStorage<8, 8, ::BlockState::StateListNode*> mPrev;
        ::ll::TypedStorage<8, 8, ::BlockState const*>          mState;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::BlockState::StateListNode*& mHead();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64 const>                 mID;
    ::ll::TypedStorage<8, 8, uint64 const>                 mVariationCount;
    ::ll::TypedStorage<8, 48, ::HashedString const>        mName;
    ::ll::TypedStorage<8, 24, ::BlockState::StateListNode> mNode;
    // NOLINTEND

public:
    constexpr BlockState(
        uint64                             id,
        uint64                             variationCount,
        ::HashedString const&              name,
        ::BlockState::StateListNode const& node
    )
    : mID(id),
      mVariationCount(variationCount),
      mName(name),
      mNode(node) {}

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockState() = default;

    virtual ::std::unique_ptr<::Tag> _toNBT(int) const = 0;

    virtual ::std::optional<int> _fromNBT(::Tag const&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void toNBT(::CompoundTag& tag, int val) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
