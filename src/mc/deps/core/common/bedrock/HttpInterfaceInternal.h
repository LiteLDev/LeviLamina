#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/HttpInterface.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HttpInterface; }
struct HC_CALL;
struct HC_PERFORM_ENV;
struct XAsyncBlock;
// clang-format on

namespace Bedrock::Http {

class HttpInterfaceInternal : public ::Bedrock::Http::HttpInterface {
public:
    // prevent constructor by default
    HttpInterfaceInternal& operator=(HttpInterfaceInternal const&);
    HttpInterfaceInternal(HttpInterfaceInternal const&);
    HttpInterfaceInternal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1HttpInterfaceInternal@Http@@@UEAA@XZ
    virtual ~HttpInterfaceInternal();

    // vIndex: 1, symbol:
    // ?send@HttpInterfaceInternal@Http@Bedrock@@UEAAXV?$not_null@PEAUHC_CALL@@@gsl@@V?$not_null@PEAUXAsyncBlock@@@5@PEAUHC_PERFORM_ENV@@@Z
    virtual void send(gsl::not_null<struct HC_CALL*>, gsl::not_null<struct XAsyncBlock*>, struct HC_PERFORM_ENV*);

    // NOLINTEND
};

}; // namespace Bedrock::Http
