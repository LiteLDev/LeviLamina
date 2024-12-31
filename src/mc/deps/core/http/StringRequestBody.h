#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/BinaryRequestBody.h"

namespace Bedrock::Http {

class StringRequestBody : public ::Bedrock::Http::BinaryRequestBody {
public:
    // prevent constructor by default
    StringRequestBody& operator=(StringRequestBody const&);
    StringRequestBody(StringRequestBody const&);
    StringRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;

    // vIndex: 0
    virtual ~StringRequestBody() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::gsl::span<uchar const> $getLoggableData() const;
    // NOLINTEND
};

} // namespace Bedrock::Http
