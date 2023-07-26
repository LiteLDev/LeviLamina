#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DataStoreDetail {

class DataStoreInfo {

public:
    // prevent constructor by default
    DataStoreInfo& operator=(DataStoreInfo const&) = delete;
    DataStoreInfo(DataStoreInfo const&)            = delete;
    DataStoreInfo()                                = delete;

public:
    /**
     * @symbol ??1DataStoreInfo\@DataStoreDetail\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~DataStoreInfo(); // NOLINT
};

}; // namespace Bedrock::DataStoreDetail
