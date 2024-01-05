#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/DispatcherProcess.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class DispatcherProcess; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class HttpUrlValidator : public ::Bedrock::Http::DispatcherProcess {
public:
    // prevent constructor by default
    HttpUrlValidator& operator=(HttpUrlValidator const&);
    HttpUrlValidator(HttpUrlValidator const&);
    HttpUrlValidator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HttpUrlValidator@Http@Bedrock@@UEAA@XZ
    virtual ~HttpUrlValidator() = default;

    // vIndex: 1, symbol:
    // ?send@HttpUrlValidator@Http@Bedrock@@UEAA?AV?$shared_ptr@V?$IAsyncResult@VResponse@Http@Bedrock@@@Threading@Bedrock@@@std@@$$QEAVRequest@23@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    send(class Bedrock::Http::Request&& request);

    // NOLINTEND
};

}; // namespace Bedrock::Http
