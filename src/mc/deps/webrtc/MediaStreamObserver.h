#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/ObserverInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class ObserverInterface; }
namespace webrtc { class VideoTrackInterface; }
// clang-format on

namespace webrtc {

class MediaStreamObserver : public ::webrtc::ObserverInterface {
public:
    // prevent constructor by default
    MediaStreamObserver& operator=(MediaStreamObserver const&);
    MediaStreamObserver(MediaStreamObserver const&);
    MediaStreamObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?OnChanged@MediaStreamObserver@webrtc@@UEAAXXZ
    virtual void OnChanged();

    // vIndex: 1, symbol: ??1MediaStreamObserver@webrtc@@UEAA@XZ
    virtual ~MediaStreamObserver();

    // symbol:
    // ??0MediaStreamObserver@webrtc@@QEAA@PEAVMediaStreamInterface@1@V?$function@$$A6AXPEAVAudioTrackInterface@webrtc@@PEAVMediaStreamInterface@2@@Z@std@@1V?$function@$$A6AXPEAVVideoTrackInterface@webrtc@@PEAVMediaStreamInterface@2@@Z@4@2@Z
    MCAPI
    MediaStreamObserver(class webrtc::MediaStreamInterface*, std::function<void(class webrtc::AudioTrackInterface*, class webrtc::MediaStreamInterface*)>, std::function<void(class webrtc::AudioTrackInterface*, class webrtc::MediaStreamInterface*)>, std::function<void(class webrtc::VideoTrackInterface*, class webrtc::MediaStreamInterface*)>, std::function<void(class webrtc::VideoTrackInterface*, class webrtc::MediaStreamInterface*)>);

    // NOLINTEND
};

}; // namespace webrtc
