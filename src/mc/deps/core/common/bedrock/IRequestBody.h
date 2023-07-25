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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_INTERNAL_IREQUESTBODY_READRESULT
    public:
        ReadResult& operator=(ReadResult const&) = delete;
        ReadResult(ReadResult const&)            = delete;
        ReadResult()                             = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_INTERNAL_IREQUESTBODY
public:
    IRequestBody& operator=(IRequestBody const&) = delete;
    IRequestBody(IRequestBody const&)            = delete;
    IRequestBody()                               = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_INTERNAL_IREQUESTBODY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IRequestBody();
#endif
};

}; // namespace Bedrock::Http::Internal
