#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    // vIndex: 77
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 51
    virtual bool requiresInteract() const /*override*/;

    // vIndex: 112
    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    // vIndex: 0
    virtual ~WritableBookItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addPageAt(::ItemStackBase& book, int index, ::PageContent const& page);

    MCAPI static ::PageContent _deletePage(::ItemStackBase& book, int index);

    MCAPI static void _deletePages(::ItemStackBase& book);

    MCAPI static void _replacePage(::ItemStackBase& book, int index, ::PageContent const& page);

    MCAPI static void _signBookUserData(
        ::CompoundTag&                 userData,
        ::std::string                  title,
        ::std::optional<::std::string> filteredTitle,
        ::std::string                  author,
        ::std::optional<::std::string> filteredAuthor,
        ::std::string                  xuid
    );

    MCAPI static void addPageAt(::ItemStack& book, int index, ::PageContent const& page);

    MCAPI static void createUserDataIfEmpty(::ItemStackBase& book);

    MCAPI static ::PageContent deletePage(::ItemStack& book, int index);

    MCAPI static void signBook(
        ::ItemStack&                   book,
        ::std::string                  title,
        ::std::optional<::std::string> filteredTitle,
        ::std::string                  author,
        ::std::optional<::std::string> filteredAuthor,
        ::std::string                  xuid
    );

    MCAPI static void swapPages(::ItemStack& book, int page1, int page2);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCFOLD bool $requiresInteract() const;

    MCAPI ::std::string $getInteractText(::Player const& player) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
