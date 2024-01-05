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

class BrushItem : public ::Item {
public:
    // prevent constructor by default
    BrushItem& operator=(BrushItem const&);
    BrushItem(BrushItem const&);
    BrushItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BrushItem@@UEAA@XZ
    virtual ~BrushItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 48, symbol: ?getEnchantSlot@BrushItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 75, symbol: ?hurtActor@BrushItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 78, symbol: ?mineBlock@BrushItem@@UEBA_NAEAVItemInstance@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 79, symbol: ?mineBlock@BrushItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 117, symbol:
    // ?_useOn@BrushItem@@MEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& itemStack, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol: ?useInterruptedByAttacking@BrushItem@@UEBA_NXZ
    MCVAPI bool useInterruptedByAttacking() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_spawnDustParticles@BrushItem@@KAXAEAVLevel@@VVec3@@AEBVBlock@@AEBVBlockPos@@E@Z
    MCAPI static void _spawnDustParticles(
        class Level&          level,
        class Vec3            clickPos,
        class Block const&    block,
        class BlockPos const& pos,
        uchar                 face
    );

    // NOLINTEND
};
