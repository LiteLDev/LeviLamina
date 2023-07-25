#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

class PUT {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_METHODTYPE_PUT
public:
    PUT& operator=(PUT const&) = delete;
    PUT(PUT const&)            = delete;
    PUT()                      = delete;
#endif

public:
    /**
     * @symbol
     * ?name\@PUT\@MethodType\@Http\@Bedrock\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const name;
};

}; // namespace Bedrock::Http::MethodType
