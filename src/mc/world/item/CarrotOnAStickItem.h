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

class CarrotOnAStickItem : public ::Item {
public:
    // prevent constructor by default
    CarrotOnAStickItem& operator=(CarrotOnAStickItem const&);
    CarrotOnAStickItem(CarrotOnAStickItem const&);
    CarrotOnAStickItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CarrotOnAStickItem() = default;

    // vIndex: 37
    virtual bool isHandEquipped() const;

    // vIndex: 47
    virtual bool requiresInteract() const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 51
    virtual int getEnchantValue() const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    MCAPI CarrotOnAStickItem(std::string const& name, short id);

    // NOLINTEND
};
