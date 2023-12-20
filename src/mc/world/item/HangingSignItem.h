#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
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
    // vIndex: 0, symbol: __gen_??1HangingSignItem@@UEAA@XZ
    virtual ~HangingSignItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 115, symbol:
    // ?_calculatePlacePos@HangingSignItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, uchar&, class BlockPos&) const;

    // vIndex: 118, symbol: ?getBlockToPlace@HangingSignItem@@MEBAPEBVBlock@@EAEBVActor@@VBlockPos@@@Z
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
