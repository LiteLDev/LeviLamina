#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ItemInstance;
// clang-format on

class ProtectionEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;

    virtual int getDamageProtection(int level, ::ActorDamageSource const& source) const /*override*/;

    virtual void doPostHurt(::ItemInstance& item, ::Actor& victim, ::Actor& attacker, int level) const /*override*/;

    virtual bool isProtectionEnchant() const /*override*/;

    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::Enchant::Type> const& VALID_ENCHANTMENTS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getMinCost(int level) const;

    MCNAPI int $getMaxCost(int level) const;

    MCNAPI int $getMaxLevel() const;

    MCNAPI int $getDamageProtection(int level, ::ActorDamageSource const& source) const;

    MCNAPI void $doPostHurt(::ItemInstance& item, ::Actor& victim, ::Actor& attacker, int level) const;

    MCNAPI bool $isProtectionEnchant() const;

    MCNAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type type) const;


    // NOLINTEND
};
