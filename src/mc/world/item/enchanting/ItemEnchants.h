#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
class ListTag;
struct EnchantResult;
// clang-format on

class ItemEnchants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                    mSlot;
    ::ll::TypedStorage<8, 72, ::std::array<::std::vector<::EnchantmentInstance>, 3>> mItemEnchants;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemEnchants();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemEnchants(int slot);

    MCAPI ItemEnchants(int slot, ::ListTag const& tag);

    MCAPI void _fromList(::ListTag const& tag);

    MCAPI ::std::unique_ptr<::ListTag> _toList() const;

    MCAPI bool addEnchant(::EnchantmentInstance enchant, bool allowNonVanilla);

    MCAPI int addEnchants(::ItemEnchants const& enchants, bool allowNonVanilla);

    MCAPI ::EnchantResult canEnchant(::EnchantmentInstance enchant, bool allowNonVanilla);

    MCAPI int count() const;

    MCAPI ::std::vector<::EnchantmentInstance> getAllEnchants() const;

    MCAPI ::std::array<::std::vector<::EnchantmentInstance>, 3> getEnchantInstances() const;

    MCAPI ::std::vector<::std::string> getEnchantNames() const;

    MCAPI ::EnchantmentInstance getEnchantment(::Enchant::Type enchantType);

    MCAPI ::std::vector<::EnchantmentInstance> const& getEnchants(int activationType) const;

    MCFOLD int getSlot() const;

    MCAPI int getTotalValue(bool bookModifier) const;

    MCAPI int hasEnchant(::Enchant::Type enchantType) const;

    MCAPI bool isEmpty() const;

    MCAPI bool operator==(::ItemEnchants const& rhs) const;

    MCAPI void removeEnchantment(::Enchant::Type enchantType);

    MCAPI void setEnchantInstances(::std::array<::std::vector<::EnchantmentInstance>, 3> enchants);

    MCFOLD void setSlot(int slot);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int slot);

    MCAPI void* $ctor(int slot, ::ListTag const& tag);
    // NOLINTEND
};
