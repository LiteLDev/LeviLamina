#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioSourceInterface; }
namespace webrtc { class AudioTrackSinkInterface; }
// clang-format on

namespace webrtc {

class AudioTrack {
public:
    // prevent constructor by default
    AudioTrack& operator=(AudioTrack const&);
    AudioTrack(AudioTrack const&);
    AudioTrack();

public:
    // NOLINTBEGIN
    // symbol: ?AddSink@AudioTrack@webrtc@@UEAAXPEAVAudioTrackSinkInterface@2@@Z
    MCVAPI void AddSink(class webrtc::AudioTrackSinkInterface*);

    // symbol: ?GetSource@AudioTrack@webrtc@@UEBAPEAVAudioSourceInterface@2@XZ
    MCVAPI class webrtc::AudioSourceInterface* GetSource() const;

    // symbol: ?OnChanged@AudioTrack@webrtc@@EEAAXXZ
    MCVAPI void OnChanged();

    // symbol: ?RemoveSink@AudioTrack@webrtc@@UEAAXPEAVAudioTrackSinkInterface@2@@Z
    MCVAPI void RemoveSink(class webrtc::AudioTrackSinkInterface*);

    // symbol: ?kind@AudioTrack@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string kind() const;

    // symbol: ??1AudioTrack@webrtc@@MEAA@XZ
    MCVAPI ~AudioTrack();

    // symbol:
    // ?Create@AudioTrack@webrtc@@SA?AV?$scoped_refptr@VAudioTrack@webrtc@@@rtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBV?$scoped_refptr@VAudioSourceInterface@webrtc@@@4@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::AudioTrack>
    Create(std::string_view, class rtc::scoped_refptr<class webrtc::AudioSourceInterface> const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0AudioTrack@webrtc@@IEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBV?$scoped_refptr@VAudioSourceInterface@webrtc@@@rtc@@@Z
    MCAPI AudioTrack(std::string_view, class rtc::scoped_refptr<class webrtc::AudioSourceInterface> const&);

    // NOLINTEND
};

}; // namespace webrtc
