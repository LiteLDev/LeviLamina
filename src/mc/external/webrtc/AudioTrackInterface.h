#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaStreamTrackInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioProcessorInterface; }
namespace webrtc { class AudioSourceInterface; }
namespace webrtc { class AudioTrackSinkInterface; }
// clang-format on

namespace webrtc {

class AudioTrackInterface : public ::webrtc::MediaStreamTrackInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::AudioSourceInterface* GetSource() const = 0;

    virtual void AddSink(::webrtc::AudioTrackSinkInterface* sink) = 0;

    virtual void RemoveSink(::webrtc::AudioTrackSinkInterface* sink) = 0;

    virtual bool GetSignalLevel(int* level);

    virtual ::webrtc::scoped_refptr<::webrtc::AudioProcessorInterface> GetAudioProcessor();

    virtual ~AudioTrackInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $GetSignalLevel(int* level);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::AudioProcessorInterface> $GetAudioProcessor();


    // NOLINTEND
};

} // namespace webrtc
