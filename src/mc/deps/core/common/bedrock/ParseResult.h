#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class ParseResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_JSONOBJECT_PARSERESULT
public:
    ParseResult& operator=(ParseResult const&) = delete;
    ParseResult(ParseResult const&)            = delete;
    ParseResult()                              = delete;
#endif

public:
    /**
     * @symbol ?isError\@ParseResult\@JSONObject\@Bedrock\@\@QEBA_NXZ
     */
    MCAPI bool isError() const;
};

}; // namespace Bedrock::JSONObject
