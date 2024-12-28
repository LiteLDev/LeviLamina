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
    ::ll::UntypedStorage<4, 4>  mUnka53d8f;
    ::ll::UntypedStorage<8, 72> mUnk5ecf08;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemEnchants& operator=(ItemEnchants const&);
    ItemEnchants(ItemEnchants const&);
    ItemEnchants();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemEnchants(int slot);

    MCAPI ItemEnchants(int slot, ::ListTag const& tag);

    MCAPI ::std::unique_ptr<::ListTag> _toList() const;

    MCAPI bool addEnchant(::EnchantmentInstance enchant, bool allowNonVanilla);

    MCAPI int addEnchants(::ItemEnchants const& enchants, bool allowNonVanilla);

    MCAPI ::EnchantResult canEnchant(::EnchantmentInstance enchant, bool allowNonVanilla);

    MCAPI int count() const;

    MCAPI ::std::vector<::EnchantmentInstance> getAllEnchants() const;

    MCAPI ::std::vector<::std::string> getEnchantNames() const;

    MCAPI ::EnchantmentInstance getEnchantment(::Enchant::Type enchantType);

    MCAPI ::std::vector<::EnchantmentInstance> const& getEnchants(int activationType) const;

    MCAPI int getSlot() const;

    MCAPI int getTotalValue(bool bookModifier) const;

    MCAPI int hasEnchant(::Enchant::Type enchantType) const;

    MCAPI bool isEmpty() const;

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCAPI void removeEnchantment(::Enchant::Type enchantType);

    MCAPI ~ItemEnchants();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int slot);

    MCAPI void* $ctor(int slot, ::ListTag const& tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
