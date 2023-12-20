#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioTrackSinkInterface {
public:
    // prevent constructor by default
    AudioTrackSinkInterface& operator=(AudioTrackSinkInterface const&);
    AudioTrackSinkInterface(AudioTrackSinkInterface const&);
    AudioTrackSinkInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?OnData@AudioTrackSinkInterface@webrtc@@UEAAXPEBXHH_K1@Z
    virtual void OnData(void const*, int, int, uint64, uint64);

    // vIndex: 1, symbol: ?OnData@AudioTrackSinkInterface@webrtc@@UEAAXPEBXHH_K1V?$optional@_J@std@@@Z
    virtual void OnData(void const*, int, int, uint64, uint64, std::optional<int64>);

    // vIndex: 2, symbol: ?NumPreferredChannels@AudioTrackSinkInterface@webrtc@@UEBAHXZ
    virtual int NumPreferredChannels() const;

    // vIndex: 3, symbol: __gen_??1AudioTrackSinkInterface@webrtc@@UEAA@XZ
    virtual ~AudioTrackSinkInterface() = default;

    // NOLINTEND
};

}; // namespace webrtc
