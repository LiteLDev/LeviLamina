#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 122, symbol: ?getAnimationFrameFor@LodestoneCompassItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;

    // vIndex: 135, symbol:
    // ?_useOn@LodestoneCompassItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, uchar, class Vec3 const&) const;

    // symbol: ??0LodestoneCompassItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI LodestoneCompassItem(std::string const&, int);

    // symbol: ?linkCompassToLodestone@LodestoneCompassItem@@SA_NAEAVItemStack@@AEAVBlockSource@@VBlockPos@@@Z
    MCAPI static bool linkCompassToLodestone(class ItemStack&, class BlockSource&, class BlockPos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tryGetOrAddComponent@LodestoneCompassItem@@CAPEAVLodestoneCompassComponent@@PEAVTrackingRecord@PositionTrackingDB@@AEBV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@@Z
    MCAPI static class LodestoneCompassComponent*
    _tryGetOrAddComponent(class PositionTrackingDB::TrackingRecord*, std::variant<struct ActorUniqueID, std::pair<class BlockPos, DimensionType>> const&);

    // NOLINTEND
};
