#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class SctpTransportInternal; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class Thread; }
// clang-format on

namespace cricket {

class SctpTransportFactory {
public:
    // prevent constructor by default
    SctpTransportFactory& operator=(SctpTransportFactory const&);
    SctpTransportFactory(SctpTransportFactory const&);
    SctpTransportFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SctpTransportFactory@cricket@@UEAA@XZ
    virtual ~SctpTransportFactory() = default;

    // vIndex: 1, symbol:
    // ?CreateSctpTransport@SctpTransportFactory@cricket@@UEAA?AV?$unique_ptr@VSctpTransportInternal@cricket@@U?$default_delete@VSctpTransportInternal@cricket@@@std@@@std@@PEAVPacketTransportInternal@rtc@@@Z
    virtual std::unique_ptr<class cricket::SctpTransportInternal>
    CreateSctpTransport(class rtc::PacketTransportInternal*);

    // symbol: ??0SctpTransportFactory@cricket@@QEAA@PEAVThread@rtc@@@Z
    MCAPI explicit SctpTransportFactory(class rtc::Thread*);

    // NOLINTEND
};

}; // namespace cricket
