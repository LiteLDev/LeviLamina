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
    // vIndex: 0
    virtual ~BufferedResponseBody() /*override*/ = default;

    // vIndex: 1
    virtual ::std::error_code start(::std::optional<uint64> size) /*override*/;

    // vIndex: 2
    virtual ::std::error_code write(::gsl::span<uchar const> source) /*override*/;

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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::error_code $start(::std::optional<uint64> size);

    MCAPI ::std::error_code $write(::gsl::span<uchar const> source);

    MCAPI void $complete();

    MCAPI void $cancel();

    MCAPI ::std::string const& $getLoggableDestination() const;

    MCAPI ::gsl::span<uchar const> $getLoggableData() const;

    MCFOLD ::Bedrock::Http::ResponseBodyType $getType() const;
    // NOLINTEND
};

} // namespace Bedrock::Http
