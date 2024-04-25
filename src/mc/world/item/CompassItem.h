#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/AbstractCompassItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class CompassItem : public ::AbstractCompassItem {
public:
    // prevent constructor by default
    CompassItem& operator=(CompassItem const&);
    CompassItem(CompassItem const&);
    CompassItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CompassItem@@UEAA@XZ
    virtual ~CompassItem() = default;

    // vIndex: 118, symbol:
    // ?_useOn@CompassItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& item, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    // symbol: ??0CompassItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CompassItem(std::string const& name, int id);

    // NOLINTEND
};
