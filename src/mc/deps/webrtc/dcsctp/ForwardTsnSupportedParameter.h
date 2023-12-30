#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class ForwardTsnSupportedParameter {
public:
    // prevent constructor by default
    ForwardTsnSupportedParameter& operator=(ForwardTsnSupportedParameter const&);
    ForwardTsnSupportedParameter(ForwardTsnSupportedParameter const&);
    ForwardTsnSupportedParameter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ForwardTsnSupportedParameter@dcsctp@@UEAA@XZ
    virtual ~ForwardTsnSupportedParameter() = default;

    // vIndex: 1, symbol:
    // ?SerializeTo@ForwardTsnSupportedParameter@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@ForwardTsnSupportedParameter@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@ForwardTsnSupportedParameter@dcsctp@@SA?AV?$optional@VForwardTsnSupportedParameter@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::ForwardTsnSupportedParameter>
        Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
