#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioFrame; }
// clang-format on

namespace webrtc {

class AudioMixer : public ::webrtc::RefCountInterface {
public:
    // AudioMixer inner types declare
    // clang-format off
    class Source;
    // clang-format on

    // AudioMixer inner types define
    class Source {
    public:
        // Source inner types define
        enum class AudioFrameInfo : int {
            KNormal = 0,
            KMuted  = 1,
            KError  = 2,
        };

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::webrtc::AudioMixer::Source::AudioFrameInfo GetAudioFrameWithInfo(int, ::webrtc::AudioFrame*) = 0;

        virtual int Ssrc() const = 0;

        virtual int PreferredSampleRate() const = 0;

        virtual ~Source() = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool AddSource(::webrtc::AudioMixer::Source*) = 0;

    virtual void RemoveSource(::webrtc::AudioMixer::Source*) = 0;

    virtual void Mix(uint64, ::webrtc::AudioFrame*) = 0;

    virtual ~AudioMixer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
