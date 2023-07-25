#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

class POST {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_METHODTYPE_POST
public:
    POST& operator=(POST const&) = delete;
    POST(POST const&)            = delete;
    POST()                       = delete;
#endif

public:
    /**
     * @symbol
     * ?name\@POST\@MethodType\@Http\@Bedrock\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const name;
};

}; // namespace Bedrock::Http::MethodType
