#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class NtpTime; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct AbsoluteCaptureTime; }
// clang-format on

namespace webrtc {

class AbsoluteCaptureTimeSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3ed260;
    ::ll::UntypedStorage<8, 8>  mUnk6c2612;
    ::ll::UntypedStorage<4, 4>  mUnkbada31;
    ::ll::UntypedStorage<4, 4>  mUnk932fd7;
    ::ll::UntypedStorage<4, 4>  mUnkad6d49;
    ::ll::UntypedStorage<8, 8>  mUnk8137a0;
    ::ll::UntypedStorage<8, 16> mUnkdbf620;
    // NOLINTEND

public:
    // prevent constructor by default
    AbsoluteCaptureTimeSender& operator=(AbsoluteCaptureTimeSender const&);
    AbsoluteCaptureTimeSender(AbsoluteCaptureTimeSender const&);
    AbsoluteCaptureTimeSender();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AbsoluteCaptureTimeSender(::webrtc::Clock* clock);

    MCNAPI ::std::optional<::webrtc::AbsoluteCaptureTime> OnSendPacket(
        uint                   source,
        uint                   rtp_timestamp,
        int                    rtp_clock_frequency_hz,
        ::webrtc::NtpTime      absolute_capture_time,
        ::std::optional<int64> estimated_capture_clock_offset,
        bool                   force
    );

    MCNAPI bool ShouldSendExtension(
        ::webrtc::Timestamp    send_time,
        uint                   source,
        uint                   rtp_timestamp,
        int                    rtp_clock_frequency_hz,
        ::webrtc::NtpTime      absolute_capture_time,
        ::std::optional<int64> estimated_capture_clock_offset
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint GetSource(uint ssrc, ::rtc::ArrayView<uint const> csrcs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Clock* clock);
    // NOLINTEND
};

} // namespace webrtc
