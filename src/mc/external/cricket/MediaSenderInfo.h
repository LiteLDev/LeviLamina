#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaSenderInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7f0aa0;
    ::ll::UntypedStorage<8, 8>  mUnk257f25;
    ::ll::UntypedStorage<8, 8>  mUnk92e104;
    ::ll::UntypedStorage<4, 4>  mUnk364dfd;
    ::ll::UntypedStorage<8, 8>  mUnkd76e3d;
    ::ll::UntypedStorage<4, 4>  mUnkfc5703;
    ::ll::UntypedStorage<8, 16> mUnkca91af;
    ::ll::UntypedStorage<4, 4>  mUnk1e06fd;
    ::ll::UntypedStorage<4, 4>  mUnk45a6b4;
    ::ll::UntypedStorage<8, 8>  mUnkdfd48b;
    ::ll::UntypedStorage<8, 32> mUnk672381;
    ::ll::UntypedStorage<4, 8>  mUnkdef386;
    ::ll::UntypedStorage<8, 24> mUnk27449f;
    ::ll::UntypedStorage<8, 24> mUnk95d8c1;
    ::ll::UntypedStorage<8, 24> mUnkd87bce;
    ::ll::UntypedStorage<1, 2>  mUnk77c033;
    ::ll::UntypedStorage<8, 8>  mUnk6ab152;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaSenderInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MediaSenderInfo(::cricket::MediaSenderInfo const&);

    MCAPI ::cricket::MediaSenderInfo& operator=(::cricket::MediaSenderInfo const&);

    MCAPI uint ssrc() const;

    MCAPI ~MediaSenderInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::MediaSenderInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
