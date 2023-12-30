#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class HeartbeatRequestChunk {
public:
    // prevent constructor by default
    HeartbeatRequestChunk& operator=(HeartbeatRequestChunk const&);
    HeartbeatRequestChunk(HeartbeatRequestChunk const&);
    HeartbeatRequestChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1HeartbeatRequestChunk@dcsctp@@UEAA@XZ
    virtual ~HeartbeatRequestChunk();

    // vIndex: 1, symbol: ?SerializeTo@HeartbeatRequestChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@HeartbeatRequestChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@HeartbeatRequestChunk@dcsctp@@SA?AV?$optional@VHeartbeatRequestChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::HeartbeatRequestChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
