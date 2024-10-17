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

class HatchetItem : public ::DiggerItem {
public:
    // prevent constructor by default
    HatchetItem& operator=(HatchetItem const&);
    HatchetItem(HatchetItem const&);
    HatchetItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HatchetItem() = default;

    // vIndex: 7
    virtual void executeEvent(class ItemStackBase& item, std::string const& name, class RenderParams& params) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 77
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    MCAPI HatchetItem(std::string const& name, int id, class Item::Tier const& tier);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id, class Item::Tier const& tier);

    MCAPI void executeEvent$(class ItemStackBase& item, std::string const& name, class RenderParams& params) const;

    MCAPI float getDestroySpeed$(class ItemStackBase const& item, class Block const& block) const;

    MCAPI int getEnchantSlot$() const;

    // NOLINTEND
};
