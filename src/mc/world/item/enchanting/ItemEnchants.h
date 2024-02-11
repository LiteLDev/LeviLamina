#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/item/enchanting/Enchant.h"

class ItemEnchants {
public:
    // prevent constructor by default
    ItemEnchants& operator=(ItemEnchants const&);
    ItemEnchants(ItemEnchants const&);
    ItemEnchants();

public:
    // NOLINTBEGIN
    // symbol: ??0ItemEnchants@@QEAA@H@Z
    MCAPI explicit ItemEnchants(int slot);

    // symbol: ??0ItemEnchants@@QEAA@HAEBVListTag@@@Z
    MCAPI ItemEnchants(int slot, class ListTag const& tag);

    // symbol: ?addEnchant@ItemEnchants@@QEAA_NVEnchantmentInstance@@_N@Z
    MCAPI bool addEnchant(class EnchantmentInstance enchant, bool allowNonVanilla);

    // symbol: ?addEnchants@ItemEnchants@@QEAAHAEBV1@_N@Z
    MCAPI int addEnchants(class ItemEnchants const& enchants, bool allowNonVanilla);

    // symbol: ?canEnchant@ItemEnchants@@QEAA?AUEnchantResult@@VEnchantmentInstance@@_N@Z
    MCAPI struct EnchantResult canEnchant(class EnchantmentInstance enchant, bool allowNonVanilla);

    // symbol: ?count@ItemEnchants@@QEBAHXZ
    MCAPI int count() const;

    // symbol:
    // ?getAllEnchants@ItemEnchants@@QEBA?AV?$vector@VEnchantmentInstance@@V?$allocator@VEnchantmentInstance@@@std@@@std@@XZ
    MCAPI std::vector<class EnchantmentInstance> getAllEnchants() const;

    // symbol:
    // ?getEnchantNames@ItemEnchants@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getEnchantNames() const;

    // symbol: ?getEnchantment@ItemEnchants@@QEAA?AVEnchantmentInstance@@W4Type@Enchant@@@Z
    MCAPI class EnchantmentInstance getEnchantment(::Enchant::Type enchantType);

    // symbol:
    // ?getEnchants@ItemEnchants@@QEBAAEBV?$vector@VEnchantmentInstance@@V?$allocator@VEnchantmentInstance@@@std@@@std@@H@Z
    MCAPI std::vector<class EnchantmentInstance> const& getEnchants(int activationType) const;

    // symbol: ?getSlot@ItemEnchants@@QEBAHXZ
    MCAPI int getSlot() const;

    // symbol: ?getTotalValue@ItemEnchants@@QEBAH_N@Z
    MCAPI int getTotalValue(bool bookModifier) const;

    // symbol: ?hasEnchant@ItemEnchants@@QEBAHW4Type@Enchant@@@Z
    MCAPI int hasEnchant(::Enchant::Type enchantType) const;

    // symbol: ?isEmpty@ItemEnchants@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?read@ItemEnchants@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // symbol: ?removeEnchantment@ItemEnchants@@QEAAXW4Type@Enchant@@@Z
    MCAPI void removeEnchantment(::Enchant::Type enchantType);

    // symbol: ??1ItemEnchants@@QEAA@XZ
    MCAPI ~ItemEnchants();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_toList@ItemEnchants@@AEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> _toList() const;

    // NOLINTEND
};
