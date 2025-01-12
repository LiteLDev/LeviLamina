#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaSourceInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace rtc { class Thread; }
namespace webrtc { class MediaStreamInterface; }
// clang-format on

namespace webrtc {

class AudioRtpReceiver {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    AudioRtpReceiver(::rtc::Thread*, ::std::string const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&, bool, ::cricket::VoiceMediaReceiveChannelInterface*);

    MCAPI
    AudioRtpReceiver(::rtc::Thread*, ::std::string, ::std::vector<::std::string>, bool, ::cricket::VoiceMediaReceiveChannelInterface*);

    MCAPI void Reconfigure(bool);

    MCAPI void RestartMediaChannel(::std::optional<uint>);

    MCAPI void RestartMediaChannel_w(::std::optional<uint>, bool, ::webrtc::MediaSourceInterface::SourceState);

    MCAPI void SetOutputVolume_w(double);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::rtc::Thread*, ::std::string const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&, bool, ::cricket::VoiceMediaReceiveChannelInterface*);

    MCAPI void*
    $ctor(::rtc::Thread*, ::std::string, ::std::vector<::std::string>, bool, ::cricket::VoiceMediaReceiveChannelInterface*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForAudioObserver();

    MCAPI static void** $vftableForRtpReceiverInternal();

    MCAPI static void** $vftableForObserverInterface();
    // NOLINTEND
};

} // namespace webrtc
