#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemStackBase;
class Level;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class DecoratedPotBlockItem : public ::BlockItem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 52
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 97
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;

    // vIndex: 0
    virtual ~DecoratedPotBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DecoratedPotBlockItem(::std::string const& name, int id);

    MCAPI ::std::string buildIngredientItemList(::CompoundTag const* ingredientList) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI void $fixupCommon(::ItemStackBase& stack) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
