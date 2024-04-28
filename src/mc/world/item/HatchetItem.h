#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/DiggerItem.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class HatchetItem : public ::DiggerItem {
public:
    // prevent constructor by default
    HatchetItem& operator=(HatchetItem const&);
    HatchetItem(HatchetItem const&);
    HatchetItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HatchetItem@@UEAA@XZ
    virtual ~HatchetItem() = default;

    // vIndex: 7, symbol:
    // ?executeEvent@HatchetItem@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    virtual void executeEvent(class ItemStackBase& item, std::string const& name, class RenderParams& params) const;

    // vIndex: 50, symbol: ?getEnchantSlot@HatchetItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 76, symbol: ?getDestroySpeed@HatchetItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    // symbol: ??0HatchetItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVTier@Item@@@Z
    MCAPI HatchetItem(std::string const& name, int id, class Item::Tier const& tier);

    // NOLINTEND
};
