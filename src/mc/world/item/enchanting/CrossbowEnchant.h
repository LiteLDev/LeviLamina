#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class CrossbowEnchant : public ::Enchant {
public:
    // prevent constructor by default
    CrossbowEnchant();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;

    virtual bool isCompatibleWith(::Enchant::Type type) const /*override*/;

    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const /*override*/;

    virtual ~CrossbowEnchant() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CrossbowEnchant(
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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::Enchant::Type> const& VALID_ENCHANTMENTS();
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

    MCAPI int $getMaxCost(int level) const;

    MCAPI int $getMaxLevel() const;

    MCAPI bool $isCompatibleWith(::Enchant::Type type) const;

    MCAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type type) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
