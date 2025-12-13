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
    virtual ::std::error_code start(::std::optional<uint64>) /*override*/;

    virtual ::std::error_code write(::gsl::span<uchar const>) /*override*/;

    virtual void complete() /*override*/;

    virtual void cancel() /*override*/;

    virtual ::std::string const& getLoggableDestination() const /*override*/;

    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;

    virtual ::Bedrock::Http::ResponseBodyType getType() const /*override*/;

    virtual ~IgnoredResponseBody() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::error_code $start(::std::optional<uint64>);

    MCNAPI ::std::string const& $getLoggableDestination() const;

    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;

    MCNAPI ::Bedrock::Http::ResponseBodyType $getType() const;
#endif


    // NOLINTEND
};

} // namespace Bedrock::Http
