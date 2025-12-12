#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IResponseBody.h"
#include "mc/deps/core/http/ResponseBodyType.h"

namespace Bedrock::Http {

class FileResponseBody : public ::Bedrock::Http::Internal::IResponseBody {
public:
    // FileResponseBody inner types define
    enum class FileOpen : int {
        CreateOnly = 0,
        Overwrite  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8ef555;
    ::ll::UntypedStorage<8, 16> mUnk5c858f;
    ::ll::UntypedStorage<4, 4>  mUnk8111dc;
    ::ll::UntypedStorage<1, 1>  mUnk2b1a95;
    // NOLINTEND

public:
    // prevent constructor by default
    FileResponseBody& operator=(FileResponseBody const&);
    FileResponseBody(FileResponseBody const&);
    FileResponseBody();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileResponseBody() /*override*/ = default;

    virtual ::std::error_code start(::std::optional<uint64>) /*override*/;

    virtual ::std::error_code write(::gsl::span<uchar const>) /*override*/;

    virtual void complete() /*override*/;

    virtual void cancel() /*override*/;

    virtual ::std::string const& getLoggableDestination() const /*override*/;

    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;

    virtual ::Bedrock::Http::ResponseBodyType getType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
