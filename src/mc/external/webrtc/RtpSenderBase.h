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
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::RTCError CheckSetParameters(::webrtc::RtpParameters const&);

    MCAPI RtpSenderBase(::rtc::Thread*, ::std::string const&, ::webrtc::RtpSenderBase::SetStreamsObserver*);

    MCAPI void SetEncoderSelectorOnChannel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::Thread*, ::std::string const&, ::webrtc::RtpSenderBase::SetStreamsObserver*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForRtpSenderInternal();

    MCAPI static void** $vftableForObserverInterface();
    // NOLINTEND
};

} // namespace webrtc
