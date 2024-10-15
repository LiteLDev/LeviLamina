#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class ProtectionEnchant : public ::Enchant {
public:
    // prevent constructor by default
    ProtectionEnchant& operator=(ProtectionEnchant const&);
    ProtectionEnchant(ProtectionEnchant const&);
    ProtectionEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ProtectionEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 6
    virtual int getDamageProtection(int level, class ActorDamageSource const& source) const;

    // vIndex: 11
    virtual void doPostHurt(class ItemInstance& item, class Actor& victim, class Actor& attacker, int level) const;

    // vIndex: 13
    virtual bool isProtectionEnchant() const;

    // vIndex: 16
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    MCAPI ProtectionEnchant(
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

    MCAPI void* ctor$(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    MCAPI bool _isValidEnchantmentTypeForCategory$(::Enchant::Type type) const;

    MCAPI void doPostHurt$(class ItemInstance& item, class Actor& victim, class Actor& attacker, int level) const;

    MCAPI int getDamageProtection$(int level, class ActorDamageSource const& source) const;

    MCAPI int getMaxCost$(int level) const;

    MCAPI int getMaxLevel$() const;

    MCAPI int getMinCost$(int level) const;

    MCAPI bool isProtectionEnchant$() const;

    MCAPI static float const& THORNS_CHANCE_PER_LEVEL();

    MCAPI static std::vector<::Enchant::Type> const& VALID_ENCHANTMENTS();

    // NOLINTEND
};
