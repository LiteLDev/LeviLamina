#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

class PUT {

public:
    // prevent constructor by default
    PUT& operator=(PUT const&) = delete;
    PUT(PUT const&)            = delete;
    PUT()                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?name\@PUT\@MethodType\@Http\@Bedrock\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const name;
    // NOLINTEND
};

}; // namespace Bedrock::Http::MethodType
