#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/IPAddress.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
// clang-format on

namespace rtc {

class InterfaceAddress : public ::rtc::IPAddress {
public:
    // prevent constructor by default
    InterfaceAddress(InterfaceAddress const&);
    InterfaceAddress();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1InterfaceAddress@rtc@@UEAA@XZ
    virtual ~InterfaceAddress();

    // symbol: ??4InterfaceAddress@rtc@@QEAAAEBV01@AEBV01@@Z
    MCAPI class rtc::InterfaceAddress const& operator=(class rtc::InterfaceAddress const&);

    // symbol: ??8InterfaceAddress@rtc@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class rtc::InterfaceAddress const&) const;

    // NOLINTEND
};

}; // namespace rtc
