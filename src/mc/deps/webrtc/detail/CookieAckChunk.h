#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class CookieAckChunk {
public:
    // prevent constructor by default
    CookieAckChunk& operator=(CookieAckChunk const&);
    CookieAckChunk(CookieAckChunk const&);
    CookieAckChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CookieAckChunk@dcsctp@@UEAA@XZ
    virtual ~CookieAckChunk() = default;

    // vIndex: 1, symbol: ?SerializeTo@CookieAckChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@CookieAckChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@CookieAckChunk@dcsctp@@SA?AV?$optional@VCookieAckChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::CookieAckChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
