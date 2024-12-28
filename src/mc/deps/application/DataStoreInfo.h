#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DataStoreDetail {

struct DataStoreInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk622ba4;
    ::ll::UntypedStorage<8, 64>  mUnkc8f768;
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
    MCAPI ~DataStoreInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DataStoreDetail
