#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class ParseResult {
public:
    // prevent constructor by default
    ParseResult& operator=(ParseResult const&);
    ParseResult(ParseResult const&);
    ParseResult();

public:
    // NOLINTBEGIN
    MCAPI bool isError() const;

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
