#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SenderOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1997e8;
    ::ll::UntypedStorage<8, 24> mUnk50a061;
    ::ll::UntypedStorage<8, 24> mUnk8cf811;
    ::ll::UntypedStorage<8, 24> mUnk79fc5b;
    ::ll::UntypedStorage<4, 4>  mUnk497af8;
    // NOLINTEND

public:
    // prevent constructor by default
    SenderOptions& operator=(SenderOptions const&);
    SenderOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SenderOptions(::webrtc::SenderOptions&&);

    MCNAPI SenderOptions(::webrtc::SenderOptions const&);

    MCNAPI ::webrtc::SenderOptions& operator=(::webrtc::SenderOptions&&);

    MCNAPI ~SenderOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::SenderOptions&&);

    MCNAPI void* $ctor(::webrtc::SenderOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
