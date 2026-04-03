#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/book_edit_action/AddPage.h"
#include "mc/network/packet/book_edit_action/DeletePage.h"
#include "mc/network/packet/book_edit_action/Finalize.h"
#include "mc/network/packet/book_edit_action/ReplacePage.h"
#include "mc/network/packet/book_edit_action/SwapPages.h"

// auto generated forward declare list
// clang-format off
struct PageContent;
// clang-format on

struct BookEditPacketPayload {
public:
    // BookEditPacketPayload inner types define
    using Operation = ::std::variant<
        ::BookEditAction::ReplacePage,
        ::BookEditAction::AddPage,
        ::BookEditAction::DeletePage,
        ::BookEditAction::SwapPages,
        ::BookEditAction::Finalize>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mBookSlot;
    ::ll::TypedStorage<
        8,
        104,
        ::std::variant<
            ::BookEditAction::ReplacePage,
            ::BookEditAction::AddPage,
            ::BookEditAction::DeletePage,
            ::BookEditAction::SwapPages,
            ::BookEditAction::Finalize>>
        mOperation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PageContent getPage() const;

    MCAPI_C void setToAddPage(int bookSlot, int pageIndex, ::PageContent const& page);

    MCAPI_C void setToFinalize(int bookSlot, ::std::string title, ::std::string author, ::std::string xuid);

    MCAPI_C void setToReplacePage(int bookSlot, int pageIndex, ::PageContent const& page);

    MCAPI ~BookEditPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
