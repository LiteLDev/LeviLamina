#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class SwiftSneakEnchant : public ::Enchant {
public:
    // prevent constructor by default
    SwiftSneakEnchant& operator=(SwiftSneakEnchant const&);
    SwiftSneakEnchant(SwiftSneakEnchant const&);
    SwiftSneakEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwiftSneakEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 14
    virtual bool isTreasureOnly() const;

    // vIndex: 15
    virtual bool isDiscoverable() const;

    MCAPI SwiftSneakEnchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    MCAPI static float getExtraSneakingMovementFactor(class Actor const& entity);

    MCAPI static int getLevel(class Actor const& entity);

    // NOLINTEND
};
