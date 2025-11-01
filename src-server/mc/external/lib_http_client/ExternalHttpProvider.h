#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/IHttpProvider.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct XAsyncBlock;
// clang-format on

namespace xbox::httpclient {

class ExternalHttpProvider : public ::xbox::httpclient::IHttpProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb0e614;
    ::ll::UntypedStorage<8, 8> mUnk259d90;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalHttpProvider& operator=(ExternalHttpProvider const&);
    ExternalHttpProvider(ExternalHttpProvider const&);
    ExternalHttpProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual HRESULT PerformAsync(::HC_CALL* callHandle, ::XAsyncBlock* async) /*override*/;

    // vIndex: 0
    virtual ~ExternalHttpProvider() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool HasCallback() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::xbox::httpclient::ExternalHttpProvider& Get();
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
