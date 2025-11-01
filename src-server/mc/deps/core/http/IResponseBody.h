#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/ResponseBodyType.h"

namespace Bedrock::Http::Internal {

class IResponseBody {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IResponseBody() = default;

    // vIndex: 1
    virtual ::std::error_code start(::std::optional<uint64>) = 0;

    // vIndex: 2
    virtual ::std::error_code write(::gsl::span<uchar const>) = 0;

    // vIndex: 3
    virtual void complete() = 0;

    // vIndex: 4
    virtual void cancel() = 0;

    // vIndex: 5
    virtual ::std::string const& getLoggableDestination() const = 0;

    // vIndex: 6
    virtual ::gsl::span<uchar const> getLoggableData() const = 0;

    // vIndex: 7
    virtual ::Bedrock::Http::ResponseBodyType getType() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
