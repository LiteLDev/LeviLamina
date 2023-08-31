#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/BinaryRequestBody.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class BinaryRequestBody; }
// clang-format on

namespace Bedrock::Http {

class StringRequestBody : public ::Bedrock::Http::BinaryRequestBody {

public:
    // prevent constructor by default
    StringRequestBody& operator=(StringRequestBody const&) = delete;
    StringRequestBody(StringRequestBody const&)            = delete;
    StringRequestBody()                                    = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_STRINGREQUESTBODY
    /**
     * @symbol ?getLoggableData\@StringRequestBody\@Http\@Bedrock\@\@MEBA?AV?$span\@$$CBE$0?0\@gsl\@\@XZ
     */
    MCVAPI gsl::span<uint8_t const> getLoggableData() const;
#endif
    // NOLINTEND
};

}; // namespace Bedrock::Http
