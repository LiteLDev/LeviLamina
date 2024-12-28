#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
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
        ::ll::TypedStorage<8, 8, ::BlockState*>                mState;
        // NOLINTEND

    public:
        // prevent constructor by default
        StateListNode& operator=(StateListNode const&);
        StateListNode(StateListNode const&);
        StateListNode();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit StateListNode(::BlockState* state);

        MCAPI ~StateListNode();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::BlockState::StateListNode*& mHead();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::BlockState* state);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    // prevent constructor by default
    BlockState& operator=(BlockState const&);
    BlockState(BlockState const&);
    BlockState();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockState();

    // vIndex: 1
    virtual void toNBT(::CompoundTag&, int) const = 0;

    // vIndex: 2
    virtual bool fromNBT(::CompoundTag const&, int&) const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void forEachState(::std::function<bool(::BlockState const&)> callback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
