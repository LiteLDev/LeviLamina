#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/FileRequestBody.h"
#include "mc/deps/core/http/IRequestBody.h"

namespace MSGraph::Models {

struct GraphUploadBody : public ::Bedrock::Http::FileRequestBody {
public:
    // prevent constructor by default
    GraphUploadBody& operator=(GraphUploadBody const&);
    GraphUploadBody(GraphUploadBody const&);
    GraphUploadBody();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>) /*override*/;

    // vIndex: 0
    virtual ~GraphUploadBody() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar>);
    // NOLINTEND
};

} // namespace MSGraph::Models
