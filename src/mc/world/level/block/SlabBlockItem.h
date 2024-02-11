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

class SlabBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    SlabBlockItem& operator=(SlabBlockItem const&);
    SlabBlockItem(SlabBlockItem const&);
    SlabBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SlabBlockItem@@UEAA@XZ
    virtual ~SlabBlockItem() = default;

    // vIndex: 116, symbol: ?_calculatePlacePos@SlabBlockItem@@UEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& actor, uchar& face, class BlockPos& pos) const;

    // vIndex: 118, symbol:
    // ?_useOn@SlabBlockItem@@UEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol: ??0SlabBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SlabBlockItem(std::string const& name, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canConvertToDoubleBlock@SlabBlockItem@@AEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEBVBlock@@@Z
    MCAPI bool
    _canConvertToDoubleBlock(class ItemStackBase& instance, class Actor&, uchar& face, class Block const& block) const;

    // NOLINTEND
};
