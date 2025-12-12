#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/ResponseBodyType.h"

namespace Bedrock::Http::Internal {

class IResponseBody {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResponseBody() = default;

    virtual ::std::error_code start(::std::optional<uint64>) = 0;

    virtual ::std::error_code write(::gsl::span<uchar const>) = 0;

    virtual void complete() = 0;

    virtual void cancel() = 0;

    virtual ::std::string const& getLoggableDestination() const = 0;

    virtual ::gsl::span<uchar const> getLoggableData() const = 0;

    virtual ::Bedrock::Http::ResponseBodyType getType() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http::Internal
