#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class ForwardTsnChunk {
public:
    // prevent constructor by default
    ForwardTsnChunk& operator=(ForwardTsnChunk const&);
    ForwardTsnChunk(ForwardTsnChunk const&);
    ForwardTsnChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ForwardTsnChunk@dcsctp@@UEAA@XZ
    virtual ~ForwardTsnChunk();

    // vIndex: 1, symbol: ?SerializeTo@ForwardTsnChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@ForwardTsnChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@ForwardTsnChunk@dcsctp@@SA?AV?$optional@VForwardTsnChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::ForwardTsnChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
