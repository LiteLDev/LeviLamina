#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackBase;
class Level;
class MobEffectInstance;
class Player;
namespace Bedrock::Safety { class RedactableString; }
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
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    virtual bool uniqueAuxValues() const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack, bool const playerIsCreative) const
        /*override*/;

    virtual ~SuspiciousStewItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::array<::MobEffectInstance, 13> const& _getStewEffects();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCFOLD bool $uniqueAuxValues() const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack, bool const playerIsCreative) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
