#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentLoyaltyEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentLoyaltyEnchant();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual int getMinCost(int level) const /*override*/;

    // vIndex: 3
    virtual int getMaxCost(int level) const /*override*/;

    // vIndex: 5
    virtual int getMaxLevel() const /*override*/;

    // vIndex: 0
    virtual ~TridentLoyaltyEnchant() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TridentLoyaltyEnchant(
        ::Enchant::Type            type,
        ::Enchant::Frequency       frequency,
        ::std::string_view         stringId,
        ::std::string_view         description,
        ::Enchant::VillagerTrading isAvailableForVillagerTraining,
        int                        primarySlots,
        int                        secondarySlots
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Enchant::Type            type,
        ::Enchant::Frequency       frequency,
        ::std::string_view         stringId,
        ::std::string_view         description,
        ::Enchant::VillagerTrading isAvailableForVillagerTraining,
        int                        primarySlots,
        int                        secondarySlots
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getMinCost(int level) const;

    MCFOLD int $getMaxCost(int level) const;

    MCFOLD int $getMaxLevel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
