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
    // prevent constructor by default
    GoatHornItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual bool canBeCharged() const /*override*/;

    virtual ::HashedString const& getCooldownCategory() const /*override*/;

    virtual int getCooldownDuration() const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               instance,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GoatHornItem(::std::string const& name, int id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addGoatHornVarationSaveData(::Goat& goat, ::ItemStack& instance);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCFOLD bool $canBeCharged() const;

    MCAPI ::HashedString const& $getCooldownCategory() const;

    MCFOLD int $getCooldownDuration() const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               instance,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
