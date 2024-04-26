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

class EndCrystalItem : public ::Item {
public:
    // prevent constructor by default
    EndCrystalItem& operator=(EndCrystalItem const&);
    EndCrystalItem(EndCrystalItem const&);
    EndCrystalItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EndCrystalItem@@UEAA@XZ
    virtual ~EndCrystalItem() = default;

    // vIndex: 38, symbol: ?isGlint@EndCrystalItem@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 44, symbol: ?isDestructive@EndCrystalItem@@UEBA_NH@Z
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 118, symbol:
    // ?_useOn@EndCrystalItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor&, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    // symbol: ??0EndCrystalItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI EndCrystalItem(std::string const& nameId, int id);

    // NOLINTEND
};
