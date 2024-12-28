#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ManifestContentItem.h"

struct PackContentItem : public ::ManifestContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkfcea85;
    ::ll::UntypedStorage<8, 432> mUnk6b195b;
    ::ll::UntypedStorage<8, 432> mUnkffd634;
    ::ll::UntypedStorage<8, 32>  mUnkde3d59;
    ::ll::UntypedStorage<8, 8>   mUnkb3c718;
    ::ll::UntypedStorage<4, 4>   mUnk8cfd8c;
    ::ll::UntypedStorage<1, 1>   mUnk87809b;
    ::ll::UntypedStorage<8, 24>  mUnk1b0196;
    ::ll::UntypedStorage<8, 8>   mUnkd2fcd5;
    ::ll::UntypedStorage<8, 24>  mUnkaabf96;
    ::ll::UntypedStorage<8, 24>  mUnk445d84;
    // NOLINTEND

public:
    // prevent constructor by default
    PackContentItem& operator=(PackContentItem const&);
    PackContentItem(PackContentItem const&);
    PackContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackContentItem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
