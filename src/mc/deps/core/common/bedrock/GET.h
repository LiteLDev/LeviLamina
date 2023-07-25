#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

class GET {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_METHODTYPE_GET
public:
    GET& operator=(GET const&) = delete;
    GET(GET const&)            = delete;
    GET()                      = delete;
#endif

public:
    /**
     * @symbol
     * ?name\@GET\@MethodType\@Http\@Bedrock\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const name;
};

}; // namespace Bedrock::Http::MethodType
