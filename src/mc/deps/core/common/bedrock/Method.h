#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class Method {
public:
    // prevent constructor by default
    Method& operator=(Method const&);
    Method(Method const&);
    Method();

public:
    // NOLINTBEGIN
    // symbol: ?DEL@Method@Http@Bedrock@@2V123@B
    MCAPI static class Bedrock::Http::Method const DEL;

    // symbol: ?GET@Method@Http@Bedrock@@2V123@B
    MCAPI static class Bedrock::Http::Method const GET;

    // symbol: ?HEAD@Method@Http@Bedrock@@2V123@B
    MCAPI static class Bedrock::Http::Method const HEAD;

    // symbol: ?POST@Method@Http@Bedrock@@2V123@B
    MCAPI static class Bedrock::Http::Method const POST;

    // symbol: ?PUT@Method@Http@Bedrock@@2V123@B
    MCAPI static class Bedrock::Http::Method const PUT;

    // NOLINTEND
};

}; // namespace Bedrock::Http
