#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentRiptideEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentRiptideEnchant& operator=(TridentRiptideEnchant const&);
    TridentRiptideEnchant(TridentRiptideEnchant const&);
    TridentRiptideEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TridentRiptideEnchant@@UEAA@XZ
    virtual ~TridentRiptideEnchant() = default;

    // vIndex: 1, symbol: ?isCompatibleWith@TridentRiptideEnchant@@UEBA_NW4Type@Enchant@@@Z
    virtual bool isCompatibleWith(::Enchant::Type type) const;

    // vIndex: 2, symbol: ?getMinCost@TridentRiptideEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@TridentRiptideEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@TridentRiptideEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // NOLINTEND
};
