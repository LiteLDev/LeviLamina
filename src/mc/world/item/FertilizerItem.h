#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/FertilizerType.h"
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

class FertilizerItem : public ::Item {
public:
    // prevent constructor by default
    FertilizerItem& operator=(FertilizerItem const&);
    FertilizerItem(FertilizerItem const&);
    FertilizerItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FertilizerItem@@UEAA@XZ
    virtual ~FertilizerItem();

    // vIndex: 7, symbol:
    // ?executeEvent@FertilizerItem@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    virtual void executeEvent(class ItemStackBase& item, std::string const& name, class RenderParams& params) const;

    // vIndex: 17, symbol: ?isFertilizer@FertilizerItem@@UEBA_NXZ
    virtual bool isFertilizer() const;

    // vIndex: 73, symbol: ?dispense@FertilizerItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 118, symbol:
    // ?_useOn@FertilizerItem@@MEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol:
    // ??0FertilizerItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4FertilizerType@@@Z
    MCAPI FertilizerItem(std::string const& name, int id, ::FertilizerType type);

    // symbol: ?getFertilizerType@FertilizerItem@@QEBA?AW4FertilizerType@@XZ
    MCAPI ::FertilizerType getFertilizerType() const;

    // NOLINTEND
};
