#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
// clang-format on

namespace Bedrock::Http {

class RequestBuilder {
public:
    // prevent constructor by default
    RequestBuilder& operator=(RequestBuilder const&);
    RequestBuilder(RequestBuilder const&);

public:
    // NOLINTBEGIN
    // symbol: ?POST@RequestBuilder@Http@Bedrock@@QEAAAEAV123@XZ
    MCAPI class Bedrock::Http::RequestBuilder& POST();

    // symbol: ??0RequestBuilder@Http@Bedrock@@QEAA@XZ
    MCAPI RequestBuilder();

    // symbol:
    // ?addHeader@RequestBuilder@Http@Bedrock@@QEAAAEAV123@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
    MCAPI class Bedrock::Http::RequestBuilder& addHeader(std::string const& header, std::string const& value, bool);

    // symbol:
    // ?body@RequestBuilder@Http@Bedrock@@QEAAAEAV123@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Bedrock::Http::RequestBuilder& body(std::string const& plainText);

    // symbol: ?build@RequestBuilder@Http@Bedrock@@QEAAAEAVRequest@23@XZ
    MCAPI class Bedrock::Http::Request& build();

    // symbol: ?timeout@RequestBuilder@Http@Bedrock@@QEAAAEAV123@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@Z
    MCAPI class Bedrock::Http::RequestBuilder& timeout(std::chrono::seconds timeout);

    // symbol:
    // ?url@RequestBuilder@Http@Bedrock@@QEAAAEAV123@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Bedrock::Http::RequestBuilder& url(std::string const& url);

    // symbol: ??1RequestBuilder@Http@Bedrock@@QEAA@XZ
    MCAPI ~RequestBuilder();

    // NOLINTEND
};

}; // namespace Bedrock::Http
