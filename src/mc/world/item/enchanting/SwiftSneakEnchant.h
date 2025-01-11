#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class SwiftSneakEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual int getMinCost(int level) const /*override*/;

    // vIndex: 3
    virtual int getMaxCost(int level) const /*override*/;

    // vIndex: 5
    virtual int getMaxLevel() const /*override*/;

    // vIndex: 14
    virtual bool isTreasureOnly() const /*override*/;

    // vIndex: 15
    virtual bool isDiscoverable() const /*override*/;

    // vIndex: 0
    virtual ~SwiftSneakEnchant() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static float getExtraSneakingMovementFactor(::Actor const& entity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getMinCost(int level) const;

    MCAPI int $getMaxCost(int level) const;

    MCAPI int $getMaxLevel() const;

    MCAPI bool $isTreasureOnly() const;

    MCAPI bool $isDiscoverable() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
