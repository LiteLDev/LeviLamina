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
    MCNAPI void _fromList(::ListTag const& tag);

    MCNAPI ::std::unique_ptr<::ListTag> _toList() const;

    MCNAPI bool addEnchant(::EnchantmentInstance enchant, bool allowNonVanilla);

    MCNAPI ::EnchantResult canEnchant(::EnchantmentInstance enchant, bool allowNonVanilla);

    MCNAPI ::std::vector<::EnchantmentInstance> getAllEnchants() const;

    MCNAPI ::std::vector<::std::string> getEnchantNames() const;

    MCNAPI ::EnchantmentInstance getEnchantment(::Enchant::Type enchantType);

    MCNAPI ::std::vector<::EnchantmentInstance> const& getEnchants(int activationType) const;

    MCNAPI int getTotalValue(bool bookModifier) const;

    MCNAPI int hasEnchant(::Enchant::Type enchantType) const;

    MCNAPI ::ItemEnchants& operator=(::ItemEnchants&&);

    MCNAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCNAPI ~ItemEnchants();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
