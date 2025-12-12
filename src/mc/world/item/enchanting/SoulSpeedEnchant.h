#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace mce { class UUID; }
// clang-format on

class SoulSpeedEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;

    virtual bool isTreasureOnly() const /*override*/;

    virtual bool isDiscoverable() const /*override*/;

    virtual ~SoulSpeedEnchant() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int getLevel(::Actor const& entity);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& SOUL_SPEED_BOOST_UUID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getMinCost(int level) const;

    MCFOLD int $getMaxCost(int level) const;

    MCFOLD int $getMaxLevel() const;

    MCFOLD bool $isTreasureOnly() const;

    MCFOLD bool $isDiscoverable() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
