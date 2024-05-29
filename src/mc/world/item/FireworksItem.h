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

    // vIndex: 44, symbol: ?isDestructive@FireworksItem@@UEBA_NH@Z
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@FireworksItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       advancedToolTips
    ) const;

    // vIndex: 72, symbol: ?use@FireworksItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 73, symbol: ?dispense@FireworksItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 118, symbol:
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
    initFireworksRocketItem(class ItemStack& item, std::vector<class ItemStack> const& charges, int sulphurCount);

    // symbol: ?TAG_EXPLOSIONS@FireworksItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_EXPLOSIONS;

    // symbol: ?TAG_E_FLIGHT@FireworksItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_FLIGHT;

    // symbol: ?TAG_FIREWORKS@FireworksItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_FIREWORKS;

    // NOLINTEND
};
