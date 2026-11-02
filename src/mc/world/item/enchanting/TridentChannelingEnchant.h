#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentChannelingEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;

    virtual bool isCompatibleWith(::Enchant::Type type) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getMinCost(int level) const;

    MCNAPI int $getMaxCost(int level) const;

    MCNAPI int $getMaxLevel() const;

    MCNAPI bool $isCompatibleWith(::Enchant::Type type) const;


    // NOLINTEND
};
