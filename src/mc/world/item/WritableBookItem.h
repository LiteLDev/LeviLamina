#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemStack;
class ItemStackBase;
class Player;
struct PageContent;
// clang-format on

class WritableBookItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) const /*override*/;

    virtual bool requiresInteract() const /*override*/;

    virtual ::std::string getInteractText(::Player const& player) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addPageAt(::ItemStackBase& book, int index, ::PageContent const& page);

    MCNAPI static ::PageContent _deletePage(::ItemStackBase& book, int index);

    MCNAPI static void _replacePage(::ItemStackBase& book, int index, ::PageContent const& page);

    MCNAPI static void _signBookUserData(
        ::CompoundTag&                 userData,
        ::std::string                  title,
        ::std::optional<::std::string> filteredTitle,
        ::std::string                  author,
        ::std::optional<::std::string> filteredAuthor,
        ::std::string                  xuid
    );

    MCNAPI static void addPageAt(::ItemStack& book, int index, ::PageContent const& page);

    MCNAPI static void createUserDataIfEmpty(::ItemStackBase& book);

    MCNAPI static ::PageContent deletePage(::ItemStack& book, int index);

    MCNAPI static void replacePage(::ItemStack& book, int index, ::PageContent const& page);

    MCNAPI static void signBook(
        ::ItemStack&                   book,
        ::std::string                  title,
        ::std::optional<::std::string> filteredTitle,
        ::std::string                  author,
        ::std::optional<::std::string> filteredAuthor,
        ::std::string                  xuid
    );

    MCNAPI static void swapPages(::ItemStack& book, int page1, int page2);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) const;

    MCNAPI bool $requiresInteract() const;

    MCNAPI ::std::string $getInteractText(::Player const& player) const;


    // NOLINTEND
};
