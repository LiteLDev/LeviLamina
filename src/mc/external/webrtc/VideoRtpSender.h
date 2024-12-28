#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpSenderBase.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
// clang-format on

namespace webrtc {

class VideoRtpSender {
public:
    // prevent constructor by default
    VideoRtpSender& operator=(VideoRtpSender const&);
    VideoRtpSender(VideoRtpSender const&);
    VideoRtpSender();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VideoRtpSender(::rtc::Thread*, ::std::string const&, ::webrtc::RtpSenderBase::SetStreamsObserver*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::VideoRtpSender>
    Create(::rtc::Thread*, ::std::string const&, ::webrtc::RtpSenderBase::SetStreamsObserver*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::Thread*, ::std::string const&, ::webrtc::RtpSenderBase::SetStreamsObserver*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForObserverInterface();

    MCAPI static void** $vftableForRtpSenderInternal();
    // NOLINTEND
};

} // namespace webrtc
