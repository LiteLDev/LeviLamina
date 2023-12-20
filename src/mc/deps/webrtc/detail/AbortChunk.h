#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Parameters; }
// clang-format on

namespace dcsctp {

class AbortChunk {
public:
    // prevent constructor by default
    AbortChunk& operator=(AbortChunk const&);
    AbortChunk(AbortChunk const&);
    AbortChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AbortChunk@dcsctp@@UEAA@XZ
    virtual ~AbortChunk();

    // vIndex: 1, symbol: ?SerializeTo@AbortChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@AbortChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol: ??0AbortChunk@dcsctp@@QEAA@_NVParameters@1@@Z
    MCAPI AbortChunk(bool, class dcsctp::Parameters);

    // symbol: ?Parse@AbortChunk@dcsctp@@SA?AV?$optional@VAbortChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::AbortChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
