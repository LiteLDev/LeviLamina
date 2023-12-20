#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class SupportedExtensionsParameter {
public:
    // prevent constructor by default
    SupportedExtensionsParameter& operator=(SupportedExtensionsParameter const&);
    SupportedExtensionsParameter(SupportedExtensionsParameter const&);
    SupportedExtensionsParameter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SupportedExtensionsParameter@dcsctp@@UEAA@XZ
    virtual ~SupportedExtensionsParameter();

    // vIndex: 1, symbol:
    // ?SerializeTo@SupportedExtensionsParameter@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@SupportedExtensionsParameter@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@SupportedExtensionsParameter@dcsctp@@SA?AV?$optional@VSupportedExtensionsParameter@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::SupportedExtensionsParameter>
        Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
