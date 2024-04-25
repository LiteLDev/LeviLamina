#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BalloonItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    BalloonItem& operator=(BalloonItem const&);
    BalloonItem(BalloonItem const&);
    BalloonItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BalloonItem@@UEAA@XZ
    virtual ~BalloonItem() = default;

    // vIndex: 14, symbol: ?isDyeable@BalloonItem@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 62, symbol: ?getColor@BalloonItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const& instance) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@BalloonItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 118, symbol:
    // ?_useOn@BalloonItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor&, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    // symbol: ??0BalloonItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BalloonItem(std::string const& name, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createKnot@BalloonItem@@AEBAPEAVLeashFenceKnotActor@@AEAVBlockSource@@VBlockPos@@AEBVItemInstance@@@Z
    MCAPI class LeashFenceKnotActor*
    _createKnot(class BlockSource& region, class BlockPos pos, class ItemInstance const& item) const;

    // NOLINTEND
};
