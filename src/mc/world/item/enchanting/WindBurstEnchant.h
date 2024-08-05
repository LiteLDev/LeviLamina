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
    virtual int getMinCost(int) const;

    // vIndex: 3
    virtual int getMaxCost(int) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 8
    virtual float getDamageBonus(int, class Actor const&, class Actor const&) const;

    // vIndex: 10
    virtual void doPostItemHurtActor(class Actor&, class Actor&, int) const;

    // vIndex: 14
    virtual bool isTreasureOnly() const;

    // vIndex: 15
    virtual bool isDiscoverable() const;

    MCAPI WindBurstEnchant(::Enchant::Type, ::Enchant::Frequency, std::string_view, std::string_view, int, int);

    // NOLINTEND
};
