#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct HC_PERFORM_ENV;
struct XAsyncBlock;
// clang-format on

namespace Bedrock::Http {

class HttpInterface : public ::Bedrock::ImplBase<::Bedrock::Http::HttpInterface> {
public:
    // prevent constructor by default
    HttpInterface& operator=(HttpInterface const&);
    HttpInterface(HttpInterface const&);
    HttpInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HttpInterface() /*override*/;

    // vIndex: 1
    virtual void send(::gsl::not_null<::HC_CALL*>, ::gsl::not_null<::XAsyncBlock*>, ::HC_PERFORM_ENV*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
