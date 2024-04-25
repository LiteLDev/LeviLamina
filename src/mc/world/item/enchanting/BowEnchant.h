#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class BowEnchant : public ::Enchant {
public:
    // prevent constructor by default
    BowEnchant& operator=(BowEnchant const&);
    BowEnchant(BowEnchant const&);
    BowEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BowEnchant@@UEAA@XZ
    virtual ~BowEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@BowEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@BowEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@BowEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 14, symbol: ?_isValidEnchantmentTypeForCategory@BowEnchant@@EEBA_NW4Type@Enchant@@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?VALID_ENCHANTMENTS@BowEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;

    // NOLINTEND
};
