#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IRequestBody.h"

namespace Bedrock::Http {

class FileRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf6c20f;
    ::ll::UntypedStorage<8, 16> mUnkbdbe9d;
    ::ll::UntypedStorage<1, 1>  mUnk84e5f4;
    // NOLINTEND

public:
    // prevent constructor by default
    FileRequestBody& operator=(FileRequestBody const&);
    FileRequestBody(FileRequestBody const&);
    FileRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>) /*override*/;

    // vIndex: 2
    virtual uint64 getSize() /*override*/;

    // vIndex: 3
    virtual void cancel() /*override*/;

    // vIndex: 4
    virtual ::std::string const& getLoggableSource() const /*override*/;

    // vIndex: 5
    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;

    // vIndex: 0
    virtual ~FileRequestBody() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
