#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContentCatalogPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk67a58a;
    ::ll::UntypedStorage<8, 8>  mUnkcaa27c;
    ::ll::UntypedStorage<8, 24> mUnk683edc;
    ::ll::UntypedStorage<1, 1>  mUnkb456e5;
    ::ll::UntypedStorage<1, 1>  mUnk629446;
    ::ll::UntypedStorage<1, 1>  mUnk920758;
    ::ll::UntypedStorage<8, 16> mUnkd4f32e;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentCatalogPackSourceOptions& operator=(ContentCatalogPackSourceOptions const&);
    ContentCatalogPackSourceOptions(ContentCatalogPackSourceOptions const&);
    ContentCatalogPackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ContentCatalogPackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
