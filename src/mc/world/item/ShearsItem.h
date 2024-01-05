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

class ShearsItem : public ::Item {
public:
    // prevent constructor by default
    ShearsItem& operator=(ShearsItem const&);
    ShearsItem(ShearsItem const&);
    ShearsItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShearsItem@@UEAA@XZ
    virtual ~ShearsItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 30, symbol: ?canDestroySpecial@ShearsItem@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 48, symbol: ?getEnchantSlot@ShearsItem@@UEBAHXZ
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

    // vIndex: 71, symbol: ?dispense@ShearsItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    // vIndex: 74, symbol: ?getDestroySpeed@ShearsItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const& itemStack, class Block const& block) const;

    // vIndex: 75, symbol: ?hurtActor@ShearsItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 79, symbol: ?mineBlock@ShearsItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool
    mineBlock(class ItemStack& itemStack, class Block const& block, int, int, int, class Actor* owner) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 117, symbol:
    // ?_useOn@ShearsItem@@UEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const&) const;

    // symbol: ??0ShearsItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ShearsItem(std::string const& name, int itemId);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_spawnLoot@ShearsItem@@CAXAEAVLevel@@PEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void _spawnLoot(class Level& level, class Actor* actor, std::string const& lootTable);

    // symbol: ?_tryShearMooshroom@ShearsItem@@CA_NAEAVLevel@@AEAVBlockSource@@PEAVActor@@@Z
    MCAPI static bool _tryShearMooshroom(class Level& level, class BlockSource& region, class Actor* actor);

    // symbol: ?_tryShearSheep@ShearsItem@@CA_NAEAVLevel@@PEAVActor@@@Z
    MCAPI static bool _tryShearSheep(class Level& level, class Actor* actor);

    // symbol: ?_tryShearSnowGolem@ShearsItem@@CA_NAEAVLevel@@PEAVActor@@@Z
    MCAPI static bool _tryShearSnowGolem(class Level& level, class Actor* actor);

    // NOLINTEND
};
