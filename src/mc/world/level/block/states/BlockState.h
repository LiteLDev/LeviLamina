#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
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
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::BlockState::StateListNode*& mHead();
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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
