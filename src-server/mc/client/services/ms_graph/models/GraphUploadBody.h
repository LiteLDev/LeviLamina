#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/FileRequestBody.h"
#include "mc/deps/core/http/IRequestBody.h"

namespace MSGraph::Models {

struct GraphUploadBody : public ::Bedrock::Http::FileRequestBody {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>) /*override*/;

    // vIndex: 0
    virtual ~GraphUploadBody() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace MSGraph::Models
