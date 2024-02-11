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

class TopSnowBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    TopSnowBlockItem& operator=(TopSnowBlockItem const&);
    TopSnowBlockItem(TopSnowBlockItem const&);
    TopSnowBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TopSnowBlockItem@@UEAA@XZ
    virtual ~TopSnowBlockItem() = default;

    // vIndex: 32, symbol: ?getLevelDataForAuxValue@TopSnowBlockItem@@UEBAHH@Z
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 118, symbol:
    // ?_useOn@TopSnowBlockItem@@UEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const&) const;

    // symbol: ??0TopSnowBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI TopSnowBlockItem(std::string const& name, int id);

    // NOLINTEND
};
