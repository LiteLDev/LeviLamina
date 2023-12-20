#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class InitAckChunk {
public:
    // prevent constructor by default
    InitAckChunk& operator=(InitAckChunk const&);
    InitAckChunk(InitAckChunk const&);
    InitAckChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1InitAckChunk@dcsctp@@UEAA@XZ
    virtual ~InitAckChunk();

    // vIndex: 1, symbol: ?SerializeTo@InitAckChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@InitAckChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@InitAckChunk@dcsctp@@SA?AV?$optional@VInitAckChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::InitAckChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
