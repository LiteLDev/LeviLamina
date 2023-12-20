#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct PeerConnectionFactoryDependencies; }
// clang-format on

namespace webrtc {

class ConnectionContext {
public:
    // prevent constructor by default
    ConnectionContext& operator=(ConnectionContext const&);
    ConnectionContext(ConnectionContext const&);
    ConnectionContext();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Create@ConnectionContext@webrtc@@SA?AV?$scoped_refptr@VConnectionContext@webrtc@@@rtc@@PEAUPeerConnectionFactoryDependencies@2@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::ConnectionContext>
    Create(struct webrtc::PeerConnectionFactoryDependencies*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0ConnectionContext@webrtc@@IEAA@PEAUPeerConnectionFactoryDependencies@1@@Z
    MCAPI explicit ConnectionContext(struct webrtc::PeerConnectionFactoryDependencies*);

    // symbol: ??1ConnectionContext@webrtc@@IEAA@XZ
    MCAPI ~ConnectionContext();

    // NOLINTEND
};

}; // namespace webrtc
