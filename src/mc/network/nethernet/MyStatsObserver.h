#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StatsObserver.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StatsObserver; }
namespace webrtc { class StatsReport; }
// clang-format on

namespace NetherNet {

class MyStatsObserver : public ::webrtc::StatsObserver {
public:
    // prevent constructor by default
    MyStatsObserver& operator=(MyStatsObserver const&);
    MyStatsObserver(MyStatsObserver const&);
    MyStatsObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?AddRef@MyStatsObserver@NetherNet@@UEBAXXZ
    virtual void AddRef() const;

    // vIndex: 1, symbol: ?Release@MyStatsObserver@NetherNet@@UEBA?AW4RefCountReleaseStatus@rtc@@XZ
    virtual ::rtc::RefCountReleaseStatus Release() const;

    // vIndex: 2, symbol: __gen_??1MyStatsObserver@NetherNet@@UEAA@XZ
    virtual ~MyStatsObserver() = default;

    // vIndex: 3, symbol:
    // ?OnComplete@MyStatsObserver@NetherNet@@UEAAXAEBV?$vector@PEBVStatsReport@webrtc@@V?$allocator@PEBVStatsReport@webrtc@@@std@@@std@@@Z
    virtual void OnComplete(std::vector<class webrtc::StatsReport const*> const&);

    // NOLINTEND
};

}; // namespace NetherNet
