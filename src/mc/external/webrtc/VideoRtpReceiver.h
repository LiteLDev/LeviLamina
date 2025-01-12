#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"
#include "mc/external/webrtc/MediaSourceInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaReceiveChannelInterface; }
namespace rtc { class Thread; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace webrtc {

class VideoRtpReceiver {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void OnEncodedSinkEnabled(bool);

    MCAPI void OnGenerateKeyFrame();

    MCAPI void RestartMediaChannel(::std::optional<uint>);

    MCAPI void RestartMediaChannel_w(::std::optional<uint>, ::webrtc::MediaSourceInterface::SourceState);

    MCAPI void SetEncodedSinkEnabled(bool);

    MCAPI void SetMediaChannel_w(::cricket::MediaReceiveChannelInterface*);

    MCAPI void SetSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>*);

    MCAPI void SetupMediaChannel(::std::optional<uint>, ::cricket::MediaReceiveChannelInterface*);

    MCAPI VideoRtpReceiver(::rtc::Thread*, ::std::string, ::std::vector<::std::string>);

    MCAPI
    VideoRtpReceiver(::rtc::Thread*, ::std::string const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::Thread*, ::std::string, ::std::vector<::std::string>);

    MCAPI void*
    $ctor(::rtc::Thread*, ::std::string const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
