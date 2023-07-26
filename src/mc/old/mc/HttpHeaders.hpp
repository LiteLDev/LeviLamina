/**
 * @file  HttpHeaders.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HttpHeaders.
 *
 */
class HttpHeaders {

#define AFTER_EXTRA
// Add Member There
public:
enum class ParseState;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HTTPHEADERS
public:
    class HttpHeaders& operator=(class HttpHeaders const &) = delete;
    HttpHeaders(class HttpHeaders const &) = delete;
#endif

public:
    /**
     * @symbol  ??0HttpHeaders\@\@QEAA\@XZ
     */
    MCAPI HttpHeaders();
    /**
     * @symbol  ?clear\@HttpHeaders\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol  ?getHeader\@HttpHeaders\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
     */
    MCAPI bool getHeader(std::string const &, std::string &) const;
    /**
     * @symbol  ?getState\@HttpHeaders\@\@QEAA?AW4ParseState\@1\@XZ
     */
    MCAPI enum class HttpHeaders::ParseState getState();
    /**
     * @symbol  ?getStatusCode\@HttpHeaders\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getStatusCode() const;
    /**
     * @symbol  ?parse\@HttpHeaders\@\@QEAA?AW4ParseState\@1\@AEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI enum class HttpHeaders::ParseState parse(class RakNet::BitStream &);
    /**
     * @symbol  ??1HttpHeaders\@\@QEAA\@XZ
     */
    MCAPI ~HttpHeaders();

};