#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
// clang-format on

namespace rtc {

class Event {
public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event(Event const&);

public:
    // NOLINTBEGIN
    // symbol: ??0Event@rtc@@QEAA@XZ
    MCAPI Event();

    // symbol: ??0Event@rtc@@QEAA@_N0@Z
    MCAPI Event(bool, bool);

    // symbol: ?Reset@Event@rtc@@QEAAXXZ
    MCAPI void Reset();

    // symbol: ?Set@Event@rtc@@QEAAXXZ
    MCAPI void Set();

    // symbol: ?Wait@Event@rtc@@QEAA_NVTimeDelta@webrtc@@0@Z
    MCAPI bool Wait(class webrtc::TimeDelta, class webrtc::TimeDelta);

    // symbol: ??1Event@rtc@@QEAA@XZ
    MCAPI ~Event();

    // symbol: ?kForever@Event@rtc@@2VTimeDelta@webrtc@@B
    MCAPI static class webrtc::TimeDelta const kForever;

    // NOLINTEND
};

}; // namespace rtc
