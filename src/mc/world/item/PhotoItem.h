#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class PhotoItem : public ::Item {
public:
    // prevent constructor by default
    PhotoItem& operator=(PhotoItem const&);
    PhotoItem(PhotoItem const&);
    PhotoItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PhotoItem() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& TAG_PHOTO_NAME();

    MCAPI static ::std::string const& TAG_PHOTO_OWNER();

    MCAPI static ::std::string const& TAG_PHOTO_UUID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
