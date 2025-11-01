#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DataStoreDetail {

struct DataStoreInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5d6eeb;
    ::ll::UntypedStorage<8, 8> mUnk6b9e42;
    ::ll::UntypedStorage<8, 192> mUnk4413f7;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreInfo& operator=(DataStoreInfo const&);
    DataStoreInfo(DataStoreInfo const&);
    DataStoreInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DataStoreInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
