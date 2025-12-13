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
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpInterface() /*override*/ = default;

    virtual void send(::gsl::not_null<::HC_CALL*>, ::gsl::not_null<::XAsyncBlock*>, ::HC_PERFORM_ENV*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
