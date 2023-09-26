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
        // symbol: ??0StateListNode@BlockState@@QEAA@PEAV1@@Z
        MCAPI explicit StateListNode(class BlockState*);

        // symbol: ??1StateListNode@BlockState@@QEAA@XZ
        MCAPI ~StateListNode();

        // symbol: ?mHead@StateListNode@BlockState@@2PEAU12@EA
        MCAPI static struct BlockState::StateListNode* mHead;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockState& operator=(BlockState const&);
    BlockState(BlockState const&);
    BlockState();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?toNBT@?$BlockStateVariant@_N@@UEBAXAEAVCompoundTag@@H@Z
    virtual void toNBT(class CompoundTag&, int) const = 0;

    // vIndex: 2, symbol: ?fromNBT@?$BlockStateVariant@_N@@UEBA_NAEBVCompoundTag@@AEAH@Z
    virtual bool fromNBT(class CompoundTag const&, int&) const = 0;

    // symbol: ??1BlockState@@UEAA@XZ
    MCVAPI ~BlockState();

    // symbol: ?forEachState@BlockState@@SAXV?$function@$$A6A_NAEBVBlockState@@@Z@std@@@Z
    MCAPI static void forEachState(std::function<bool(class BlockState const&)>);

    // NOLINTEND
};
