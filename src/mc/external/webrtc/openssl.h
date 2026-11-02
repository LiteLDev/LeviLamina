#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::openssl {
// functions
// NOLINTBEGIN
MCNAPI void EnsureSSLErrorStateCleared();

MCNAPI bool LoadBuiltinSSLRootCertificates(::ssl_ctx_st* ctx);

MCNAPI void LogSSLErrors(::std::string_view prefix);

MCNAPI int SSLGetError(::ssl_st const* ssl, int ret);

MCNAPI bool VerifyPeerCertMatchesHost(::ssl_st* ssl, ::std::string_view host);
// NOLINTEND

} // namespace webrtc::openssl
