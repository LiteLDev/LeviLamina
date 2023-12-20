#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Parameters; }
// clang-format on

namespace dcsctp {

class ErrorChunk {
public:
    // prevent constructor by default
    ErrorChunk& operator=(ErrorChunk const&);
    ErrorChunk(ErrorChunk const&);
    ErrorChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ErrorChunk@dcsctp@@UEAA@XZ
    virtual ~ErrorChunk();

    // vIndex: 1, symbol: ?SerializeTo@ErrorChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@ErrorChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol: ??0ErrorChunk@dcsctp@@QEAA@VParameters@1@@Z
    MCAPI explicit ErrorChunk(class dcsctp::Parameters);

    // symbol: ?Parse@ErrorChunk@dcsctp@@SA?AV?$optional@VErrorChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::ErrorChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
