#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class DiggerItem : public ::Item {
public:
    // prevent constructor by default
    DiggerItem& operator=(DiggerItem const&);
    DiggerItem(DiggerItem const&);
    DiggerItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DiggerItem();

    // vIndex: 35
    virtual int getAttackDamage() const;

    // vIndex: 37
    virtual bool isHandEquipped() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 49
    virtual bool isValidRepairItem(
        class ItemStackBase const&,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 51
    virtual int getEnchantValue() const;

    // vIndex: 77
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    MCAPI void setBlocks(std::vector<class Block const*> const& blocks);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI DiggerItem(
        std::string const&                     name,
        short                                  id,
        int                                    attackDamage,
        class Item::Tier const&                tier,
        std::vector<class Block const*> const& blocks
    );

    // NOLINTEND
};
