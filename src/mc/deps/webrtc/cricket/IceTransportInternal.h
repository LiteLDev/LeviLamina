#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/IceProtocolType.h"
#include "mc/deps/webrtc/rtc/PacketTransportInternal.h"
#include "mc/deps/webrtc/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class PacketTransportInternal; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace cricket {

class IceTransportInternal : public ::rtc::PacketTransportInternal {
public:
    // prevent constructor by default
    IceTransportInternal& operator=(IceTransportInternal const&);
    IceTransportInternal(IceTransportInternal const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IceTransportInternal@cricket@@UEAA@XZ
    virtual ~IceTransportInternal();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9() = 0;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10() = 0;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11() = 0;

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12() = 0;

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13() = 0;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14() = 0;

    // vIndex: 15, symbol: ?SetIceProtocolType@IceTransportInternal@cricket@@UEAAXW4IceProtocolType@2@@Z
    virtual void SetIceProtocolType(::cricket::IceProtocolType);

    // vIndex: 16, symbol:
    // ?SetIceCredentials@IceTransportInternal@cricket@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z
    virtual void SetIceCredentials(std::string_view, std::string_view);

    // vIndex: 17, symbol:
    // ?SetRemoteIceCredentials@IceTransportInternal@cricket@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z
    virtual void SetRemoteIceCredentials(std::string_view, std::string_view);

    // symbol: ??0IceTransportInternal@cricket@@QEAA@XZ
    MCAPI IceTransportInternal();

    // NOLINTEND
};

}; // namespace cricket
