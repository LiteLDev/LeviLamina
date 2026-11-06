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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getLevel(::Actor const& entity);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& SOUL_SPEED_BOOST_UUID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getMinCost(int level) const;

    MCNAPI int $getMaxCost(int level) const;

    MCFOLD int $getMaxLevel() const;

    MCNAPI bool $isTreasureOnly() const;

    MCNAPI bool $isDiscoverable() const;


    // NOLINTEND
};
