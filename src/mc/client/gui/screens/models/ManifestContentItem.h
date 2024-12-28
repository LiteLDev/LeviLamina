#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"

struct ManifestContentItem : public ::ContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf0bc93;
    ::ll::UntypedStorage<8, 32> mUnk4aded3;
    ::ll::UntypedStorage<8, 32> mUnk6a2e02;
    ::ll::UntypedStorage<8, 32> mUnkac926c;
    // NOLINTEND

public:
    // prevent constructor by default
    ManifestContentItem& operator=(ManifestContentItem const&);
    ManifestContentItem(ManifestContentItem const&);
    ManifestContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ManifestContentItem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
