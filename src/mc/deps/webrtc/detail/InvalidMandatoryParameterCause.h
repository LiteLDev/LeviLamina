#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class InvalidMandatoryParameterCause {
public:
    // prevent constructor by default
    InvalidMandatoryParameterCause& operator=(InvalidMandatoryParameterCause const&);
    InvalidMandatoryParameterCause(InvalidMandatoryParameterCause const&);
    InvalidMandatoryParameterCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InvalidMandatoryParameterCause@dcsctp@@UEAA@XZ
    virtual ~InvalidMandatoryParameterCause() = default;

    // vIndex: 1, symbol:
    // ?SerializeTo@InvalidMandatoryParameterCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@InvalidMandatoryParameterCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@InvalidMandatoryParameterCause@dcsctp@@SA?AV?$optional@VInvalidMandatoryParameterCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::InvalidMandatoryParameterCause>
        Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
