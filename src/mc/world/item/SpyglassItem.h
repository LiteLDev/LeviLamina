#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
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

class SpyglassItem : public ::Item {
public:
    // prevent constructor by default
    SpyglassItem& operator=(SpyglassItem const&);
    SpyglassItem(SpyglassItem const&);
    SpyglassItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SpyglassItem@@UEAA@XZ
    virtual ~SpyglassItem() = default;

    // vIndex: 58, symbol: ?getViewDamping@SpyglassItem@@UEBAMXZ
    virtual float getViewDamping() const;

    // vIndex: 72, symbol: ?use@SpyglassItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 74, symbol:
    // ?useTimeDepleted@SpyglassItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack& inoutInstance, class Level*, class Player* player) const;

    // vIndex: 75, symbol: ?releaseUsing@SpyglassItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack& inoutInstance, class Player* player, int) const;

    // symbol: ??0SpyglassItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI SpyglassItem(std::string const& name, short id);

    // NOLINTEND
};
