#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class UnresolvableAddressCause {
public:
    // prevent constructor by default
    UnresolvableAddressCause& operator=(UnresolvableAddressCause const&);
    UnresolvableAddressCause(UnresolvableAddressCause const&);
    UnresolvableAddressCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UnresolvableAddressCause@dcsctp@@UEAA@XZ
    virtual ~UnresolvableAddressCause() = default;

    // vIndex: 1, symbol: ?SerializeTo@UnresolvableAddressCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@UnresolvableAddressCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@UnresolvableAddressCause@dcsctp@@SA?AV?$optional@VUnresolvableAddressCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::UnresolvableAddressCause> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
