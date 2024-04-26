#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class WarpedFungusOnAStickItem : public ::ComponentItem {
public:
    // prevent constructor by default
    WarpedFungusOnAStickItem& operator=(WarpedFungusOnAStickItem const&);
    WarpedFungusOnAStickItem(WarpedFungusOnAStickItem const&);
    WarpedFungusOnAStickItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WarpedFungusOnAStickItem@@UEAA@XZ
    virtual ~WarpedFungusOnAStickItem() = default;

    // vIndex: 37, symbol: ?isHandEquipped@WarpedFungusOnAStickItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 47, symbol: ?requiresInteract@WarpedFungusOnAStickItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 50, symbol: ?getEnchantSlot@WarpedFungusOnAStickItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 51, symbol: ?getEnchantValue@WarpedFungusOnAStickItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 80, symbol: ?mineBlock@WarpedFungusOnAStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool
    mineBlock(class ItemStack& item, class Block const& block, int x, int y, int z, class Actor* owner) const;

    // symbol:
    // ??0WarpedFungusOnAStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAUReflectionCtx@cereal@@@Z
    MCAPI WarpedFungusOnAStickItem(std::string const&, int, struct cereal::ReflectionCtx&);

    // NOLINTEND
};
