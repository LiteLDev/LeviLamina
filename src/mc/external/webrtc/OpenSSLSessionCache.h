#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class OpenSSLSessionCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc53866;
    ::ll::UntypedStorage<8, 8>  mUnk5b6beb;
    ::ll::UntypedStorage<8, 16> mUnk667095;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLSessionCache& operator=(OpenSSLSessionCache const&);
    OpenSSLSessionCache(OpenSSLSessionCache const&);
    OpenSSLSessionCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddSession(::std::string_view hostname, ::ssl_session_st* new_session);

    MCNAPI ::ssl_ctx_st* GetSSLContext() const;

    MCNAPI ::ssl_session_st* LookupSession(::std::string_view hostname) const;
    // NOLINTEND
};

} // namespace webrtc
