#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class VideoTrackInterface; }
// clang-format on

namespace webrtc {

class MediaStreamInterface {
public:
    // prevent constructor by default
    MediaStreamInterface& operator=(MediaStreamInterface const&);
    MediaStreamInterface(MediaStreamInterface const&);
    MediaStreamInterface();

public:
    // NOLINTBEGIN
    // symbol: ?AddTrack@MediaStreamInterface@webrtc@@UEAA_NV?$scoped_refptr@VVideoTrackInterface@webrtc@@@rtc@@@Z
    MCVAPI bool AddTrack(class rtc::scoped_refptr<class webrtc::VideoTrackInterface>);

    // symbol: ?AddTrack@MediaStreamInterface@webrtc@@UEAA_NV?$scoped_refptr@VAudioTrackInterface@webrtc@@@rtc@@@Z
    MCVAPI bool AddTrack(class rtc::scoped_refptr<class webrtc::AudioTrackInterface>);

    // symbol: ?AddTrack@MediaStreamInterface@webrtc@@UEAA_NPEAVVideoTrackInterface@2@@Z
    MCVAPI bool AddTrack(class webrtc::VideoTrackInterface*);

    // symbol: ?AddTrack@MediaStreamInterface@webrtc@@UEAA_NPEAVAudioTrackInterface@2@@Z
    MCVAPI bool AddTrack(class webrtc::AudioTrackInterface*);

    // symbol: ?RemoveTrack@MediaStreamInterface@webrtc@@UEAA_NV?$scoped_refptr@VAudioTrackInterface@webrtc@@@rtc@@@Z
    MCVAPI bool RemoveTrack(class rtc::scoped_refptr<class webrtc::AudioTrackInterface>);

    // symbol: ?RemoveTrack@MediaStreamInterface@webrtc@@UEAA_NV?$scoped_refptr@VVideoTrackInterface@webrtc@@@rtc@@@Z
    MCVAPI bool RemoveTrack(class rtc::scoped_refptr<class webrtc::VideoTrackInterface>);

    // symbol: ?RemoveTrack@MediaStreamInterface@webrtc@@UEAA_NPEAVVideoTrackInterface@2@@Z
    MCVAPI bool RemoveTrack(class webrtc::VideoTrackInterface*);

    // symbol: ?RemoveTrack@MediaStreamInterface@webrtc@@UEAA_NPEAVAudioTrackInterface@2@@Z
    MCVAPI bool RemoveTrack(class webrtc::AudioTrackInterface*);

    // symbol: ??1MediaStreamInterface@webrtc@@MEAA@XZ
    MCVAPI ~MediaStreamInterface();

    // NOLINTEND
};

}; // namespace webrtc
