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
    // prevent constructor by default
    VideoRtpReceiver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnEncodedSinkEnabled(bool);

    MCNAPI void OnGenerateKeyFrame();

    MCNAPI void RestartMediaChannel(::std::optional<uint>);

    MCNAPI void RestartMediaChannel_w(::std::optional<uint>, ::webrtc::MediaSourceInterface::SourceState);

    MCNAPI void SetEncodedSinkEnabled(bool);

    MCNAPI void SetMediaChannel_w(::cricket::MediaReceiveChannelInterface*);

    MCNAPI void SetSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>*);

    MCNAPI void SetupMediaChannel(::std::optional<uint>, ::cricket::MediaReceiveChannelInterface*);

    MCNAPI VideoRtpReceiver(::rtc::Thread*, ::std::string, ::std::vector<::std::string>);

    MCNAPI
    VideoRtpReceiver(::rtc::Thread*, ::std::string const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Thread*, ::std::string, ::std::vector<::std::string>);

    MCNAPI void*
    $ctor(::rtc::Thread*, ::std::string const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
