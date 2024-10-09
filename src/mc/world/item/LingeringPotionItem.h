#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/PotionItem.h"
#include "mc/world/item/alchemy/Potion.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class LingeringPotionItem : public ::PotionItem {
public:
    // prevent constructor by default
    LingeringPotionItem& operator=(LingeringPotionItem const&);
    LingeringPotionItem(LingeringPotionItem const&);
    LingeringPotionItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LingeringPotionItem() = default;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 73
    virtual class Actor* createProjectileActor(
        class BlockSource&     region,
        class ItemStack const& stack,
        class Vec3 const&      pos,
        class Vec3 const&      direction
    ) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    // vIndex: 119
    virtual ::Potion::PotionType getPotionType() const;

    MCAPI LingeringPotionItem(std::string const& name, int id);

    // NOLINTEND
};
