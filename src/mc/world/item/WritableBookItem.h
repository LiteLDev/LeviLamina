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
    // prevent constructor by default
    WritableBookItem& operator=(WritableBookItem const&);
    WritableBookItem(WritableBookItem const&);
    WritableBookItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 50
    virtual bool requiresInteract() const /*override*/;

    // vIndex: 109
    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    // vIndex: 0
    virtual ~WritableBookItem() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addPageAt(::ItemStack& book, int index, ::PageContent const& page);

    MCAPI static ::PageContent deletePage(::ItemStack& book, int index);

    MCAPI static void replacePage(::ItemStack& book, int index, ::PageContent const& page);

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI bool $requiresInteract() const;

    MCAPI ::std::string $getInteractText(::Player const& player) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
