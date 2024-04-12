#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Status; }
namespace Bedrock::Http::Internal { class IResponseBody; }
// clang-format on

namespace Bedrock::Http {

class Response {
public:
    // prevent constructor by default
    Response& operator=(Response const&);

public:
    // NOLINTBEGIN
    // symbol: ??0Response@Http@Bedrock@@QEAA@XZ
    MCAPI Response();

    // symbol: ??0Response@Http@Bedrock@@QEAA@$$QEAV012@@Z
    MCAPI Response(class Bedrock::Http::Response&&);

    // symbol: ??0Response@Http@Bedrock@@QEAA@AEBV012@@Z
    MCAPI Response(class Bedrock::Http::Response const&);

    // symbol: ??0Response@Http@Bedrock@@QEAA@VStatus@12@@Z
    MCAPI explicit Response(class Bedrock::Http::Status status);

    // symbol: ?getBodyAsBytes@Response@Http@Bedrock@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ
    MCAPI gsl::span<uchar const> getBodyAsBytes() const;

    // symbol:
    // ?getBodyAsUtf8String@Response@Http@Bedrock@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getBodyAsUtf8String() const;

    // symbol: ?getHeaders@Response@Http@Bedrock@@QEBAAEBVHeaderCollection@23@XZ
    MCAPI class Bedrock::Http::HeaderCollection const& getHeaders() const;

    // symbol: ?getStatus@Response@Http@Bedrock@@QEBA?AVStatus@23@XZ
    MCAPI class Bedrock::Http::Status getStatus() const;

    // symbol:
    // ?setBody@Response@Http@Bedrock@@QEAAXV?$not_null@V?$shared_ptr@VIResponseBody@Internal@Http@Bedrock@@@std@@@gsl@@@Z
    MCAPI void setBody(gsl::not_null<std::shared_ptr<class Bedrock::Http::Internal::IResponseBody>> body);

    // symbol: ?setHeaders@Response@Http@Bedrock@@QEAAXAEBVHeaderCollection@23@@Z
    MCAPI void setHeaders(class Bedrock::Http::HeaderCollection const& headers);

    // symbol: ?setStatus@Response@Http@Bedrock@@QEAAXVStatus@23@@Z
    MCAPI void setStatus(class Bedrock::Http::Status status);

    // symbol: ??1Response@Http@Bedrock@@QEAA@XZ
    MCAPI ~Response();

    // NOLINTEND
};

}; // namespace Bedrock::Http
