#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IRequestBody.h"

namespace Bedrock::Http {

class MultipartRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkab5d7c;
    ::ll::UntypedStorage<8, 24> mUnk9e9e50;
    ::ll::UntypedStorage<8, 8> mUnk140a72;
    // NOLINTEND

public:
    // prevent constructor by default
    MultipartRequestBody& operator=(MultipartRequestBody const&);
    MultipartRequestBody(MultipartRequestBody const&);
    MultipartRequestBody();

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
    virtual ~MultipartRequestBody() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
