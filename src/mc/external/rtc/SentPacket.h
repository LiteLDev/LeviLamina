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
    MCAPI SentPacket(int64, int64);

    MCAPI SentPacket(int64, int64, ::rtc::PacketInfo const&);

    MCAPI ~SentPacket();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int64, int64);

    MCAPI void* $ctor(int64, int64, ::rtc::PacketInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
