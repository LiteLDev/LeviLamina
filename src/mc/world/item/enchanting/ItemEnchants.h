#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // member functions
    // NOLINTBEGIN
    MCAPI void _fromList(::ListTag const& tag);

    MCAPI ::std::unique_ptr<::ListTag> _toList() const;

    MCAPI int addEnchants(::ItemEnchants const& enchants, bool allowNonVanilla);

    MCAPI ::EnchantResult canEnchant(::EnchantmentInstance enchant, bool allowNonVanilla);

    MCAPI ::std::vector<::EnchantmentInstance> getAllEnchants() const;

    MCAPI ::std::array<::std::vector<::EnchantmentInstance>, 3> getEnchantInstances() const;

    MCAPI ::std::vector<::std::string> getEnchantNames() const;

    MCAPI bool operator==(::ItemEnchants const& rhs) const;

    MCAPI void setEnchantInstances(::std::array<::std::vector<::EnchantmentInstance>, 3> enchants);
    // NOLINTEND
};
