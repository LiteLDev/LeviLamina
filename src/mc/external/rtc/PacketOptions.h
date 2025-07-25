#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/DiffServCodePoint.h"

namespace rtc {

struct PacketOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke3b5b7;
    ::ll::UntypedStorage<1, 1>  mUnk9a4de0;
    ::ll::UntypedStorage<8, 8>  mUnkb11f57;
    ::ll::UntypedStorage<8, 48> mUnk16e8ef;
    ::ll::UntypedStorage<8, 40> mUnk7cf9c7;
    ::ll::UntypedStorage<1, 1>  mUnkdf2e4f;
    ::ll::UntypedStorage<1, 1>  mUnkbb1c2f;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketOptions& operator=(PacketOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PacketOptions();

    MCNAPI PacketOptions(::rtc::PacketOptions const&);

    MCNAPI explicit PacketOptions(::rtc::DiffServCodePoint dscp);

    MCNAPI ~PacketOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::rtc::PacketOptions const&);

    MCNAPI void* $ctor(::rtc::DiffServCodePoint dscp);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
