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
struct ActorUniqueID;
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
    // prevent constructor by default
    WrittenBookItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player) const /*override*/;

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

    virtual bool inventoryTick(::ItemStack& level, ::Level& owner, ::Actor&, int, bool) const /*override*/;

    virtual bool isGlint(::ItemStackBase const& stack) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WrittenBookItem(::std::string const& name, int id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canBeCopied(::CompoundTag const* tag);

    MCAPI static ::std::string const& getAuthor(::ItemStackBase const& book);

#ifdef LL_PLAT_C
    MCFOLD static ::ActorUniqueID getBookId(::ItemStack const& book);

    MCAPI static ::std::optional<::std::string> getFilteredAuthor(::ItemStack const& book);

    MCAPI static ::std::optional<::std::string> getFilteredTitle(::ItemStack const& book);
#endif

    MCAPI static int getGeneration(::CompoundTag const* tag);

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

    MCAPI static ::std::string_view const& TAG_TITLE();

    MCAPI static ::std::string_view const& TAG_XUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
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

    MCAPI ::Bedrock::Safety::RedactableString $getRedactedCustomName(::ItemStackBase const& stack) const;

    MCAPI bool $hasCustomHoverName(::ItemStackBase const& stack) const;

    MCAPI bool $inventoryTick(::ItemStack& level, ::Level& owner, ::Actor&, int, bool) const;

    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
