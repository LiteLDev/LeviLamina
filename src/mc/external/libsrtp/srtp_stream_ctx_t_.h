#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_stream_ctx_t_ {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk881198;
    ::ll::UntypedStorage<8, 8>  mUnk36bac4;
    ::ll::UntypedStorage<4, 4>  mUnkc9bf4d;
    ::ll::UntypedStorage<8, 24> mUnkf01e9f;
    ::ll::UntypedStorage<4, 4>  mUnkd985ad;
    ::ll::UntypedStorage<8, 24> mUnk1585f2;
    ::ll::UntypedStorage<4, 4>  mUnkfa524b;
    ::ll::UntypedStorage<4, 4>  mUnkb6e922;
    ::ll::UntypedStorage<4, 4>  mUnk41f2ba;
    ::ll::UntypedStorage<8, 8>  mUnkbec2f0;
    ::ll::UntypedStorage<4, 4>  mUnk79a6e2;
    ::ll::UntypedStorage<4, 4>  mUnk50f0ff;
    ::ll::UntypedStorage<8, 8>  mUnkef6857;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_stream_ctx_t_& operator=(srtp_stream_ctx_t_ const&);
    srtp_stream_ctx_t_(srtp_stream_ctx_t_ const&);
    srtp_stream_ctx_t_();
};
