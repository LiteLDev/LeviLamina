#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace cricket { class VoiceMediaSendChannelInterface; }
namespace rtc { class Thread; }
namespace rtc { class UniqueRandomIdGenerator; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { struct CryptoOptions; }
// clang-format on

namespace cricket {

class VoiceChannel {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    VoiceChannel(::webrtc::TaskQueueBase*, ::rtc::Thread*, ::webrtc::TaskQueueBase*, ::std::unique_ptr<::cricket::VoiceMediaSendChannelInterface>, ::std::unique_ptr<::cricket::VoiceMediaReceiveChannelInterface>, ::std::string_view, bool, ::webrtc::CryptoOptions, ::rtc::UniqueRandomIdGenerator*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::webrtc::TaskQueueBase*, ::rtc::Thread*, ::webrtc::TaskQueueBase*, ::std::unique_ptr<::cricket::VoiceMediaSendChannelInterface>, ::std::unique_ptr<::cricket::VoiceMediaReceiveChannelInterface>, ::std::string_view, bool, ::webrtc::CryptoOptions, ::rtc::UniqueRandomIdGenerator*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForMediaChannelNetworkInterface();

    MCAPI static void** $vftableForRtpPacketSinkInterface();

    MCAPI static void** $vftableForChannelInterface();
    // NOLINTEND
};

} // namespace cricket
