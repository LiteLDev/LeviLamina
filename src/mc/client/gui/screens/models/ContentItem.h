#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2beeac;
    ::ll::UntypedStorage<8, 32> mUnkba3487;
    ::ll::UntypedStorage<8, 32> mUnk5b733b;
    ::ll::UntypedStorage<8, 8>  mUnk61395e;
    ::ll::UntypedStorage<1, 1>  mUnk88b7ec;
    ::ll::UntypedStorage<8, 8>  mUnk7ca133;
    ::ll::UntypedStorage<8, 8>  mUnk769d0e;
    ::ll::UntypedStorage<8, 8>  mUnk69e2ae;
    ::ll::UntypedStorage<8, 8>  mUnkcd8aeb;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentItem& operator=(ContentItem const&);
    ContentItem(ContentItem const&);
    ContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContentItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
