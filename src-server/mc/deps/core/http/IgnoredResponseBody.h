#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IResponseBody.h"
#include "mc/deps/core/http/ResponseBodyType.h"

namespace Bedrock::Http {

class IgnoredResponseBody : public ::Bedrock::Http::Internal::IResponseBody {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::error_code start(::std::optional<uint64>) /*override*/;

    // vIndex: 2
    virtual ::std::error_code write(::gsl::span<uchar const>) /*override*/;

    // vIndex: 3
    virtual void complete() /*override*/;

    // vIndex: 4
    virtual void cancel() /*override*/;

    // vIndex: 5
    virtual ::std::string const& getLoggableDestination() const /*override*/;

    // vIndex: 6
    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;

    // vIndex: 7
    virtual ::Bedrock::Http::ResponseBodyType getType() const /*override*/;

    // vIndex: 0
    virtual ~IgnoredResponseBody() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
