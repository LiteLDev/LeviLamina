#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class VideoTrackInterface; }
// clang-format on

namespace webrtc {

class MediaStream {
public:
    // prevent constructor by default
    MediaStream& operator=(MediaStream const&);
    MediaStream(MediaStream const&);
    MediaStream();

public:
    // NOLINTBEGIN
    // symbol: ?AddTrack@MediaStream@webrtc@@UEAA_NV?$scoped_refptr@VAudioTrackInterface@webrtc@@@rtc@@@Z
    MCVAPI bool AddTrack(class rtc::scoped_refptr<class webrtc::AudioTrackInterface>);

    // symbol: ?AddTrack@MediaStream@webrtc@@UEAA_NV?$scoped_refptr@VVideoTrackInterface@webrtc@@@rtc@@@Z
    MCVAPI bool AddTrack(class rtc::scoped_refptr<class webrtc::VideoTrackInterface>);

    // symbol:
    // ?FindAudioTrack@MediaStream@webrtc@@UEAA?AV?$scoped_refptr@VAudioTrackInterface@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class rtc::scoped_refptr<class webrtc::AudioTrackInterface> FindAudioTrack(std::string const&);

    // symbol:
    // ?FindVideoTrack@MediaStream@webrtc@@UEAA?AV?$scoped_refptr@VVideoTrackInterface@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class rtc::scoped_refptr<class webrtc::VideoTrackInterface> FindVideoTrack(std::string const&);

    // symbol:
    // ?GetAudioTracks@MediaStream@webrtc@@UEAA?AV?$vector@V?$scoped_refptr@VAudioTrackInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VAudioTrackInterface@webrtc@@@rtc@@@std@@@std@@XZ
    MCVAPI std::vector<class rtc::scoped_refptr<class webrtc::AudioTrackInterface>> GetAudioTracks();

    // symbol:
    // ?GetVideoTracks@MediaStream@webrtc@@UEAA?AV?$vector@V?$scoped_refptr@VVideoTrackInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VVideoTrackInterface@webrtc@@@rtc@@@std@@@std@@XZ
    MCVAPI std::vector<class rtc::scoped_refptr<class webrtc::VideoTrackInterface>> GetVideoTracks();

    // symbol: ?RemoveTrack@MediaStream@webrtc@@UEAA_NV?$scoped_refptr@VVideoTrackInterface@webrtc@@@rtc@@@Z
    MCVAPI bool RemoveTrack(class rtc::scoped_refptr<class webrtc::VideoTrackInterface>);

    // symbol: ?RemoveTrack@MediaStream@webrtc@@UEAA_NV?$scoped_refptr@VAudioTrackInterface@webrtc@@@rtc@@@Z
    MCVAPI bool RemoveTrack(class rtc::scoped_refptr<class webrtc::AudioTrackInterface>);

    // symbol: ?id@MediaStream@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string id() const;

    // symbol: ??1MediaStream@webrtc@@UEAA@XZ
    MCVAPI ~MediaStream();

    // symbol:
    // ?Create@MediaStream@webrtc@@SA?AV?$scoped_refptr@VMediaStream@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::MediaStream> Create(std::string const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0MediaStream@webrtc@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit MediaStream(std::string const&);

    // NOLINTEND
};

}; // namespace webrtc
