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

class FireChargeItem : public ::Item {
public:
    // prevent constructor by default
    FireChargeItem& operator=(FireChargeItem const&);
    FireChargeItem(FireChargeItem const&);
    FireChargeItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FireChargeItem@@UEAA@XZ
    virtual ~FireChargeItem() = default;

    // vIndex: 44, symbol: ?isDestructive@FireChargeItem@@UEBA_NH@Z
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 73, symbol: ?dispense@FireChargeItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 116, symbol: ?_calculatePlacePos@FireChargeItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& actor, uchar& face, class BlockPos& pos) const;

    // vIndex: 118, symbol:
    // ?_useOn@FireChargeItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol: ??0FireChargeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI FireChargeItem(std::string const& name, int id);

    // symbol: ?LEVEL_SOUND_EVENT_VOLUME@FireChargeItem@@2HB
    MCAPI static int const LEVEL_SOUND_EVENT_VOLUME;

    // NOLINTEND
};
