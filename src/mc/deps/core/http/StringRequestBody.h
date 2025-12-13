#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/BinaryRequestBody.h"

namespace Bedrock::Http {

class StringRequestBody : public ::Bedrock::Http::BinaryRequestBody {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;

    virtual ~StringRequestBody() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;


    // NOLINTEND
};

} // namespace Bedrock::Http
