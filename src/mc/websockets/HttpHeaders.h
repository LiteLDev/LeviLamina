#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class HttpHeaders {
public:
    // HttpHeaders inner types define
    enum class ParseState {};

public:
    // prevent constructor by default
    HttpHeaders& operator=(HttpHeaders const&);
    HttpHeaders(HttpHeaders const&);
    HttpHeaders();

public:
    // NOLINTBEGIN
    // symbol: ?clear@HttpHeaders@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?getHeader@HttpHeaders@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@@Z
    MCAPI bool getHeader(std::string const& name, std::string& outValue) const;

    // symbol: ?getStatusCode@HttpHeaders@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getStatusCode() const;

    // symbol: ?parse@HttpHeaders@@QEAA?AW4ParseState@1@AEAVBitStream@RakNet@@@Z
    MCAPI ::HttpHeaders::ParseState parse(class RakNet::BitStream& data);

    // symbol: ??1HttpHeaders@@QEAA@XZ
    MCAPI ~HttpHeaders();

    // NOLINTEND
};
