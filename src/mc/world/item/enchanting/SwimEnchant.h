#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class SwimEnchant : public ::Enchant {
public:
    // prevent constructor by default
    SwimEnchant& operator=(SwimEnchant const&);
    SwimEnchant(SwimEnchant const&);
    SwimEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SwimEnchant@@UEAA@XZ
    virtual ~SwimEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@SwimEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@SwimEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@SwimEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 14, symbol: ?_isValidEnchantmentTypeForCategory@SwimEnchant@@EEBA_NW4Type@Enchant@@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?VALID_ENCHANTMENTS@SwimEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;

    // NOLINTEND
};
