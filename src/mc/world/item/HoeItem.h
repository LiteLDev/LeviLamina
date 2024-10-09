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

class HoeItem : public ::DiggerItem {
public:
    // prevent constructor by default
    HoeItem& operator=(HoeItem const&);
    HoeItem(HoeItem const&);
    HoeItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HoeItem() = default;

    // vIndex: 7
    virtual void executeEvent(class ItemStackBase& item, std::string const& name, class RenderParams& params) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    MCAPI HoeItem(std::string const& name, int id, class Item::Tier const& tier, class Experiments const& experiments);

    // NOLINTEND
};
