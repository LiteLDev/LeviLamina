#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct PacketInfo; }
// clang-format on

namespace rtc {

struct SentPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk732f98;
    ::ll::UntypedStorage<8, 8>  mUnkbe6534;
    ::ll::UntypedStorage<8, 40> mUnkaf3c19;
    // NOLINTEND

public:
    // prevent constructor by default
    SentPacket& operator=(SentPacket const&);
    SentPacket(SentPacket const&);
    SentPacket();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentPacket(int64, int64);

    MCNAPI SentPacket(int64, int64, ::rtc::PacketInfo const&);

    MCNAPI ~SentPacket();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int64, int64);

    MCNAPI void* $ctor(int64, int64, ::rtc::PacketInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
