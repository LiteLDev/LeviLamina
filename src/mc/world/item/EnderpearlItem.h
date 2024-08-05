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

class EnderpearlItem : public ::Item {
public:
    // prevent constructor by default
    EnderpearlItem& operator=(EnderpearlItem const&);
    EnderpearlItem(EnderpearlItem const&);
    EnderpearlItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnderpearlItem() = default;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 90
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 91
    virtual int getCooldownTime() const;

    MCAPI EnderpearlItem(std::string const& nameId, int id);

    MCAPI static class HashedString const ENDER_PEARL_COOLDOWN;

    // NOLINTEND
};
