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

class FireworksItem : public ::Item {
public:
    // prevent constructor by default
    FireworksItem& operator=(FireworksItem const&);
    FireworksItem(FireworksItem const&);
    FireworksItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FireworksItem@@UEAA@XZ
    virtual ~FireworksItem() = default;

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

    // vIndex: 42, symbol: ?isDestructive@FireworksItem@@UEBA_NH@Z
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 46, symbol:
    // ?appendFormattedHovertext@FireworksItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       advancedToolTips
    ) const;

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

    // vIndex: 70, symbol: ?use@FireworksItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& itemStack, class Player& player) const;

    // vIndex: 71, symbol: ?dispense@FireworksItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 117, symbol:
    // ?_useOn@FireworksItem@@UEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor&, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    // symbol: ??0FireworksItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI FireworksItem(std::string const& nameId, int id);

    // symbol:
    // ?initFireworksRocketItem@FireworksItem@@SAAEBVItemInstance@@AEAV2@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@H@Z
    MCAPI static class ItemInstance const& initFireworksRocketItem(
        class ItemInstance&                    itemInstance,
        std::vector<class ItemInstance> const& charges,
        int                                    sulphurCount
    );

    // symbol:
    // ?initFireworksRocketItem@FireworksItem@@SAAEBVItemStack@@AEAV2@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@H@Z
    MCAPI static class ItemStack const&
    initFireworksRocketItem(class ItemStack& itemStack, std::vector<class ItemStack> const& charges, int sulphurCount);

    // symbol: ?TAG_EXPLOSIONS@FireworksItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_EXPLOSIONS;

    // symbol: ?TAG_E_FLIGHT@FireworksItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_FLIGHT;

    // symbol: ?TAG_FIREWORKS@FireworksItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_FIREWORKS;

    // NOLINTEND
};
