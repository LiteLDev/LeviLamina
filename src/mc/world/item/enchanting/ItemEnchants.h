#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/enchanting/Enchant.h"

class ItemEnchants {
public:
    // prevent constructor by default
    ItemEnchants& operator=(ItemEnchants const&);
    ItemEnchants(ItemEnchants const&);
    ItemEnchants();

public:
    // NOLINTBEGIN
    MCAPI explicit ItemEnchants(int slot);

    MCAPI ItemEnchants(int slot, class ListTag const& tag);

    MCAPI bool addEnchant(class EnchantmentInstance enchant, bool allowNonVanilla);

    MCAPI int addEnchants(class ItemEnchants const& enchants, bool allowNonVanilla);

    MCAPI struct EnchantResult canEnchant(class EnchantmentInstance enchant, bool allowNonVanilla);

    MCAPI int count() const;

    MCAPI std::vector<class EnchantmentInstance> getAllEnchants() const;

    MCAPI std::vector<std::string> getEnchantNames() const;

    MCAPI class EnchantmentInstance getEnchantment(::Enchant::Type enchantType);

    MCAPI std::vector<class EnchantmentInstance> const& getEnchants(int activationType) const;

    MCAPI int getSlot() const;

    MCAPI int getTotalValue(bool bookModifier) const;

    MCAPI int hasEnchant(::Enchant::Type enchantType) const;

    MCAPI bool isEmpty() const;

    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    MCAPI void removeEnchantment(::Enchant::Type enchantType);

    MCAPI ~ItemEnchants();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::unique_ptr<class ListTag> _toList() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
