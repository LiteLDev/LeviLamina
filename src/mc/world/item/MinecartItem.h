#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/MinecartType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class MinecartItem : public ::Item {
public:
    // prevent constructor by default
    MinecartItem& operator=(MinecartItem const&);
    MinecartItem(MinecartItem const&);
    MinecartItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MinecartItem@@UEAA@XZ
    virtual ~MinecartItem() = default;

    // vIndex: 44, symbol: ?isDestructive@MinecartItem@@UEBA_NH@Z
    virtual bool isDestructive(int) const;

    // vIndex: 73, symbol: ?dispense@MinecartItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 118, symbol:
    // ?_useOn@MinecartItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& item, class Actor& entity, class BlockPos pos, uchar, class Vec3 const&) const;

    // symbol:
    // ??0MinecartItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4MinecartType@@@Z
    MCAPI MinecartItem(std::string const& name, int id, ::MinecartType type);

    // NOLINTEND
};
