#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_session_keys_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3fbcca;
    ::ll::UntypedStorage<8, 8>  mUnkcea385;
    ::ll::UntypedStorage<8, 8>  mUnk6e94de;
    ::ll::UntypedStorage<8, 8>  mUnk8a5f7c;
    ::ll::UntypedStorage<8, 8>  mUnk36abb5;
    ::ll::UntypedStorage<1, 12> mUnkcef3b3;
    ::ll::UntypedStorage<1, 12> mUnkc9892a;
    ::ll::UntypedStorage<8, 8>  mUnk431f52;
    ::ll::UntypedStorage<4, 4>  mUnk82dea9;
    ::ll::UntypedStorage<8, 8>  mUnk3b2358;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_session_keys_t& operator=(srtp_session_keys_t const&);
    srtp_session_keys_t(srtp_session_keys_t const&);
    srtp_session_keys_t();
};
