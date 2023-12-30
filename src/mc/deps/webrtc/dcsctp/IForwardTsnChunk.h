#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class IForwardTsnChunk {
public:
    // prevent constructor by default
    IForwardTsnChunk& operator=(IForwardTsnChunk const&);
    IForwardTsnChunk(IForwardTsnChunk const&);
    IForwardTsnChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IForwardTsnChunk@dcsctp@@UEAA@XZ
    virtual ~IForwardTsnChunk();

    // vIndex: 1, symbol: ?SerializeTo@IForwardTsnChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@IForwardTsnChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@IForwardTsnChunk@dcsctp@@SA?AV?$optional@VIForwardTsnChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::IForwardTsnChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
