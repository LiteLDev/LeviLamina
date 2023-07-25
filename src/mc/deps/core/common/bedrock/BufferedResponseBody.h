#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { enum class ResponseBodyType; }
// clang-format on

namespace Bedrock::Http {

class BufferedResponseBody {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_BUFFEREDRESPONSEBODY
public:
    BufferedResponseBody& operator=(BufferedResponseBody const&) = delete;
    BufferedResponseBody(BufferedResponseBody const&)            = delete;
    BufferedResponseBody()                                       = delete;
#endif

public:
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
    MCVAPI class gsl::span<unsigned char const, -1> getLoggableData() const;
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
    MCVAPI class std::error_code start(class std::optional<unsigned __int64>);
    /**
     * @symbol ?write\@BufferedResponseBody\@Http\@Bedrock\@\@MEAA?AVerror_code\@std\@\@V?$span\@$$CBE$0?0\@gsl\@\@\@Z
     */
    MCVAPI class std::error_code write(class gsl::span<unsigned char const, -1>);
#endif
    /**
     * @symbol ?get\@BufferedResponseBody\@Http\@Bedrock\@\@QEBA?AV?$span\@$$CBE$0?0\@gsl\@\@XZ
     */
    MCAPI class gsl::span<unsigned char const, -1> get() const;
    /**
     * @symbol
     * ?create\@BufferedResponseBody\@Http\@Bedrock\@\@SA?AV?$shared_ptr\@VBufferedResponseBody\@Http\@Bedrock\@\@\@std\@\@XZ
     */
    MCAPI static class std::shared_ptr<class Bedrock::Http::BufferedResponseBody> create();
};

}; // namespace Bedrock::Http
