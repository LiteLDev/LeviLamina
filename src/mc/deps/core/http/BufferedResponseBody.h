#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IResponseBody.h"
#include "mc/deps/core/http/ResponseBodyType.h"

namespace Bedrock::Http {

class BufferedResponseBody : public ::Bedrock::Http::Internal::IResponseBody {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5fc0ed;
    ::ll::UntypedStorage<1, 1>  mUnkea5b17;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferedResponseBody& operator=(BufferedResponseBody const&);
    BufferedResponseBody(BufferedResponseBody const&);
    BufferedResponseBody();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BufferedResponseBody() /*override*/ = default;

    virtual ::std::error_code start(::std::optional<uint64> size) /*override*/;

    virtual ::std::error_code write(::gsl::span<uchar const> source) /*override*/;

    virtual void complete() /*override*/;

    virtual void cancel() /*override*/;

    virtual ::std::string const& getLoggableDestination() const /*override*/;

    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;

    virtual ::Bedrock::Http::ResponseBodyType getType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::error_code $start(::std::optional<uint64> size);

    MCNAPI ::std::error_code $write(::gsl::span<uchar const> source);

    MCNAPI void $complete();

    MCNAPI void $cancel();

    MCNAPI ::std::string const& $getLoggableDestination() const;

    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;

    MCNAPI ::Bedrock::Http::ResponseBodyType $getType() const;


    // NOLINTEND
};

} // namespace Bedrock::Http
