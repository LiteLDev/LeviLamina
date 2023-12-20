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

class VideoSourceBase {
public:
    // VideoSourceBase inner types declare
    // clang-format off
    struct SinkPair;
    // clang-format on

    // VideoSourceBase inner types define
    struct SinkPair {
    public:
        // prevent constructor by default
        SinkPair& operator=(SinkPair const&);
        SinkPair(SinkPair const&);
        SinkPair();

    public:
        // NOLINTBEGIN
        // symbol: ??1SinkPair@VideoSourceBase@rtc@@QEAA@XZ
        MCAPI ~SinkPair();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VideoSourceBase& operator=(VideoSourceBase const&);
    VideoSourceBase(VideoSourceBase const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1VideoSourceBase@rtc@@UEAA@XZ
    virtual ~VideoSourceBase();

    // vIndex: 1, symbol:
    // ?AddOrUpdateSink@VideoSourceBase@rtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@2@AEBUVideoSinkWants@2@@Z
    virtual void
    AddOrUpdateSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*, struct rtc::VideoSinkWants const&);

    // vIndex: 2, symbol: ?RemoveSink@VideoSourceBase@rtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@2@@Z
    virtual void RemoveSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*);

    // symbol: ??0VideoSourceBase@rtc@@QEAA@XZ
    MCAPI VideoSourceBase();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?FindSinkPair@VideoSourceBase@rtc@@IEAAPEAUSinkPair@12@PEBV?$VideoSinkInterface@VVideoFrame@webrtc@@@2@@Z
    MCAPI struct rtc::VideoSourceBase::SinkPair*
    FindSinkPair(class rtc::VideoSinkInterface<class webrtc::VideoFrame> const*);

    // NOLINTEND
};

}; // namespace rtc
