#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { enum class ResponseBodyType; }
// clang-format on

namespace Bedrock::Http {

class BufferedResponseBody {

public:
    // prevent constructor by default
    BufferedResponseBody& operator=(BufferedResponseBody const&) = delete;
    BufferedResponseBody(BufferedResponseBody const&)            = delete;
    BufferedResponseBody()                                       = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_BUFFEREDRESPONSEBODY
    /**
     * @symbol ?cancel\@BufferedResponseBody\@Http\@Bedrock\@\@MEAAXXZ
     */
    MCVAPI void cancel();
    /**
     * @symbol ?complete\@BufferedResponseBody\@Http\@Bedrock\@\@MEAAXXZ
     */
    MCVAPI void complete();
    /**
     * @symbol ?getLoggableData\@BufferedResponseBody\@Http\@Bedrock\@\@MEBA?AV?$span\@$$CBE$0?0\@gsl\@\@XZ
     */
    MCVAPI class gsl::span<unsigned char const> getLoggableData() const;
    /**
     * @symbol
     * ?getLoggableDestination\@BufferedResponseBody\@Http\@Bedrock\@\@MEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string const& getLoggableDestination() const;
    /**
     * @symbol ?getType\@BufferedResponseBody\@Http\@Bedrock\@\@MEBA?AW4ResponseBodyType\@23\@XZ
     */
    MCVAPI enum class Bedrock::Http::ResponseBodyType getType() const;
    /**
     * @symbol ?start\@BufferedResponseBody\@Http\@Bedrock\@\@MEAA?AVerror_code\@std\@\@V?$optional\@_K\@5\@\@Z
     */
    MCVAPI std::error_code start(std::optional<uint64_t>);
    /**
     * @symbol ?write\@BufferedResponseBody\@Http\@Bedrock\@\@MEAA?AVerror_code\@std\@\@V?$span\@$$CBE$0?0\@gsl\@\@\@Z
     */
    MCVAPI std::error_code write(class gsl::span<unsigned char const>);
#endif
    /**
     * @symbol
     * ?create\@BufferedResponseBody\@Http\@Bedrock\@\@SA?AV?$shared_ptr\@VBufferedResponseBody\@Http\@Bedrock\@\@\@std\@\@XZ
     */
    MCAPI static std::shared_ptr<class Bedrock::Http::BufferedResponseBody> create();
    /**
     * @symbol ?get\@BufferedResponseBody\@Http\@Bedrock\@\@QEBA?AV?$span\@$$CBE$0?0\@gsl\@\@XZ
     */
    MCAPI class gsl::span<unsigned char const> get() const;
    // NOLINTEND
};

}; // namespace Bedrock::Http
