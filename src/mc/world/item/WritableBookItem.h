#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
struct PageContent;
// clang-format on

class WritableBookItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player) const /*override*/;

    // vIndex: 50
    virtual bool requiresInteract() const /*override*/;

    // vIndex: 109
    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    // vIndex: 0
    virtual ~WritableBookItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addPageAt(::ItemStack& book, int index, ::PageContent const& page);

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player) const;

    MCNAPI bool $requiresInteract() const;

    MCNAPI ::std::string $getInteractText(::Player const& player) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
