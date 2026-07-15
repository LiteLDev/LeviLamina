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
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual bool requiresInteract() const /*override*/;

    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual ::Bedrock::Safety::RedactableString getRedactedCustomName(::ItemStackBase const& stack) const /*override*/;

    virtual bool hasCustomHoverName(::ItemStackBase const& stack) const /*override*/;

    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const /*override*/;

    virtual bool isGlint(::ItemStackBase const& stack) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string const& getAuthor(::ItemStackBase const& book);

#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::std::string> getFilteredAuthor(::ItemStack const& book);

    MCAPI static ::std::optional<::std::string> getFilteredTitle(::ItemStack const& book);
#endif

    MCAPI static ::PageContent getPage(::ItemStackBase const& book, int index);

    MCAPI static int getPageCount(::ItemStackBase const& book);

#ifdef LL_PLAT_C
    MCAPI static ::std::vector<int> getPageCountByType(::ItemStack const& book);
#endif

    MCAPI static ::std::vector<::PageContent> getPages(::ItemStackBase const& book);

    MCAPI static ::std::string const& getTitle(::ItemStackBase const& book);

#ifdef LL_PLAT_C
    MCAPI static ::std::string const& getXUID(::ItemStackBase const& book);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& TAG_AUTHOR();

    MCAPI static ::std::string_view const& TAG_FILTERED_AUTHOR();

    MCAPI static ::std::string_view const& TAG_FILTERED_TITLE();

    MCAPI static ::std::string_view const& TAG_GENERATION();

    MCAPI static ::std::string_view const& TAG_PAGES();

    MCAPI static ::std::string_view const& TAG_PAGE_FILTERED_PHOTO_NAME();

    MCAPI static ::std::string_view const& TAG_PAGE_FILTERED_TEXT();

    MCAPI static ::std::string_view const& TAG_PAGE_PHOTO_NAME();

    MCAPI static ::std::string_view const& TAG_PAGE_TEXT();

    MCAPI static ::std::string_view const& TAG_TITLE();

    MCAPI static ::std::string_view const& TAG_XUID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
