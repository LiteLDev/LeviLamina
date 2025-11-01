#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/IHttpProvider.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct XAsyncBlock;
namespace xbox::httpclient { class WinHttpProvider; }
// clang-format on

namespace xbox::httpclient {

class WinHttp_HttpProvider : public ::xbox::httpclient::IHttpProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk64bbb8;
    // NOLINTEND

public:
    // prevent constructor by default
    WinHttp_HttpProvider& operator=(WinHttp_HttpProvider const&);
    WinHttp_HttpProvider(WinHttp_HttpProvider const&);
    WinHttp_HttpProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual HRESULT PerformAsync(::HC_CALL* callHandle, ::XAsyncBlock* async) /*override*/;

    // vIndex: 0
    virtual ~WinHttp_HttpProvider() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WinHttp_HttpProvider(::std::shared_ptr<::xbox::httpclient::WinHttpProvider> provider);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::xbox::httpclient::WinHttpProvider> provider);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI HRESULT $PerformAsync(::HC_CALL* callHandle, ::XAsyncBlock* async);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
