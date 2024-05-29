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

class ClockItem : public ::Item {
public:
    // prevent constructor by default
    ClockItem& operator=(ClockItem const&);
    ClockItem(ClockItem const&);
    ClockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClockItem@@UEAA@XZ
    virtual ~ClockItem() = default;

    // vIndex: 104, symbol: ?getIconInfo@ClockItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // vIndex: 106, symbol: ?getAnimationFrameFor@ClockItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    // symbol: ??0ClockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ClockItem(std::string const& name, int id);

    // NOLINTEND
};
