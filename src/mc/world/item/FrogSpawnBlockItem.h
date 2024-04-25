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

class FrogSpawnBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    FrogSpawnBlockItem& operator=(FrogSpawnBlockItem const&);
    FrogSpawnBlockItem(FrogSpawnBlockItem const&);
    FrogSpawnBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FrogSpawnBlockItem@@UEAA@XZ
    virtual ~FrogSpawnBlockItem() = default;

    // vIndex: 45, symbol: ?isLiquidClipItem@FrogSpawnBlockItem@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 116, symbol:
    // ?_calculatePlacePos@FrogSpawnBlockItem@@UEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& actor, uchar& face, class BlockPos& pos) const;

    // vIndex: 118, symbol:
    // ?_useOn@FrogSpawnBlockItem@@UEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const&) const;

    // symbol: ??0FrogSpawnBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI FrogSpawnBlockItem(std::string const& name, int blockId);

    // NOLINTEND
};
