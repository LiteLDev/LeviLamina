#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class Method {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_METHOD
public:
    Method& operator=(Method const&) = delete;
    Method(Method const&)            = delete;
    Method()                         = delete;
#endif

public:
    /**
     * @symbol
     * ?name\@Method\@Http\@Bedrock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& name() const;
    /**
     * @symbol ?DEL\@Method\@Http\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Http::Method const DEL;
    /**
     * @symbol ?GET\@Method\@Http\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Http::Method const GET;
    /**
     * @symbol ?HEAD\@Method\@Http\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Http::Method const HEAD;
    /**
     * @symbol ?POST\@Method\@Http\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Http::Method const POST;
    /**
     * @symbol ?PUT\@Method\@Http\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Http::Method const PUT;
};

}; // namespace Bedrock::Http
