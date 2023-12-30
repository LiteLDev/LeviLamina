#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/AudioSource.h"

namespace webrtc {

class LocalAudioSinkAdapter {
public:
    // prevent constructor by default
    LocalAudioSinkAdapter& operator=(LocalAudioSinkAdapter const&);
    LocalAudioSinkAdapter(LocalAudioSinkAdapter const&);

public:
    // NOLINTBEGIN
    // symbol: ?NumPreferredChannels@LocalAudioSinkAdapter@webrtc@@EEBAHXZ
    MCVAPI int NumPreferredChannels() const;

    // symbol: ?OnData@LocalAudioSinkAdapter@webrtc@@EEAAXPEBXHH_K1@Z
    MCVAPI void OnData(void const*, int, int, uint64, uint64);

    // symbol: ?OnData@LocalAudioSinkAdapter@webrtc@@EEAAXPEBXHH_K1V?$optional@_J@std@@@Z
    MCVAPI void OnData(void const*, int, int, uint64, uint64, std::optional<int64>);

    // symbol: ?SetSink@LocalAudioSinkAdapter@webrtc@@EEAAXPEAVSink@AudioSource@cricket@@@Z
    MCVAPI void SetSink(class cricket::AudioSource::Sink*);

    // symbol: ??1LocalAudioSinkAdapter@webrtc@@UEAA@XZ
    MCVAPI ~LocalAudioSinkAdapter();

    // symbol: ??0LocalAudioSinkAdapter@webrtc@@QEAA@XZ
    MCAPI LocalAudioSinkAdapter();

    // NOLINTEND
};

}; // namespace webrtc
