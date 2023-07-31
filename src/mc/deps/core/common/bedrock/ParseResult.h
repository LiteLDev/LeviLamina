#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class ParseResult {

public:
    // prevent constructor by default
    ParseResult& operator=(ParseResult const&) = delete;
    ParseResult(ParseResult const&)            = delete;
    ParseResult()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?isError\@ParseResult\@JSONObject\@Bedrock\@\@QEBA_NXZ
     */
    MCAPI bool isError() const;
    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
