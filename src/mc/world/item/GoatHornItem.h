#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Goat;
class HashedString;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class GoatHornItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 113
    virtual bool canBeCharged() const /*override*/;

    // vIndex: 94
    virtual ::HashedString const& getCooldownType() const /*override*/;

    // vIndex: 95
    virtual int getCooldownTime() const /*override*/;

    // vIndex: 52
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 0
    virtual ~GoatHornItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addGoatHornVarationSaveData(::Goat& goat, ::ItemStack& instance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCNAPI bool $canBeCharged() const;

    MCNAPI ::HashedString const& $getCooldownType() const;

    MCNAPI int $getCooldownTime() const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
