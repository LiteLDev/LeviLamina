#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/BinaryRequestBody.h"
#include "mc/deps/core/http/IRequestBody.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class BinaryRequestBody; }
// clang-format on

namespace Bedrock::Http {

class StringRequestBody : public ::Bedrock::Http::BinaryRequestBody {
public:
    // prevent constructor by default
    StringRequestBody& operator=(StringRequestBody const&);
    StringRequestBody(StringRequestBody const&);
    StringRequestBody();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StringRequestBody() = default;

    // NOLINTEND
};

}; // namespace Bedrock::Http
