#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/InHandUpdateType.h"
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

class BoatItem : public ::Item {
public:
    // prevent constructor by default
    BoatItem& operator=(BoatItem const&);
    BoatItem(BoatItem const&);
    BoatItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BoatItem@@UEAA@XZ
    virtual ~BoatItem() = default;

    // vIndex: 33, symbol: ?isStackedByData@BoatItem@@UEBA_NXZ
    virtual bool isStackedByData() const;

    // vIndex: 45, symbol: ?isLiquidClipItem@BoatItem@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 56, symbol: ?isValidAuxValue@BoatItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 73, symbol: ?dispense@BoatItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@BoatItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 104, symbol: ?getIconInfo@BoatItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 118, symbol:
    // ?_useOn@BoatItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& item, class Actor&, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    // vIndex: 119, symbol: ?_getActorType@BoatItem@@EEBA?AW4ActorType@@XZ
    virtual ::ActorType _getActorType() const;

    // symbol: ??0BoatItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
    MCAPI BoatItem(std::string const& name, int id, int woodType);

    // NOLINTEND
};
