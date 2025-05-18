#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
namespace webrtc { class RTCError; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace webrtc {

class RtpSenderBase {
public:
    // RtpSenderBase inner types declare
    // clang-format off
    class SetStreamsObserver;
    // clang-format on

    // RtpSenderBase inner types define
    class SetStreamsObserver {};

public:
    // prevent constructor by default
    RtpSenderBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCError CheckSetParameters(::webrtc::RtpParameters const&);

    MCNAPI RtpSenderBase(::rtc::Thread*, ::std::string const&, ::webrtc::RtpSenderBase::SetStreamsObserver*);

    MCNAPI void SetEncoderSelectorOnChannel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Thread*, ::std::string const&, ::webrtc::RtpSenderBase::SetStreamsObserver*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRtpSenderInternal();

    MCNAPI static void** $vftableForObserverInterface();
    // NOLINTEND
};

} // namespace webrtc
