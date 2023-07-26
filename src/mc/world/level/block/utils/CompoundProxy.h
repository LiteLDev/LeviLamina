#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct CompoundProxy {

public:
    // prevent constructor by default
    CompoundProxy& operator=(CompoundProxy const&) = delete;
    CompoundProxy(CompoundProxy const&)            = delete;
    CompoundProxy()                                = delete;

public:
    /**
     * @symbol ?fromInt\@CompoundProxy\@BlockDescriptorSerializer\@\@QEAAXH\@Z
     */
    MCAPI void fromInt(int); // NOLINT
    /**
     * @symbol
     * ?fromString\@CompoundProxy\@BlockDescriptorSerializer\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void fromString(std::string); // NOLINT
    /**
     * @symbol ??1CompoundProxy\@BlockDescriptorSerializer\@\@QEAA\@XZ
     */
    MCAPI ~CompoundProxy(); // NOLINT
    /**
     * @symbol ?bindType\@CompoundProxy\@BlockDescriptorSerializer\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
};

}; // namespace BlockDescriptorSerializer
