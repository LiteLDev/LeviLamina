#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct PacketInfo; }
// clang-format on

namespace webrtc {

struct SentPacketInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk45e519;
    ::ll::UntypedStorage<8, 8>  mUnk63b6ca;
    ::ll::UntypedStorage<8, 40> mUnk8e7444;
    // NOLINTEND

public:
    // prevent constructor by default
    SentPacketInfo& operator=(SentPacketInfo const&);
    SentPacketInfo(SentPacketInfo const&);
    SentPacketInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentPacketInfo(int64 packet_id, int64 send_time_ms);

    MCNAPI SentPacketInfo(int64 packet_id, int64 send_time_ms, ::webrtc::PacketInfo const& info);

    MCNAPI ~SentPacketInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int64 packet_id, int64 send_time_ms);

    MCNAPI void* $ctor(int64 packet_id, int64 send_time_ms, ::webrtc::PacketInfo const& info);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
