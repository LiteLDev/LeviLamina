#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/HttpInterface.h"

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
    // vIndex: 0
    virtual ~HttpInterfaceInternal() = default;

    // vIndex: 1
    virtual void send(
        gsl::not_null<struct HC_CALL*>     call,
        gsl::not_null<struct XAsyncBlock*> asyncBlock,
        struct HC_PERFORM_ENV*             env
    );

    // NOLINTEND
};

}; // namespace Bedrock::Http
