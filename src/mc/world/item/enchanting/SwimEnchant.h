#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class SwimEnchant : public ::Enchant {
public:
    // prevent constructor by default
    SwimEnchant& operator=(SwimEnchant const&);
    SwimEnchant(SwimEnchant const&);
    SwimEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwimEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 16
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    MCAPI SwimEnchant(
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
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool _isValidEnchantmentTypeForCategory$(::Enchant::Type type) const;

    MCAPI int getMaxCost$(int level) const;

    MCAPI int getMaxLevel$() const;

    MCAPI int getMinCost$(int level) const;

    MCAPI static std::vector<::Enchant::Type> const& VALID_ENCHANTMENTS();

    // NOLINTEND
};
