#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioSinkInterface {
public:
    // AudioSinkInterface inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // AudioSinkInterface inner types define
    struct Data {
    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
    };

public:
    // prevent constructor by default
    AudioSinkInterface& operator=(AudioSinkInterface const&);
    AudioSinkInterface(AudioSinkInterface const&);
    AudioSinkInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AudioSinkInterface@webrtc@@UEAA@XZ
    virtual ~AudioSinkInterface();

    // vIndex: 1, symbol: ?OnData@AudioDataProxy@RemoteAudioSource@webrtc@@UEAAXAEBUData@AudioSinkInterface@3@@Z
    virtual void OnData(struct webrtc::AudioSinkInterface::Data const&) = 0;

    // NOLINTEND
};

}; // namespace webrtc
