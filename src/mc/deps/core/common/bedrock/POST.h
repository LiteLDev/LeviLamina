#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

class POST {

public:
    // prevent constructor by default
    POST& operator=(POST const&) = delete;
    POST(POST const&)            = delete;
    POST()                       = delete;

public:
    /**
     * @symbol
     * ?name\@POST\@MethodType\@Http\@Bedrock\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const name; // NOLINT
};

}; // namespace Bedrock::Http::MethodType
