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
    MCNAPI
    AudioRtpReceiver(::rtc::Thread*, ::std::string const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&, bool, ::cricket::VoiceMediaReceiveChannelInterface*);

    MCNAPI
    AudioRtpReceiver(::rtc::Thread*, ::std::string, ::std::vector<::std::string>, bool, ::cricket::VoiceMediaReceiveChannelInterface*);

    MCNAPI void Reconfigure(bool);

    MCNAPI void RestartMediaChannel(::std::optional<uint>);

    MCNAPI void RestartMediaChannel_w(::std::optional<uint>, bool, ::webrtc::MediaSourceInterface::SourceState);

    MCNAPI void SetOutputVolume_w(double);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::rtc::Thread*, ::std::string const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&, bool, ::cricket::VoiceMediaReceiveChannelInterface*);

    MCNAPI void*
    $ctor(::rtc::Thread*, ::std::string, ::std::vector<::std::string>, bool, ::cricket::VoiceMediaReceiveChannelInterface*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForAudioObserver();

    MCNAPI static void** $vftableForRtpReceiverInternal();

    MCNAPI static void** $vftableForObserverInterface();
    // NOLINTEND
};

} // namespace webrtc
