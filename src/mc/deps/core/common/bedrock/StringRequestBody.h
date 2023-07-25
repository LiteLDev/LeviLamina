#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class StringRequestBody {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_STRINGREQUESTBODY
public:
    StringRequestBody& operator=(StringRequestBody const&) = delete;
    StringRequestBody(StringRequestBody const&)            = delete;
    StringRequestBody()                                    = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_STRINGREQUESTBODY
    /**
     * @symbol ?getLoggableData\@StringRequestBody\@Http\@Bedrock\@\@MEBA?AV?$span\@$$CBE$0?0\@gsl\@\@XZ
     */
    MCVAPI class gsl::span<unsigned char const, -1> getLoggableData() const;
#endif
};

}; // namespace Bedrock::Http
