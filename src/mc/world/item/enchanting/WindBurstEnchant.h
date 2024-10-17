#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class WindBurstEnchant : public ::Enchant {
public:
    // prevent constructor by default
    WindBurstEnchant& operator=(WindBurstEnchant const&);
    WindBurstEnchant(WindBurstEnchant const&);
    WindBurstEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WindBurstEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 8
    virtual float getDamageBonus(int, class Actor const&, class Actor const&) const;

    // vIndex: 10
    virtual void doPostItemHurtActor(class Actor& attacker, class Actor&, int enchantLevel) const;

    // vIndex: 14
    virtual bool isTreasureOnly() const;

    // vIndex: 15
    virtual bool isDiscoverable() const;

    MCAPI WindBurstEnchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    MCAPI void doPostItemHurtActor$(class Actor& attacker, class Actor&, int enchantLevel) const;

    MCAPI float getDamageBonus$(int, class Actor const&, class Actor const&) const;

    MCAPI int getMaxCost$(int level) const;

    MCAPI int getMaxLevel$() const;

    MCAPI int getMinCost$(int level) const;

    MCAPI bool isDiscoverable$() const;

    MCAPI bool isTreasureOnly$() const;

    // NOLINTEND
};
