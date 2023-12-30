#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentChannelingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentChannelingEnchant& operator=(TridentChannelingEnchant const&);
    TridentChannelingEnchant(TridentChannelingEnchant const&);
    TridentChannelingEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TridentChannelingEnchant@@UEAA@XZ
    virtual ~TridentChannelingEnchant() = default;

    // vIndex: 1, symbol: ?isCompatibleWith@TridentChannelingEnchant@@UEBA_NW4Type@Enchant@@@Z
    virtual bool isCompatibleWith(enum Enchant::Type type) const;

    // vIndex: 2, symbol: ?getMinCost@TridentChannelingEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@TridentChannelingEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?getMaxLevel@TridentChannelingEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // NOLINTEND
};
