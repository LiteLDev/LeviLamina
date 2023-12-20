#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ssl_ctx_st;
struct ssl_session_st;
// clang-format on

namespace rtc {

class OpenSSLSessionCache {
public:
    // prevent constructor by default
    OpenSSLSessionCache& operator=(OpenSSLSessionCache const&);
    OpenSSLSessionCache(OpenSSLSessionCache const&);
    OpenSSLSessionCache();

public:
    // NOLINTBEGIN
    // symbol:
    // ?AddSession@OpenSSLSessionCache@rtc@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAUssl_session_st@@@Z
    MCAPI void AddSession(std::string_view, struct ssl_session_st*);

    // symbol: ?GetSSLContext@OpenSSLSessionCache@rtc@@QEBAPEAUssl_ctx_st@@XZ
    MCAPI struct ssl_ctx_st* GetSSLContext() const;

    // symbol:
    // ?LookupSession@OpenSSLSessionCache@rtc@@QEBAPEAUssl_session_st@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI struct ssl_session_st* LookupSession(std::string_view) const;

    // NOLINTEND
};

}; // namespace rtc
