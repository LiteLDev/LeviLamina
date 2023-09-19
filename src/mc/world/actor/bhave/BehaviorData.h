#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorData {
public:
    // BehaviorData inner types declare
    // clang-format off
    struct DataProxy;
    // clang-format on

    // BehaviorData inner types define
    enum class DataType {};

    struct DataProxy {
    public:
        // prevent constructor by default
        DataProxy& operator=(DataProxy const&);
        DataProxy(DataProxy const&);
        DataProxy();

    public:
        // NOLINTBEGIN
        // symbol: ??1DataProxy@BehaviorData@@UEAA@XZ
        MCVAPI ~DataProxy();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BehaviorData& operator=(BehaviorData const&);
    BehaviorData(BehaviorData const&);
    BehaviorData();

public:
    // NOLINTBEGIN
    // symbol: ?copyData@BehaviorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAV1@@Z
    MCAPI void copyData(std::string const&, std::string const&, class BehaviorData&);

    // symbol:
    // ?hasDataOfType@BehaviorData@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DataType@1@@Z
    MCAPI bool hasDataOfType(std::string const&, ::BehaviorData::DataType) const;

    // NOLINTEND
};
