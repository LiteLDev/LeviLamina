#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class Level;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class SmithingTemplateItem : public ::Item {
public:
    // SmithingTemplateItem inner types define
    enum class UpgradeType : int {
        NetheriteUpgrade = 0,
        ArmorTrim        = 1,
        Count            = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mAppliesToText;
    ::ll::TypedStorage<8, 32, ::std::string const> mIngredientsText;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 53
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 0
    virtual ~SmithingTemplateItem() /*override*/ = default;
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
