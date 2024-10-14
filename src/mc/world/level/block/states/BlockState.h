#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockState {
public:
    // BlockState inner types declare
    // clang-format off
    struct StateListNode;
    // clang-format on

    // BlockState inner types define
    struct StateListNode {
    public:
        // prevent constructor by default
        StateListNode& operator=(StateListNode const&);
        StateListNode(StateListNode const&);
        StateListNode();

    public:
        // NOLINTBEGIN
        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static struct BlockState::StateListNode*& mHead();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockState& operator=(BlockState const&);
    BlockState(BlockState const&);
    BlockState();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockState();

    // vIndex: 1
    virtual void toNBT(class CompoundTag& tag, int val) const = 0;

    // vIndex: 2
    virtual bool fromNBT(class CompoundTag const& tag, int& outValue) const = 0;

    MCAPI static void forEachState(std::function<bool(class BlockState const&)> callback);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
