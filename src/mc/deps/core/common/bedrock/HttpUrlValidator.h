#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/DispatcherProcess.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class HttpUrlValidator : public ::Bedrock::Http::DispatcherProcess {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_HTTPURLVALIDATOR
public:
    HttpUrlValidator& operator=(HttpUrlValidator const&) = delete;
    HttpUrlValidator(HttpUrlValidator const&)            = delete;
    HttpUrlValidator()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?send\@HttpUrlValidator\@Http\@Bedrock\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@VResponse\@Http\@Bedrock\@\@\@Threading\@Bedrock\@\@\@std\@\@$$QEAVRequest\@23\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    send(class Bedrock::Http::Request&&);
};

}; // namespace Bedrock::Http
