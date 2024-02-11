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

class HangingActorItem : public ::Item {
public:
    // prevent constructor by default
    HangingActorItem& operator=(HangingActorItem const&);
    HangingActorItem(HangingActorItem const&);
    HangingActorItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HangingActorItem@@UEAA@XZ
    virtual ~HangingActorItem() = default;

    // vIndex: 118, symbol:
    // ?_useOn@HangingActorItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor&, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    // symbol:
    // ??0HangingActorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4ActorType@@@Z
    MCAPI HangingActorItem(std::string const& name, int id, ::ActorType type);

    // NOLINTEND
};
