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

class HoeItem : public ::DiggerItem {
public:
    // prevent constructor by default
    HoeItem& operator=(HoeItem const&);
    HoeItem(HoeItem const&);
    HoeItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HoeItem@@UEAA@XZ
    virtual ~HoeItem() = default;

    // vIndex: 7, symbol:
    // ?executeEvent@HoeItem@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    virtual void executeEvent(class ItemStackBase& item, std::string const& name, class RenderParams& params) const;

    // vIndex: 50, symbol: ?getEnchantSlot@HoeItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // symbol:
    // ??0HoeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVTier@Item@@AEBVExperiments@@@Z
    MCAPI HoeItem(std::string const& name, int id, class Item::Tier const& tier, class Experiments const& experiments);

    // NOLINTEND
};
