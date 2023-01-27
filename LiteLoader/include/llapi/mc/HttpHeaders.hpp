/**
 * @file  HttpHeaders.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../RakNet.hpp"

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
     * @hash   1465916922
     * @symbol  ??0HttpHeaders\@\@QEAA\@XZ
     */
    MCAPI HttpHeaders();
    /**
     * @hash   806288431
     * @symbol  ?clear\@HttpHeaders\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   -1141290378
     * @symbol  ?getHeader\@HttpHeaders\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
     */
    MCAPI bool getHeader(std::string const &, std::string &) const;
    /**
     * @hash   -1566362797
     * @symbol  ?getState\@HttpHeaders\@\@QEAA?AW4ParseState\@1\@XZ
     */
    MCAPI enum class HttpHeaders::ParseState getState();
    /**
     * @hash   767856560
     * @symbol  ?getStatusCode\@HttpHeaders\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getStatusCode() const;
    /**
     * @hash   426001818
     * @symbol  ?parse\@HttpHeaders\@\@QEAA?AW4ParseState\@1\@AEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI enum class HttpHeaders::ParseState parse(class RakNet::BitStream &);
    /**
     * @hash   1268227754
     * @symbol  ??1HttpHeaders\@\@QEAA\@XZ
     */
    MCAPI ~HttpHeaders();

};