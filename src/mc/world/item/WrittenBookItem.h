#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
struct PageContent;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class WrittenBookItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mShouldFilterText;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player) const /*override*/;

    // vIndex: 50
    virtual bool requiresInteract() const /*override*/;

    // vIndex: 109
    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    // vIndex: 87
    virtual ::std::string buildDescriptionId(::ItemDescriptor const& item, ::CompoundTag const* userData) const
        /*override*/;

    // vIndex: 52
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 92
    virtual bool inventoryTick(::ItemStack&, ::Level& level, ::Actor& owner, int, bool) const /*override*/;

    // vIndex: 39
    virtual bool isGlint(::ItemStackBase const& stack) const /*override*/;

    // vIndex: 0
    virtual ~WrittenBookItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int getPageCount(::ItemStack const& book);

    MCAPI static ::std::vector<::PageContent> getPages(::ItemStack const& book);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_PAGES();

    MCAPI static int const& MAX_PAGE_LENGTH();

    MCAPI static int const& MAX_TITLE_LENGTH();

    MCAPI static ::std::string_view const& TAG_AUTHOR();

    MCAPI static ::std::string_view const& TAG_FILTERED_AUTHOR();

    MCAPI static ::std::string_view const& TAG_FILTERED_TITLE();

    MCAPI static ::std::string_view const& TAG_GENERATION();

    MCAPI static ::std::string_view const& TAG_PAGES();

    MCAPI static ::std::string_view const& TAG_PAGE_FILTERED_PHOTO_NAME();

    MCAPI static ::std::string_view const& TAG_PAGE_FILTERED_TEXT();

    MCAPI static ::std::string_view const& TAG_PAGE_PHOTO_NAME();

    MCAPI static ::std::string_view const& TAG_PAGE_TEXT();

    MCAPI static ::std::string_view const& TAG_RESOLVED();

    MCAPI static ::std::string_view const& TAG_TITLE();

    MCAPI static ::std::string_view const& TAG_XUID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player) const;

    MCFOLD bool $requiresInteract() const;

    MCAPI ::std::string $getInteractText(::Player const& player) const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const& item, ::CompoundTag const* userData) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI bool $inventoryTick(::ItemStack&, ::Level& level, ::Actor& owner, int, bool) const;

    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
