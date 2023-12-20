#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class ShutdownCompleteChunk {
public:
    // prevent constructor by default
    ShutdownCompleteChunk& operator=(ShutdownCompleteChunk const&);
    ShutdownCompleteChunk(ShutdownCompleteChunk const&);
    ShutdownCompleteChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShutdownCompleteChunk@dcsctp@@UEAA@XZ
    virtual ~ShutdownCompleteChunk() = default;

    // vIndex: 1, symbol: ?SerializeTo@ShutdownCompleteChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@ShutdownCompleteChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@ShutdownCompleteChunk@dcsctp@@SA?AV?$optional@VShutdownCompleteChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::ShutdownCompleteChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
