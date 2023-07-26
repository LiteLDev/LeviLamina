#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::Internal {

class IRequestBody {
public:
    // IRequestBody inner types declare
    // clang-format off
    struct ReadResult;
    // clang-format on

    // IRequestBody inner types define
    struct ReadResult {

    public:
        // prevent constructor by default
        ReadResult& operator=(ReadResult const&) = delete;
        ReadResult(ReadResult const&)            = delete;
        ReadResult()                             = delete;
    };

public:
    // prevent constructor by default
    IRequestBody& operator=(IRequestBody const&) = delete;
    IRequestBody(IRequestBody const&)            = delete;
    IRequestBody()                               = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_INTERNAL_IREQUESTBODY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IRequestBody(); // NOLINT
#endif
};

}; // namespace Bedrock::Http::Internal
