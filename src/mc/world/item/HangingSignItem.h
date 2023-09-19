#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/SignItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/SignBlock.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class HangingSignItem : public ::SignItem {
public:
    // prevent constructor by default
    HangingSignItem& operator=(HangingSignItem const&);
    HangingSignItem(HangingSignItem const&);
    HangingSignItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 133, symbol:
    // ?_calculatePlacePos@HangingSignItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, uchar&, class BlockPos&) const;

    // vIndex: 136, symbol: ?getBlockToPlace@HangingSignItem@@MEBAPEBVBlock@@EAEBVActor@@VBlockPos@@@Z
    virtual class Block const* getBlockToPlace(uchar, class Actor const&, class BlockPos) const;

    // symbol:
    // ??0HangingSignItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4SignType@SignBlock@@@Z
    MCAPI HangingSignItem(std::string const&, int, ::SignBlock::SignType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getCeilingHangingSignBlock@HangingSignItem@@AEBAPEBVBlock@@AEBVActor@@AEBEAEBVBlockPos@@@Z
    MCAPI class Block const* _getCeilingHangingSignBlock(class Actor const&, uchar const&, class BlockPos const&) const;

    // symbol: ?_getWallHangingSignBlock@HangingSignItem@@AEBAPEBVBlock@@AEBVActor@@AEBEAEBVBlockPos@@@Z
    MCAPI class Block const* _getWallHangingSignBlock(class Actor const&, uchar const&, class BlockPos const&) const;

    // NOLINTEND
};
