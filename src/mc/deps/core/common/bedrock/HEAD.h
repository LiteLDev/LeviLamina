#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

class HEAD {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_METHODTYPE_HEAD
public:
    HEAD& operator=(HEAD const&) = delete;
    HEAD(HEAD const&)            = delete;
    HEAD()                       = delete;
#endif

public:
    /**
     * @symbol
     * ?name\@HEAD\@MethodType\@Http\@Bedrock\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const name;
};

}; // namespace Bedrock::Http::MethodType
