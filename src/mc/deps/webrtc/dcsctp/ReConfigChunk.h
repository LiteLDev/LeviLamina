#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Parameters; }
// clang-format on

namespace dcsctp {

class ReConfigChunk {
public:
    // prevent constructor by default
    ReConfigChunk& operator=(ReConfigChunk const&);
    ReConfigChunk(ReConfigChunk const&);
    ReConfigChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ReConfigChunk@dcsctp@@UEAA@XZ
    virtual ~ReConfigChunk();

    // vIndex: 1, symbol: ?SerializeTo@ReConfigChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@ReConfigChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol: ??0ReConfigChunk@dcsctp@@QEAA@VParameters@1@@Z
    MCAPI explicit ReConfigChunk(class dcsctp::Parameters);

    // symbol:
    // ?Parse@ReConfigChunk@dcsctp@@SA?AV?$optional@VReConfigChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::ReConfigChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
