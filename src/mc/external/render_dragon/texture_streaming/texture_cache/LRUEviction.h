#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct LRUEviction {
public:
    // LRUEviction inner types declare
    // clang-format off
    struct ImageLRUData;
    // clang-format on

    // LRUEviction inner types define
    struct ImageLRUData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk2ee4d9;
        ::ll::UntypedStorage<4, 4> mUnk7b1067;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImageLRUData& operator=(ImageLRUData const&);
        ImageLRUData(ImageLRUData const&);
        ImageLRUData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk91b22e;
    ::ll::UntypedStorage<4, 4>  mUnk66f7e5;
    ::ll::UntypedStorage<8, 24> mUnkda19f2;
    // NOLINTEND

public:
    // prevent constructor by default
    LRUEviction& operator=(LRUEviction const&);
    LRUEviction(LRUEviction const&);
    LRUEviction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void updateResource(uint64 const& key);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace dragon::texturestreaming
