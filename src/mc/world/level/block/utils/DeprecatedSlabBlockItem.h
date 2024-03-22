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
    // vIndex: 0, symbol: __gen_??1DeprecatedSlabBlockItem@@UEAA@XZ
    virtual ~DeprecatedSlabBlockItem() = default;

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

    // symbol:
    // ?_convertToDoubleSlab@DeprecatedSlabBlockItem@@AEBA_NAEAVBlockSource@@AEAVLevel@@AEBVBlockPos@@AEAVItemStack@@AEAVActor@@EAEBVVec3@@AEBVBlock@@AEBVBlockState@@H@Z
    MCAPI bool _convertToDoubleSlab(
        class BlockSource&,
        class Level&,
        class BlockPos const&,
        class ItemStack&,
        class Actor&,
        uchar,
        class Vec3 const&,
        class Block const&,
        class BlockState const&,
        int
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
