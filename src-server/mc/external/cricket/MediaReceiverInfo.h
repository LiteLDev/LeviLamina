#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaReceiverInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7329e5;
    ::ll::UntypedStorage<8, 8>  mUnkd4d6f0;
    ::ll::UntypedStorage<4, 4>  mUnk23653e;
    ::ll::UntypedStorage<4, 4>  mUnk862144;
    ::ll::UntypedStorage<8, 16> mUnk3beaef;
    ::ll::UntypedStorage<8, 16> mUnk580c05;
    ::ll::UntypedStorage<4, 8>  mUnk4664a6;
    ::ll::UntypedStorage<8, 8>  mUnkd2b500;
    ::ll::UntypedStorage<8, 8>  mUnk50c827;
    ::ll::UntypedStorage<8, 8>  mUnk65feb1;
    ::ll::UntypedStorage<8, 8>  mUnkf86438;
    ::ll::UntypedStorage<8, 16> mUnk9d8cd8;
    ::ll::UntypedStorage<8, 16> mUnkb717d6;
    ::ll::UntypedStorage<8, 32> mUnk1bb2fd;
    ::ll::UntypedStorage<4, 8>  mUnkd5de6c;
    ::ll::UntypedStorage<8, 24> mUnk437a77;
    ::ll::UntypedStorage<8, 24> mUnk6eb861;
    ::ll::UntypedStorage<8, 16> mUnke84c9f;
    ::ll::UntypedStorage<8, 16> mUnk9a7faf;
    ::ll::UntypedStorage<8, 16> mUnkad8ab1;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaReceiverInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MediaReceiverInfo(::cricket::MediaReceiverInfo const&);

    MCNAPI ::cricket::MediaReceiverInfo& operator=(::cricket::MediaReceiverInfo const&);

    MCNAPI uint ssrc() const;

    MCNAPI ~MediaReceiverInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::MediaReceiverInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
