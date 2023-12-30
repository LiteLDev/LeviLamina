#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class UnrecognizedParametersCause {
public:
    // prevent constructor by default
    UnrecognizedParametersCause& operator=(UnrecognizedParametersCause const&);
    UnrecognizedParametersCause(UnrecognizedParametersCause const&);
    UnrecognizedParametersCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UnrecognizedParametersCause@dcsctp@@UEAA@XZ
    virtual ~UnrecognizedParametersCause() = default;

    // vIndex: 1, symbol:
    // ?SerializeTo@UnrecognizedParametersCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@UnrecognizedParametersCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@UnrecognizedParametersCause@dcsctp@@SA?AV?$optional@VUnrecognizedParametersCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::UnrecognizedParametersCause>
        Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
