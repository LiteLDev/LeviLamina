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
    // symbol: ??1DataStoreInfo@DataStoreDetail@Bedrock@@QEAA@XZ
    MCAPI ~DataStoreInfo();

    // NOLINTEND
};

}; // namespace Bedrock::DataStoreDetail
