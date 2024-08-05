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

class EnchantedBookItem : public ::Item {
public:
    // prevent constructor by default
    EnchantedBookItem& operator=(EnchantedBookItem const&);
    EnchantedBookItem(EnchantedBookItem const&);
    EnchantedBookItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnchantedBookItem() = default;

    // vIndex: 38
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 51
    virtual int getEnchantValue() const;

    MCAPI EnchantedBookItem(std::string const& name, int id, bool isGlint);

    // NOLINTEND
};
