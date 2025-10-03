#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct PacketInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkfbf96b;
    ::ll::UntypedStorage<1, 1> mUnk7e6704;
    ::ll::UntypedStorage<4, 4> mUnk25ab78;
    ::ll::UntypedStorage<4, 4> mUnkfb117c;
    ::ll::UntypedStorage<2, 4> mUnk130342;
    ::ll::UntypedStorage<8, 8> mUnk665969;
    ::ll::UntypedStorage<8, 8> mUnk4357f6;
    ::ll::UntypedStorage<8, 8> mUnk777211;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketInfo& operator=(PacketInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PacketInfo();

    MCNAPI PacketInfo(::rtc::PacketInfo const&);

    MCNAPI ~PacketInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::rtc::PacketInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
