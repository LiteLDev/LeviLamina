/**
 * @file  MC/HttpHeaders.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   701571370
     * @symbol ??0HttpHeaders@@QEAA@XZ
     */
    MCAPI HttpHeaders();
    /**
     * @hash   41942879
     * @symbol ?clear@HttpHeaders@@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   -1905635930
     * @symbol ?getHeader@HttpHeaders@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@@Z
     */
    MCAPI bool getHeader(std::string const &, std::string &) const;
    /**
     * @hash   -714240253
     * @symbol ?getState@HttpHeaders@@QEAA?AW4ParseState@1@XZ
     */
    MCAPI enum HttpHeaders::ParseState getState();
    /**
     * @hash   3511008
     * @symbol ?getStatusCode@HttpHeaders@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getStatusCode() const;
    /**
     * @hash   -338251478
     * @symbol ?parse@HttpHeaders@@QEAA?AW4ParseState@1@AEAVBitStream@RakNet@@@Z
     */
    MCAPI enum HttpHeaders::ParseState parse(class RakNet::BitStream &);
    /**
     * @hash   503882202
     * @symbol ??1HttpHeaders@@QEAA@XZ
     */
    MCAPI ~HttpHeaders();

};