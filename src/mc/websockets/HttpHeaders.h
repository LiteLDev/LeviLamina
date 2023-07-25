#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class HttpHeaders {
public:
    // HttpHeaders inner types declare
    // clang-format off

    // clang-format on

    // HttpHeaders inner types define
    enum class ParseState {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HTTPHEADERS
public:
    HttpHeaders& operator=(HttpHeaders const&) = delete;
    HttpHeaders(HttpHeaders const&)            = delete;
    HttpHeaders()                              = delete;
#endif

public:
    /**
     * @symbol ?clear\@HttpHeaders\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol
     * ?getHeader\@HttpHeaders\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
     */
    MCAPI bool getHeader(std::string const&, std::string&) const;
    /**
     * @symbol
     * ?getStatusCode\@HttpHeaders\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getStatusCode() const;
    /**
     * @symbol ?parse\@HttpHeaders\@\@QEAA?AW4ParseState\@1\@AEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI enum class HttpHeaders::ParseState parse(class RakNet::BitStream&);
    /**
     * @symbol ??1HttpHeaders\@\@QEAA\@XZ
     */
    MCAPI ~HttpHeaders();
};
