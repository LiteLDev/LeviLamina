#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Json { class Value; }
// clang-format on

namespace Bedrock::Http {

class RequestBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_REQUESTBUILDER
public:
    RequestBuilder& operator=(RequestBuilder const&) = delete;
    RequestBuilder(RequestBuilder const&)            = delete;
#endif

public:
    /**
     * @symbol ?POST\@RequestBuilder\@Http\@Bedrock\@\@QEAAAEAV123\@XZ
     */
    MCAPI class Bedrock::Http::RequestBuilder& POST();
    /**
     * @symbol ??0RequestBuilder\@Http\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI RequestBuilder();
    /**
     * @symbol
     * ?addHeader\@RequestBuilder\@Http\@Bedrock\@\@QEAAAEAV123\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI class Bedrock::Http::RequestBuilder& addHeader(std::string const&, std::string const&, bool);
    /**
     * @symbol
     * ?body\@RequestBuilder\@Http\@Bedrock\@\@QEAAAEAV123\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Bedrock::Http::RequestBuilder& body(std::string const&);
    /**
     * @symbol ?body\@RequestBuilder\@Http\@Bedrock\@\@QEAAAEAV123\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI class Bedrock::Http::RequestBuilder& body(class Json::Value const&);
    /**
     * @symbol ?build\@RequestBuilder\@Http\@Bedrock\@\@QEAAAEAVRequest\@23\@XZ
     */
    MCAPI class Bedrock::Http::Request& build();
    /**
     * @symbol
     * ?contentType\@RequestBuilder\@Http\@Bedrock\@\@QEAAAEAV123\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Bedrock::Http::RequestBuilder& contentType(std::string const&);
    /**
     * @symbol
     * ?timeout\@RequestBuilder\@Http\@Bedrock\@\@QEAAAEAV123\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI class Bedrock::Http::RequestBuilder& timeout(class std::chrono::duration<__int64, struct std::ratio<1, 1>>);
    /**
     * @symbol
     * ?url\@RequestBuilder\@Http\@Bedrock\@\@QEAAAEAV123\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Bedrock::Http::RequestBuilder& url(std::string const&);
    /**
     * @symbol ??1RequestBuilder\@Http\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~RequestBuilder();
};

}; // namespace Bedrock::Http
