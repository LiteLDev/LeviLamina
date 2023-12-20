#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class CookieEchoChunk {
public:
    // prevent constructor by default
    CookieEchoChunk& operator=(CookieEchoChunk const&);
    CookieEchoChunk(CookieEchoChunk const&);
    CookieEchoChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CookieEchoChunk@dcsctp@@UEAA@XZ
    virtual ~CookieEchoChunk() = default;

    // vIndex: 1, symbol: ?SerializeTo@CookieEchoChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@CookieEchoChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@CookieEchoChunk@dcsctp@@SA?AV?$optional@VCookieEchoChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::CookieEchoChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
