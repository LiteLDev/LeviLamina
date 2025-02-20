#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DataStoreDetail {

struct DataStoreInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbaaa9c;
    ::ll::UntypedStorage<8, 8>  mUnk6b9e42;
    ::ll::UntypedStorage<8, 24> mUnk4413f7;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreInfo& operator=(DataStoreInfo const&);
    DataStoreInfo(DataStoreInfo const&);
    DataStoreInfo();
};

} // namespace Bedrock::DataStoreDetail
