#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class Method {

public:
    // prevent constructor by default
    Method& operator=(Method const&) = delete;
    Method(Method const&)            = delete;
    Method()                         = delete;

public:
    /**
     * @symbol
     * ?name\@Method\@Http\@Bedrock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& name() const; // NOLINT
    /**
     * @symbol ?DEL\@Method\@Http\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Http::Method const DEL; // NOLINT
    /**
     * @symbol ?GET\@Method\@Http\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Http::Method const GET; // NOLINT
    /**
     * @symbol ?HEAD\@Method\@Http\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Http::Method const HEAD; // NOLINT
    /**
     * @symbol ?POST\@Method\@Http\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Http::Method const POST; // NOLINT
    /**
     * @symbol ?PUT\@Method\@Http\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Http::Method const PUT; // NOLINT
};

}; // namespace Bedrock::Http
