#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
namespace Bedrock::Safety { class RedactableString; }
namespace mce { class Color; }
// clang-format on

class FireworkChargeItem : public ::Item {
public:
    // FireworkChargeItem inner types define
    enum class Shape : int {
        None        = 0,
        LargeBall   = 1,
        Star        = 2,
        HeadCreeper = 3,
        Burst       = 4,
        Count       = 5,
    };

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

    // vIndex: 107
    virtual bool hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const /*override*/;

    // vIndex: 15
    virtual bool isDyeable() const /*override*/;

    // vIndex: 66
    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const /*override*/;

    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 0
    virtual ~FireworkChargeItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _initFireworkChargeItem(
        ::ItemStackBase&            itemInstance,
        ::FireworkChargeItem::Shape shape,
        ::std::vector<uchar>        colors,
        ::std::vector<uchar>        fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
    );

    MCAPI static void
    appendColors(::Bedrock::Safety::RedactableString& hovertext, ::std::vector<uchar> const& colorList);

    MCAPI static void getFormattedHoverText(
        ::CompoundTag const&                 explosion,
        ::Bedrock::Safety::RedactableString& hovertext,
        ::std::string const&                 indent
    );

    MCAPI static ::ItemInstance const& initFireworkChargeItem(
        ::ItemInstance&             itemInstance,
        ::FireworkChargeItem::Shape shape,
        ::std::vector<uchar>        colors,
        ::std::vector<uchar>        fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
    );

    MCAPI static ::ItemStack const& initFireworkChargeItem(
        ::ItemStack&                item,
        ::FireworkChargeItem::Shape shape,
        ::std::vector<uchar>        colors,
        ::std::vector<uchar>        fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
    );

    MCAPI static void setColor(::ItemStackBase& instance);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& TAG_EXPLOSION();

    MCAPI static ::std::string const& TAG_E_COLORS();

    MCAPI static ::std::string const& TAG_E_FADECOLORS();

    MCAPI static ::std::string const& TAG_E_FLICKER();

    MCAPI static ::std::string const& TAG_E_TRAIL();

    MCAPI static ::std::string const& TAG_E_TYPE();
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

    MCAPI bool $hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const;

    MCFOLD bool $isDyeable() const;

    MCAPI ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const;

    MCFOLD bool $isValidAuxValue(int auxValue) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
