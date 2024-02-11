#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ScaffoldingBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    ScaffoldingBlockItem& operator=(ScaffoldingBlockItem const&);
    ScaffoldingBlockItem(ScaffoldingBlockItem const&);
    ScaffoldingBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScaffoldingBlockItem@@UEAA@XZ
    virtual ~ScaffoldingBlockItem() = default;

    // vIndex: 118, symbol:
    // ?_useOn@ScaffoldingBlockItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol: ??0ScaffoldingBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ScaffoldingBlockItem(std::string const& name, int id);

    // NOLINTEND
};
