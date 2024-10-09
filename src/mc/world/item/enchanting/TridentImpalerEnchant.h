#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentImpalerEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentImpalerEnchant& operator=(TridentImpalerEnchant const&);
    TridentImpalerEnchant(TridentImpalerEnchant const&);
    TridentImpalerEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TridentImpalerEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 8
    virtual float getDamageBonus(int level, class Actor const& target, class Actor const&) const;

    MCAPI TridentImpalerEnchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        bool                 isLootable,
        int                  secondarySlots
    );

    // NOLINTEND
};
