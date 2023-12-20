#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class MissingMandatoryParameterCause {
public:
    // prevent constructor by default
    MissingMandatoryParameterCause& operator=(MissingMandatoryParameterCause const&);
    MissingMandatoryParameterCause(MissingMandatoryParameterCause const&);
    MissingMandatoryParameterCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MissingMandatoryParameterCause@dcsctp@@UEAA@XZ
    virtual ~MissingMandatoryParameterCause();

    // vIndex: 1, symbol:
    // ?SerializeTo@MissingMandatoryParameterCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@MissingMandatoryParameterCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@MissingMandatoryParameterCause@dcsctp@@SA?AV?$optional@VMissingMandatoryParameterCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::MissingMandatoryParameterCause>
        Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
