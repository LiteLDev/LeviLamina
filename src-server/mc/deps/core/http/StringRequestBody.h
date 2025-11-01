#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/BinaryRequestBody.h"

namespace Bedrock::Http {

class StringRequestBody : public ::Bedrock::Http::BinaryRequestBody {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;

    // vIndex: 0
    virtual ~StringRequestBody() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;
    // NOLINTEND

};

}
