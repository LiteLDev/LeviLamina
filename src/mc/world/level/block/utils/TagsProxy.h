#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct TagsProxy {

public:
    // prevent constructor by default
    TagsProxy& operator=(TagsProxy const&) = delete;
    TagsProxy(TagsProxy const&)            = delete;
    TagsProxy()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?bindType\@TagsProxy\@BlockDescriptorSerializer\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol
     * ?fromString\@TagsProxy\@BlockDescriptorSerializer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void fromString(std::string const&);
    /**
     * @symbol
     * ?toString\@TagsProxy\@BlockDescriptorSerializer\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    // NOLINTEND
};

}; // namespace BlockDescriptorSerializer
