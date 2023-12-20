#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/Connection.h"
#include "mc/deps/webrtc/detail/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class Port; }
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace rtc { class Network; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace cricket {

class ProxyConnection : public ::cricket::Connection {
public:
    // prevent constructor by default
    ProxyConnection& operator=(ProxyConnection const&);
    ProxyConnection(ProxyConnection const&);
    ProxyConnection();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ProxyConnection@cricket@@UEAA@XZ
    virtual ~ProxyConnection() = default;

    // vIndex: 6, symbol: ?Send@ProxyConnection@cricket@@UEAAHPEBX_KAEBUPacketOptions@rtc@@@Z
    virtual int Send(void const*, uint64, struct rtc::PacketOptions const&);

    // vIndex: 7, symbol: ?GetError@ProxyConnection@cricket@@UEAAHXZ
    virtual int GetError();

    // symbol: ??0ProxyConnection@cricket@@QEAA@V?$WeakPtr@VPort@cricket@@@rtc@@_KAEBVCandidate@1@@Z
    MCAPI ProxyConnection(class rtc::WeakPtr<class cricket::Port>, uint64, class cricket::Candidate const&);

    // NOLINTEND
};

}; // namespace cricket
