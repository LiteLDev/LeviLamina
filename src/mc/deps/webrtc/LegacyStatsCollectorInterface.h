#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class StatsReport; }
// clang-format on

namespace webrtc {

class LegacyStatsCollectorInterface {
public:
    // prevent constructor by default
    LegacyStatsCollectorInterface& operator=(LegacyStatsCollectorInterface const&);
    LegacyStatsCollectorInterface(LegacyStatsCollectorInterface const&);
    LegacyStatsCollectorInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LegacyStatsCollectorInterface@webrtc@@UEAA@XZ
    virtual ~LegacyStatsCollectorInterface();

    // vIndex: 1, symbol: ?AddLocalAudioTrack@LegacyStatsCollector@webrtc@@UEAAXPEAVAudioTrackInterface@2@I@Z
    virtual void AddLocalAudioTrack(class webrtc::AudioTrackInterface*, uint) = 0;

    // vIndex: 2, symbol: ?RemoveLocalAudioTrack@LegacyStatsCollector@webrtc@@UEAAXPEAVAudioTrackInterface@2@I@Z
    virtual void RemoveLocalAudioTrack(class webrtc::AudioTrackInterface*, uint) = 0;

    // vIndex: 3, symbol:
    // ?GetStats@LegacyStatsCollector@webrtc@@UEAAXPEAVMediaStreamTrackInterface@2@PEAV?$vector@PEBVStatsReport@webrtc@@V?$allocator@PEBVStatsReport@webrtc@@@std@@@std@@@Z
    virtual void GetStats(class webrtc::MediaStreamTrackInterface*, std::vector<class webrtc::StatsReport const*>*) = 0;

    // vIndex: 4, symbol: ?GetTimeNow@LegacyStatsCollector@webrtc@@EEAANXZ
    virtual double GetTimeNow();

    // NOLINTEND
};

}; // namespace webrtc
