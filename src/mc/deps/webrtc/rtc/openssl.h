#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ssl_ctx_st;
struct ssl_st;
// clang-format on

namespace rtc::openssl {
// NOLINTBEGIN
// symbol: ?LoadBuiltinSSLRootCertificates@openssl@rtc@@YA_NPEAUssl_ctx_st@@@Z
MCAPI bool LoadBuiltinSSLRootCertificates(struct ssl_ctx_st*);

// symbol: ?LogSSLErrors@openssl@rtc@@YAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI void LogSSLErrors(std::string_view);

// symbol: ?VerifyPeerCertMatchesHost@openssl@rtc@@YA_NPEAUssl_st@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI bool VerifyPeerCertMatchesHost(struct ssl_st*, std::string_view);
// NOLINTEND

}; // namespace rtc::openssl
