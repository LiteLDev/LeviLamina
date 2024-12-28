#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpSenderBase.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
namespace webrtc { class LegacyStatsCollectorInterface; }
// clang-format on

namespace webrtc {

class AudioRtpSender {
public:
    // prevent constructor by default
    AudioRtpSender& operator=(AudioRtpSender const&);
    AudioRtpSender(AudioRtpSender const&);
    AudioRtpSender();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    AudioRtpSender(::rtc::Thread*, ::std::string const&, ::webrtc::LegacyStatsCollectorInterface*, ::webrtc::RtpSenderBase::SetStreamsObserver*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::AudioRtpSender>
    Create(::rtc::Thread*, ::std::string const&, ::webrtc::LegacyStatsCollectorInterface*, ::webrtc::RtpSenderBase::SetStreamsObserver*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::rtc::Thread*, ::std::string const&, ::webrtc::LegacyStatsCollectorInterface*, ::webrtc::RtpSenderBase::SetStreamsObserver*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForObserverInterface();

    MCAPI static void** $vftable();

    MCAPI static void** $vftableForRtpSenderInternal();
    // NOLINTEND
};

} // namespace webrtc
