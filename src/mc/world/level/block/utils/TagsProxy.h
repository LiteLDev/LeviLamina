#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockDescriptorSerializer {

struct TagsProxy {
public:
    // prevent constructor by default
    TagsProxy& operator=(TagsProxy const&);
    TagsProxy(TagsProxy const&);
    TagsProxy();

public:
    // NOLINTBEGIN
    // symbol:
    // ?fromString@TagsProxy@BlockDescriptorSerializer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void fromString(std::string const&);

    // symbol: ?bindType@TagsProxy@BlockDescriptorSerializer@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace BlockDescriptorSerializer
