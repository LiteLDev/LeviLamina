#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/http_stl_allocator.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct XAsyncBlock;
// clang-format on

namespace xbox::httpclient {

class IHttpProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IHttpProvider() = default;

    // vIndex: 1
    virtual HRESULT PerformAsync(::HC_CALL*, ::XAsyncBlock*) = 0;

    // vIndex: 2
    virtual HRESULT SetGlobalProxy(::http_string const&);

    // vIndex: 3
    virtual HRESULT CleanupAsync(::XAsyncBlock* async);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI HRESULT $SetGlobalProxy(::http_string const&);

    MCNAPI HRESULT $CleanupAsync(::XAsyncBlock* async);
    // NOLINTEND

};

}
