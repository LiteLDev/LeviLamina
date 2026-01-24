#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class PacketSequencer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8a5cd4;
    ::ll::UntypedStorage<4, 8> mUnk538237;
    ::ll::UntypedStorage<1, 1> mUnke2c324;
    ::ll::UntypedStorage<8, 8> mUnke2aa8f;
    ::ll::UntypedStorage<2, 2> mUnk373f06;
    ::ll::UntypedStorage<2, 2> mUnk3e0879;
    ::ll::UntypedStorage<1, 1> mUnk875ceb;
    ::ll::UntypedStorage<4, 4> mUnk166c93;
    ::ll::UntypedStorage<8, 8> mUnk93a3dd;
    ::ll::UntypedStorage<8, 8> mUnk33f396;
    ::ll::UntypedStorage<1, 1> mUnk5d6b05;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSequencer& operator=(PacketSequencer const&);
    PacketSequencer(PacketSequencer const&);
    PacketSequencer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool CanSendPaddingOnMediaSsrc() const;

    MCNAPI PacketSequencer(
        uint                  media_ssrc,
        ::std::optional<uint> rtx_ssrc,
        bool                  require_marker_before_media_padding,
        ::webrtc::Clock*      clock
    );

    MCNAPI void PopulatePaddingFields(::webrtc::RtpPacketToSend& packet);

    MCNAPI void PopulateRtpState(::webrtc::RtpState& state) const;

    MCNAPI void Sequence(::webrtc::RtpPacketToSend& packet);

    MCNAPI void SetRtpState(::webrtc::RtpState const& state);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint                  media_ssrc,
        ::std::optional<uint> rtx_ssrc,
        bool                  require_marker_before_media_padding,
        ::webrtc::Clock*      clock
    );
    // NOLINTEND
};

} // namespace webrtc
