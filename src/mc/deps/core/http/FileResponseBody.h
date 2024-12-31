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
    // vIndex: 0
    virtual ~FileResponseBody() /*override*/ = default;

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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
