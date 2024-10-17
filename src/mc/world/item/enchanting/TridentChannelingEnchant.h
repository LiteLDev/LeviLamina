#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentChannelingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentChannelingEnchant& operator=(TridentChannelingEnchant const&);
    TridentChannelingEnchant(TridentChannelingEnchant const&);
    TridentChannelingEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TridentChannelingEnchant() = default;

    // vIndex: 1
    virtual bool isCompatibleWith(::Enchant::Type type) const;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    MCAPI TridentChannelingEnchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        bool                 isLootable,
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
        bool                 isLootable,
        int                  secondarySlots
    );

    MCAPI int getMaxCost$(int level) const;

    MCAPI int getMaxLevel$() const;

    MCAPI int getMinCost$(int level) const;

    MCAPI bool isCompatibleWith$(::Enchant::Type type) const;

    // NOLINTEND
};
