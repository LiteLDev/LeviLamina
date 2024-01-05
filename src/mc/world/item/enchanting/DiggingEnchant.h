#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class DiggingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    DiggingEnchant& operator=(DiggingEnchant const&);
    DiggingEnchant(DiggingEnchant const&);
    DiggingEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DiggingEnchant@@UEAA@XZ
    virtual ~DiggingEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@DiggingEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@DiggingEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?getMaxLevel@DiggingEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: ?_isValidEnchantmentTypeForCategory@DiggingEnchant@@EEBA_NW4Type@Enchant@@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?VALID_ENCHANTMENTS@DiggingEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $VALID_ENCHANTMENTS() { return VALID_ENCHANTMENTS; }

    // NOLINTEND
};
