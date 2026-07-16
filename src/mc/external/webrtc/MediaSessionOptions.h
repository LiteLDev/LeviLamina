#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct MediaSessionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkfe71ca;
    ::ll::UntypedStorage<1, 1>  mUnkaf41a1;
    ::ll::UntypedStorage<1, 1>  mUnkd4854c;
    ::ll::UntypedStorage<1, 1>  mUnk6c3ad0;
    ::ll::UntypedStorage<1, 1>  mUnk4bbb9b;
    ::ll::UntypedStorage<8, 32> mUnk6dfe37;
    ::ll::UntypedStorage<8, 32> mUnk53516a;
    ::ll::UntypedStorage<8, 24> mUnkbf7abd;
    ::ll::UntypedStorage<8, 24> mUnk7856df;
    ::ll::UntypedStorage<1, 1>  mUnkd85363;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaSessionOptions& operator=(MediaSessionOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MediaSessionOptions();

    MCNAPI MediaSessionOptions(::webrtc::MediaSessionOptions const&);

    MCNAPI ~MediaSessionOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::MediaSessionOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
