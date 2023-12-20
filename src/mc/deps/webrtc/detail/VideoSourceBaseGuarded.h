#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/VideoSinkInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct VideoSinkWants; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace rtc {

class VideoSourceBaseGuarded {
public:
    // VideoSourceBaseGuarded inner types declare
    // clang-format off
    struct SinkPair;
    // clang-format on

    // VideoSourceBaseGuarded inner types define
    struct SinkPair {
    public:
        // prevent constructor by default
        SinkPair& operator=(SinkPair const&);
        SinkPair(SinkPair const&);
        SinkPair();

    public:
        // NOLINTBEGIN
        // symbol: ??1SinkPair@VideoSourceBaseGuarded@rtc@@QEAA@XZ
        MCAPI ~SinkPair();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VideoSourceBaseGuarded& operator=(VideoSourceBaseGuarded const&);
    VideoSourceBaseGuarded(VideoSourceBaseGuarded const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1VideoSourceBaseGuarded@rtc@@UEAA@XZ
    virtual ~VideoSourceBaseGuarded();

    // vIndex: 1, symbol:
    // ?AddOrUpdateSink@VideoSourceBaseGuarded@rtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@2@AEBUVideoSinkWants@2@@Z
    virtual void
    AddOrUpdateSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*, struct rtc::VideoSinkWants const&);

    // vIndex: 2, symbol:
    // ?RemoveSink@VideoSourceBaseGuarded@rtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@2@@Z
    virtual void RemoveSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*);

    // symbol: ??0VideoSourceBaseGuarded@rtc@@QEAA@XZ
    MCAPI VideoSourceBaseGuarded();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?FindSinkPair@VideoSourceBaseGuarded@rtc@@IEAAPEAUSinkPair@12@PEBV?$VideoSinkInterface@VVideoFrame@webrtc@@@2@@Z
    MCAPI struct rtc::VideoSourceBaseGuarded::SinkPair*
    FindSinkPair(class rtc::VideoSinkInterface<class webrtc::VideoFrame> const*);

    // symbol:
    // ?sink_pairs@VideoSourceBaseGuarded@rtc@@IEBAAEBV?$vector@USinkPair@VideoSourceBaseGuarded@rtc@@V?$allocator@USinkPair@VideoSourceBaseGuarded@rtc@@@std@@@std@@XZ
    MCAPI std::vector<struct rtc::VideoSourceBaseGuarded::SinkPair> const& sink_pairs() const;

    // NOLINTEND
};

}; // namespace rtc
