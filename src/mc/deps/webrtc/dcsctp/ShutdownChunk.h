#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class ShutdownChunk {
public:
    // prevent constructor by default
    ShutdownChunk& operator=(ShutdownChunk const&);
    ShutdownChunk(ShutdownChunk const&);
    ShutdownChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShutdownChunk@dcsctp@@UEAA@XZ
    virtual ~ShutdownChunk() = default;

    // vIndex: 1, symbol: ?SerializeTo@ShutdownChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@ShutdownChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@ShutdownChunk@dcsctp@@SA?AV?$optional@VShutdownChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::ShutdownChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
