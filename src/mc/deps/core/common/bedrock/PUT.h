#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

struct PUT {
public:
    // prevent constructor by default
    PUT& operator=(PUT const&);
    PUT(PUT const&);
    PUT();

public:
    // NOLINTBEGIN
    // symbol: ?name@PUT@MethodType@Http@Bedrock@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const name;

    // NOLINTEND
};

}; // namespace Bedrock::Http::MethodType
