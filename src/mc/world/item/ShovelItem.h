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

class ShovelItem : public ::DiggerItem {
public:
    // prevent constructor by default
    ShovelItem& operator=(ShovelItem const&);
    ShovelItem(ShovelItem const&);
    ShovelItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShovelItem@@UEAA@XZ
    virtual ~ShovelItem() = default;

    // vIndex: 7, symbol:
    // ?executeEvent@ShovelItem@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    virtual void executeEvent(class ItemStackBase& item, std::string const& name, class RenderParams& params) const;

    // vIndex: 31, symbol: ?canDestroySpecial@ShovelItem@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 50, symbol: ?getEnchantSlot@ShovelItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 118, symbol:
    // ?_useOn@ShovelItem@@MEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol: ??0ShovelItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVTier@Item@@@Z
    MCAPI ShovelItem(std::string const& name, int id, class Item::Tier const& tier);

    // NOLINTEND
};
