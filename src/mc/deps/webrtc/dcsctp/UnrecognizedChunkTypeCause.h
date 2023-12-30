#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class UnrecognizedChunkTypeCause {
public:
    // prevent constructor by default
    UnrecognizedChunkTypeCause& operator=(UnrecognizedChunkTypeCause const&);
    UnrecognizedChunkTypeCause(UnrecognizedChunkTypeCause const&);
    UnrecognizedChunkTypeCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UnrecognizedChunkTypeCause@dcsctp@@UEAA@XZ
    virtual ~UnrecognizedChunkTypeCause();

    // vIndex: 1, symbol:
    // ?SerializeTo@UnrecognizedChunkTypeCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@UnrecognizedChunkTypeCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@UnrecognizedChunkTypeCause@dcsctp@@SA?AV?$optional@VUnrecognizedChunkTypeCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::UnrecognizedChunkTypeCause>
        Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
