#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioProcessing; }
namespace webrtc { class AudioTransport; }
// clang-format on

namespace webrtc {

class AudioState : public ::webrtc::RefCountInterface {
public:
    // AudioState inner types declare
    // clang-format off
    struct Config;
    // clang-format on
    
    // AudioState inner types define
    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkae9b84;
        ::ll::UntypedStorage<8, 8> mUnk117612;
        ::ll::UntypedStorage<8, 8> mUnk5a3514;
        ::ll::UntypedStorage<8, 8> mUnk6f7e11;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    
    };
    
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::AudioProcessing* audio_processing() = 0;

    // vIndex: 4
    virtual ::webrtc::AudioTransport* audio_transport() = 0;

    // vIndex: 5
    virtual void SetPlayout(bool) = 0;

    // vIndex: 6
    virtual void SetRecording(bool) = 0;

    // vIndex: 7
    virtual void SetStereoChannelSwapping(bool) = 0;

    // vIndex: 2
    virtual ~AudioState() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
