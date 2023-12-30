#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class DcSctpSocketInterface; }
namespace dcsctp { class PacketObserver; }
namespace dcsctp { struct DcSctpOptions; }
// clang-format on

namespace dcsctp {

class DcSctpSocketFactory {
public:
    // prevent constructor by default
    DcSctpSocketFactory& operator=(DcSctpSocketFactory const&);
    DcSctpSocketFactory(DcSctpSocketFactory const&);
    DcSctpSocketFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DcSctpSocketFactory@dcsctp@@UEAA@XZ
    virtual ~DcSctpSocketFactory();

    // vIndex: 1, symbol:
    // ?Create@DcSctpSocketFactory@dcsctp@@UEAA?AV?$unique_ptr@VDcSctpSocketInterface@dcsctp@@U?$default_delete@VDcSctpSocketInterface@dcsctp@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@AEAVDcSctpSocketCallbacks@2@V?$unique_ptr@VPacketObserver@dcsctp@@U?$default_delete@VPacketObserver@dcsctp@@@std@@@4@AEBUDcSctpOptions@2@@Z
    virtual std::unique_ptr<class dcsctp::DcSctpSocketInterface>
    Create(std::string_view, class dcsctp::DcSctpSocketCallbacks&, std::unique_ptr<class dcsctp::PacketObserver>, struct dcsctp::DcSctpOptions const&);

    // NOLINTEND
};

}; // namespace dcsctp
