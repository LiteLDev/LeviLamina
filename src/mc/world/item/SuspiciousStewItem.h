#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Level;
class MobEffectInstance;
class Player;
// clang-format on

class SuspiciousStewItem : public ::Item {
public:
    // SuspiciousStewItem inner types define
    enum class SuspiciousStewType : uint {
        Poppy            = 0,
        Cornflower       = 1,
        Tulip            = 2,
        AzureBluet       = 3,
        LilyOfTheValley  = 4,
        Dandelion        = 5,
        BlueOrchid       = 6,
        Allium           = 7,
        OxeyeDaisy       = 8,
        WitherRose       = 9,
        Torchflower      = 10,
        OpenEyeblossom   = 11,
        ClosedEyeblossom = 12,
        Count            = 13,
    };

    using StewEffects = ::std::array<::MobEffectInstance, 13>;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 79
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    // vIndex: 63
    virtual bool uniqueAuxValues() const /*override*/;

    // vIndex: 0
    virtual ~SuspiciousStewItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::array<::MobEffectInstance, 13> const& _getStewEffects();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCNAPI bool $uniqueAuxValues() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
