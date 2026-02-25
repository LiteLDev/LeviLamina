#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/PackListType.h"

// auto generated forward declare list
// clang-format off
struct PackContentItem;
// clang-format on

namespace World {

struct PendingPackRemoval {
public:
    // PendingPackRemoval inner types define
    using PackItemContentPtr = ::std::shared_ptr<::PackContentItem const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackContentItem const>>> mContentToMove;
    ::ll::TypedStorage<4, 4, ::PackListType>                                             mToPackList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PackContentItem const>>                mPackItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PendingPackRemoval();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
