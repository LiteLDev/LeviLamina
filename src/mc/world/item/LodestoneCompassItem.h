#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/item/AbstractCompassItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace PositionTrackingDB { class TrackingRecord; }
namespace mce { class Color; }
// clang-format on

class LodestoneCompassItem : public ::AbstractCompassItem {
public:
    // prevent constructor by default
    LodestoneCompassItem& operator=(LodestoneCompassItem const&);
    LodestoneCompassItem(LodestoneCompassItem const&);
    LodestoneCompassItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LodestoneCompassItem@@UEAA@XZ
    virtual ~LodestoneCompassItem() = default;

    // vIndex: 106, symbol: ?getAnimationFrameFor@LodestoneCompassItem@@UEBAHPEAVMob@@_NPEBVItemStack@@1@Z
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    // vIndex: 118, symbol:
    // ?_useOn@LodestoneCompassItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& item, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol: ??0LodestoneCompassItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI LodestoneCompassItem(std::string const& name, int id);

    // symbol: ?linkCompassToLodestone@LodestoneCompassItem@@SA_NAEAVItemStack@@AEAVBlockSource@@VBlockPos@@@Z
    MCAPI static bool linkCompassToLodestone(class ItemStack& item, class BlockSource& region, class BlockPos pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tryGetOrAddComponent@LodestoneCompassItem@@CAPEAVLodestoneCompassComponent@@PEAVTrackingRecord@PositionTrackingDB@@AEBV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@@Z
    MCAPI static class LodestoneCompassComponent* _tryGetOrAddComponent(
        class PositionTrackingDB::TrackingRecord*                                           record,
        std::variant<struct ActorUniqueID, std::pair<class BlockPos, DimensionType>> const& calcId
    );

    // NOLINTEND
};
