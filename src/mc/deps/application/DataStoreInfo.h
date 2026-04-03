#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DataStoreDetail {

struct DataStoreInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk78cca3;
    ::ll::UntypedStorage<8, 8>   mUnkbb84ee;
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

} // namespace Bedrock::DataStoreDetail
