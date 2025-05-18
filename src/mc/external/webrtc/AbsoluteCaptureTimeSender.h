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

struct AbsoluteCaptureTimeSender {
public:
    // prevent constructor by default
    AbsoluteCaptureTimeSender();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AbsoluteCaptureTimeSender(::webrtc::Clock*);

    MCNAPI ::std::optional<::webrtc::AbsoluteCaptureTime>
    OnSendPacket(uint, uint, int, ::webrtc::NtpTime, ::std::optional<int64>, bool);

    MCNAPI bool
    ShouldSendExtension(::webrtc::Timestamp, uint, uint, int, ::webrtc::NtpTime, ::std::optional<int64>) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint GetSource(uint, ::rtc::ArrayView<uint const>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Clock*);
    // NOLINTEND
};

} // namespace webrtc
