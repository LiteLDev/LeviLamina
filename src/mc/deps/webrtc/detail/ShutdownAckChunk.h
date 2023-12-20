#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class ShutdownAckChunk {
public:
    // prevent constructor by default
    ShutdownAckChunk& operator=(ShutdownAckChunk const&);
    ShutdownAckChunk(ShutdownAckChunk const&);
    ShutdownAckChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShutdownAckChunk@dcsctp@@UEAA@XZ
    virtual ~ShutdownAckChunk() = default;

    // vIndex: 1, symbol: ?SerializeTo@ShutdownAckChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@ShutdownAckChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@ShutdownAckChunk@dcsctp@@SA?AV?$optional@VShutdownAckChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::ShutdownAckChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
