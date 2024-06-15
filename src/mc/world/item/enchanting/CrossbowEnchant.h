#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class CrossbowEnchant : public ::Enchant {
public:
    // prevent constructor by default
    CrossbowEnchant& operator=(CrossbowEnchant const&);
    CrossbowEnchant(CrossbowEnchant const&);
    CrossbowEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CrossbowEnchant@@UEAA@XZ
    virtual ~CrossbowEnchant() = default;

    // vIndex: 1, symbol: ?isCompatibleWith@CrossbowEnchant@@UEBA_NW4Type@Enchant@@@Z
    virtual bool isCompatibleWith(::Enchant::Type type) const;

    // vIndex: 2, symbol: ?getMinCost@CrossbowEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@CrossbowEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@CrossbowEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 16, symbol: ?_isValidEnchantmentTypeForCategory@CrossbowEnchant@@EEBA_NW4Type@Enchant@@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    // symbol:
    // ??0CrossbowEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2H_NH@Z
    MCAPI CrossbowEnchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        bool                 isLootable,
        int                  secondarySlots
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?VALID_ENCHANTMENTS@CrossbowEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;

    // NOLINTEND
};
