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

class EnderEyeItem : public ::Item {
public:
    // prevent constructor by default
    EnderEyeItem& operator=(EnderEyeItem const&);
    EnderEyeItem(EnderEyeItem const&);
    EnderEyeItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnderEyeItem() = default;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    MCAPI EnderEyeItem(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _tryToThrow(class Level& level, class ItemStack& item, class Player& player);

    // NOLINTEND
};
