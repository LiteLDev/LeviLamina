#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class InitChunk {
public:
    // prevent constructor by default
    InitChunk& operator=(InitChunk const&);
    InitChunk(InitChunk const&);
    InitChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1InitChunk@dcsctp@@UEAA@XZ
    virtual ~InitChunk();

    // vIndex: 1, symbol: ?SerializeTo@InitChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@InitChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol: ?Parse@InitChunk@dcsctp@@SA?AV?$optional@VInitChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::InitChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
