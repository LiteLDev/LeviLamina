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
        DataProxy& operator=(DataProxy const&) = delete;
        DataProxy(DataProxy const&)            = delete;
        DataProxy()                            = delete;

    public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEHAVIORDATA_DATAPROXY
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~DataProxy(); // NOLINT
#endif
    };

public:
    // prevent constructor by default
    BehaviorData& operator=(BehaviorData const&) = delete;
    BehaviorData(BehaviorData const&)            = delete;
    BehaviorData()                               = delete;

public:
    /**
     * @symbol
     * ?copyData\@BehaviorData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAV1\@\@Z
     */
    MCAPI void copyData(std::string const&, std::string const&, class BehaviorData&); // NOLINT
    /**
     * @symbol
     * ?hasDataOfType\@BehaviorData\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DataType\@1\@\@Z
     */
    MCAPI bool hasDataOfType(std::string const&, enum class BehaviorData::DataType) const; // NOLINT
};
