#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentRiptideEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentRiptideEnchant& operator=(TridentRiptideEnchant const&);
    TridentRiptideEnchant(TridentRiptideEnchant const&);
    TridentRiptideEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TridentRiptideEnchant() = default;

    // vIndex: 1
    virtual bool isCompatibleWith(::Enchant::Type type) const;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    MCAPI TridentRiptideEnchant(
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
