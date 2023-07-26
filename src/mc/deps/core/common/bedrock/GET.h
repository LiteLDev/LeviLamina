#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

class GET {

public:
    // prevent constructor by default
    GET& operator=(GET const&) = delete;
    GET(GET const&)            = delete;
    GET()                      = delete;

public:
    /**
     * @symbol
     * ?name\@GET\@MethodType\@Http\@Bedrock\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const name; // NOLINT
};

}; // namespace Bedrock::Http::MethodType
