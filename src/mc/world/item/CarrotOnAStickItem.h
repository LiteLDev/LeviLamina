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
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    MCAPI CarrotOnAStickItem(std::string const& name, short id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI int getEnchantSlot$() const;

    MCAPI int getEnchantValue$() const;

    MCAPI void hurtActor$(class ItemStack&, class Actor&, class Mob&) const;

    MCAPI bool isHandEquipped$() const;

    MCAPI bool requiresInteract$() const;

    // NOLINTEND
};
