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
    // vIndex: 0
    virtual ~FireworksItem() = default;

    // vIndex: 44
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       advancedToolTips
    ) const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor&, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    MCAPI FireworksItem(std::string const& nameId, int id);

    MCAPI static class ItemInstance const& initFireworksRocketItem(
        class ItemInstance&                    itemInstance,
        std::vector<class ItemInstance> const& charges,
        int                                    sulphurCount
    );

    MCAPI static class ItemStack const&
    initFireworksRocketItem(class ItemStack& item, std::vector<class ItemStack> const& charges, int sulphurCount);

    MCAPI static std::string const TAG_EXPLOSIONS;

    MCAPI static std::string const TAG_E_FLIGHT;

    MCAPI static std::string const TAG_FIREWORKS;

    // NOLINTEND
};
