#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/DiggerItem.h"
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

class PickaxeItem : public ::DiggerItem {
public:
    // prevent constructor by default
    PickaxeItem& operator=(PickaxeItem const&);
    PickaxeItem(PickaxeItem const&);
    PickaxeItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PickaxeItem() = default;

    // vIndex: 31
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 77
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    MCAPI PickaxeItem(std::string const& name, int id, class Item::Tier const& tier);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool const _isTierOneBlock(class BlockLegacy const& block) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canDestroySpecial$(class Block const& block) const;

    MCAPI float getDestroySpeed$(class ItemStackBase const& item, class Block const& block) const;

    MCAPI int getEnchantSlot$() const;

    // NOLINTEND
};
