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

class ArmorStandItem : public ::Item {
public:
    // prevent constructor by default
    ArmorStandItem& operator=(ArmorStandItem const&);
    ArmorStandItem(ArmorStandItem const&);
    ArmorStandItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ArmorStandItem@@UEAA@XZ
    virtual ~ArmorStandItem() = default;

    // vIndex: 118, symbol:
    // ?_useOn@ArmorStandItem@@UEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor&, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    // symbol: ??0ArmorStandItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI ArmorStandItem(std::string const& name, short id);

    // symbol: ?_shouldRemove@ArmorStandItem@@QEBA_NAEAVBlockSource@@VBlockPos@@@Z
    MCAPI bool _shouldRemove(class BlockSource& region, class BlockPos pos) const;

    // NOLINTEND
};
