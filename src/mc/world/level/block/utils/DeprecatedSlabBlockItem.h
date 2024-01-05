#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
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
    // ?_calculatePlacePos@DeprecatedSlabBlockItem@@UEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 117, symbol:
    // ?_useOn@DeprecatedSlabBlockItem@@UEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_canConvertToDoubleSlab@DeprecatedSlabBlockItem@@AEBA?AV?$optional@H@std@@AEAVItemStackBase@@AEBVActor@@AEBEAEBVBlock@@@Z
    MCAPI std::optional<int> _canConvertToDoubleSlab(
        class ItemStackBase& instance,
        class Actor const&,
        uchar const&       face,
        class Block const& block
    ) const;

    // symbol: ?_findSlabType@DeprecatedSlabBlockItem@@AEBAHAEBVBlock@@@Z
    MCAPI int _findSlabType(class Block const& block) const;

    // symbol:
    // ?_trySetDoubleBlock@DeprecatedSlabBlockItem@@AEBA_NAEAVBlockSource@@AEAVLevel@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@AEBVBlock@@V?$not_null@PEBVBlock@@@gsl@@@Z
    MCAPI bool _trySetDoubleBlock(
        class BlockSource&                region,
        class Level&                      level,
        class BlockPos const&             pos,
        class Actor&                      entity,
        class ItemStack&                  instance,
        class Block const&                doubleBlock,
        gsl::not_null<class Block const*> newSlab
    ) const;

    // NOLINTEND
};
