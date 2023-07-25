#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

class DEL {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_METHODTYPE_DEL
public:
    DEL& operator=(DEL const&) = delete;
    DEL(DEL const&)            = delete;
    DEL()                      = delete;
#endif

public:
    /**
     * @symbol
     * ?name\@DEL\@MethodType\@Http\@Bedrock\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const name;
};

}; // namespace Bedrock::Http::MethodType
