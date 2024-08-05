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
    MCAPI static void _tryToThrow(class Level&, class ItemStack&, class Player&);

    // NOLINTEND
};
