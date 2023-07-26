#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class StringRequestBody {

public:
    // prevent constructor by default
    StringRequestBody& operator=(StringRequestBody const&) = delete;
    StringRequestBody(StringRequestBody const&)            = delete;
    StringRequestBody()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_STRINGREQUESTBODY
    /**
     * @symbol ?getLoggableData\@StringRequestBody\@Http\@Bedrock\@\@MEBA?AV?$span\@$$CBE$0?0\@gsl\@\@XZ
     */
    MCVAPI class gsl::span<unsigned char const, -1> getLoggableData() const; // NOLINT
#endif
};

}; // namespace Bedrock::Http
