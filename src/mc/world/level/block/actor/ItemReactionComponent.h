#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

class ItemReactionComponent : public ::LabTableReactionComponent {
public:
    // prevent constructor by default
    ItemReactionComponent& operator=(ItemReactionComponent const&);
    ItemReactionComponent(ItemReactionComponent const&);
    ItemReactionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemReactionComponent@@UEAA@XZ
    virtual ~ItemReactionComponent() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?_onEnd@ItemReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    virtual void _onEnd(class LabTableReaction&, class BlockSource&);

    // NOLINTEND
};
