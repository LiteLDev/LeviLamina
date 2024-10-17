#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Status; }
// clang-format on

namespace Bedrock::Http {

class Response {
public:
    // prevent constructor by default
    Response& operator=(Response const&);
    Response(Response const&);

public:
    // NOLINTBEGIN
    MCAPI Response();

    MCAPI Response(class Bedrock::Http::Response&&);

    MCAPI explicit Response(class Bedrock::Http::Status status);

    MCAPI gsl::span<uchar const> getBodyAsBytes() const;

    MCAPI std::string getBodyAsUtf8String() const;

    MCAPI class Bedrock::Http::HeaderCollection const& getHeaders() const;

    MCAPI class Bedrock::Http::Status getStatus() const;

    MCAPI ~Response();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class Bedrock::Http::Response&&);

    MCAPI void* ctor$(class Bedrock::Http::Status status);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock::Http
