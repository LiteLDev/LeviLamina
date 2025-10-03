#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_crypto_policy_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9c049c;
    ::ll::UntypedStorage<4, 4> mUnk4b7f19;
    ::ll::UntypedStorage<4, 4> mUnk791858;
    ::ll::UntypedStorage<4, 4> mUnk6bebea;
    ::ll::UntypedStorage<4, 4> mUnk854325;
    ::ll::UntypedStorage<4, 4> mUnk327f5a;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_crypto_policy_t& operator=(srtp_crypto_policy_t const&);
    srtp_crypto_policy_t(srtp_crypto_policy_t const&);
    srtp_crypto_policy_t();
};
