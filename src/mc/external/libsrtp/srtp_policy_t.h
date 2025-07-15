#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_policy_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnke709de;
    ::ll::UntypedStorage<4, 24> mUnke3294d;
    ::ll::UntypedStorage<4, 24> mUnk7c5715;
    ::ll::UntypedStorage<8, 8>  mUnk6ea1cc;
    ::ll::UntypedStorage<8, 8>  mUnkd3bf6d;
    ::ll::UntypedStorage<4, 4>  mUnk16fe4a;
    ::ll::UntypedStorage<8, 8>  mUnk9829d8;
    ::ll::UntypedStorage<4, 4>  mUnk472087;
    ::ll::UntypedStorage<4, 4>  mUnkaaa885;
    ::ll::UntypedStorage<8, 8>  mUnkfc7ed5;
    ::ll::UntypedStorage<4, 4>  mUnkd5b73e;
    ::ll::UntypedStorage<8, 8>  mUnk87dfef;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_policy_t& operator=(srtp_policy_t const&);
    srtp_policy_t(srtp_policy_t const&);
    srtp_policy_t();
};
