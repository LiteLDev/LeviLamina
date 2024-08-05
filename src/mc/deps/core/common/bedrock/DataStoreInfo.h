#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DataStoreDetail {

class DataStoreInfo {
public:
    // prevent constructor by default
    DataStoreInfo& operator=(DataStoreInfo const&);
    DataStoreInfo(DataStoreInfo const&);
    DataStoreInfo();

public:
    // NOLINTBEGIN
    MCAPI ~DataStoreInfo();

    // NOLINTEND
};

}; // namespace Bedrock::DataStoreDetail
