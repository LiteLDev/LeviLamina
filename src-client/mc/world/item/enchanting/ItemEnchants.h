#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
class ListTag;
class ReadOnlyBinaryStream;
struct EnchantResult;
// clang-format on

class ItemEnchants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                      mSlot;
    ::ll::TypedStorage<8, 72, ::std::vector<::EnchantmentInstance>[3]> mItemEnchants;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemEnchants& operator=(ItemEnchants const&);
    ItemEnchants(ItemEnchants const&);
    ItemEnchants();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _fromList(::ListTag const& tag);

    MCAPI ::std::unique_ptr<::ListTag> _toList() const;

    MCAPI bool addEnchant(::EnchantmentInstance enchant, bool allowNonVanilla);

    MCAPI ::EnchantResult canEnchant(::EnchantmentInstance enchant, bool allowNonVanilla);

    MCAPI ::std::vector<::EnchantmentInstance> getAllEnchants() const;

    MCAPI ::std::vector<::std::string> getEnchantNames() const;

    MCAPI ::EnchantmentInstance getEnchantment(::Enchant::Type enchantType);

    MCAPI int getTotalValue(bool bookModifier) const;

    MCAPI int hasEnchant(::Enchant::Type enchantType) const;

    MCAPI ::ItemEnchants& operator=(::ItemEnchants&&);

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCAPI ~ItemEnchants();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
