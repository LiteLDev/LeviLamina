#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"
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
    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) const /*override*/;

    virtual bool requiresInteract() const /*override*/;

    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const& item, ::CompoundTag const* userData) const
        /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual ::Bedrock::Safety::RedactableString getRedactedCustomName(::ItemStackBase const& stack) const /*override*/;

    virtual bool hasCustomHoverName(::ItemStackBase const& stack) const /*override*/;

    virtual bool inventoryTick(::ItemStack&, ::Level& level, ::Actor& owner, int, bool) const /*override*/;

    virtual bool isGlint(::ItemStackBase const& stack) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string const& getAuthor(::ItemStackBase const& book);

#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<::std::string> getFilteredAuthor(::ItemStack const& book);

    MCNAPI static ::std::optional<::std::string> getFilteredTitle(::ItemStack const& book);
#endif

    MCNAPI static ::PageContent getPage(::ItemStackBase const& book, int index);

    MCNAPI static int getPageCount(::ItemStackBase const& book);

#ifdef LL_PLAT_C
    MCNAPI static ::std::vector<int> getPageCountByType(::ItemStack const& book);
#endif

    MCNAPI static ::std::vector<::PageContent> getPages(::ItemStackBase const& book);

    MCNAPI static ::std::string const& getTitle(::ItemStackBase const& book);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& TAG_AUTHOR();

    MCNAPI static ::std::string_view const& TAG_FILTERED_AUTHOR();

    MCNAPI static ::std::string_view const& TAG_FILTERED_TITLE();

    MCNAPI static ::std::string_view const& TAG_GENERATION();

    MCNAPI static ::std::string_view const& TAG_PAGES();

    MCNAPI static ::std::string_view const& TAG_PAGE_FILTERED_PHOTO_NAME();

    MCNAPI static ::std::string_view const& TAG_PAGE_FILTERED_TEXT();

    MCNAPI static ::std::string_view const& TAG_PAGE_PHOTO_NAME();

    MCNAPI static ::std::string_view const& TAG_PAGE_TEXT();

    MCNAPI static ::std::string_view const& TAG_TITLE();

#ifdef LL_PLAT_C
    MCNAPI static ::std::string_view const& TAG_XUID();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) const;

    MCNAPI bool $requiresInteract() const;

    MCNAPI ::std::string $getInteractText(::Player const& player) const;

    MCNAPI ::std::string $buildDescriptionId(::ItemDescriptor const& item, ::CompoundTag const* userData) const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCNAPI ::Bedrock::Safety::RedactableString $getRedactedCustomName(::ItemStackBase const& stack) const;

    MCNAPI bool $hasCustomHoverName(::ItemStackBase const& stack) const;

    MCNAPI bool $inventoryTick(::ItemStack&, ::Level& level, ::Actor& owner, int, bool) const;

    MCNAPI bool $isGlint(::ItemStackBase const& stack) const;


    // NOLINTEND
};
