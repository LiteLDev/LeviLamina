#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class DeprecatedSlabBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    DeprecatedSlabBlockItem& operator=(DeprecatedSlabBlockItem const&);
    DeprecatedSlabBlockItem(DeprecatedSlabBlockItem const&);
    DeprecatedSlabBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DeprecatedSlabBlockItem@@UEAA@XZ
    virtual ~DeprecatedSlabBlockItem();

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

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 133, symbol:
    // ?_calculatePlacePos@DeprecatedSlabBlockItem@@UEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, uchar&, class BlockPos&) const;

    // vIndex: 135, symbol:
    // ?_useOn@DeprecatedSlabBlockItem@@UEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, uchar, class Vec3 const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_canConvertToDoubleSlab@DeprecatedSlabBlockItem@@AEBA?AV?$optional@H@std@@AEAVItemStackBase@@AEBVActor@@AEBEAEBVBlock@@@Z
    MCAPI std::optional<int>
          _canConvertToDoubleSlab(class ItemStackBase&, class Actor const&, uchar const&, class Block const&) const;

    // symbol: ?_findSlabType@DeprecatedSlabBlockItem@@AEBAHAEBVBlock@@@Z
    MCAPI int _findSlabType(class Block const&) const;

    // symbol:
    // ?_trySetDoubleBlock@DeprecatedSlabBlockItem@@AEBA_NAEAVBlockSource@@AEAVLevel@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@AEBVBlock@@V?$not_null@PEBVBlock@@@gsl@@@Z
    MCAPI bool
    _trySetDoubleBlock(class BlockSource&, class Level&, class BlockPos const&, class Actor&, class ItemStack&, class Block const&, gsl::not_null<class Block const*>)
        const;

    // NOLINTEND
};
