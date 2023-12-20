#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/AsyncSocketAdapter.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncSocketAdapter; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class SSLAdapter : public ::rtc::AsyncSocketAdapter {
public:
    // prevent constructor by default
    SSLAdapter& operator=(SSLAdapter const&);
    SSLAdapter(SSLAdapter const&);
    SSLAdapter();

public:
    // NOLINTBEGIN
    // symbol: ?Accept@SSLAdapter@rtc@@EEAAPEAVSocket@2@PEAVSocketAddress@2@@Z
    MCVAPI class rtc::Socket* Accept(class rtc::SocketAddress*);

    // symbol: ?Listen@SSLAdapter@rtc@@EEAAHH@Z
    MCVAPI int Listen(int);

    // symbol: ??1SSLAdapter@rtc@@UEAA@XZ
    MCVAPI ~SSLAdapter();

    // symbol: ?Create@SSLAdapter@rtc@@SAPEAV12@PEAVSocket@2@@Z
    MCAPI static class rtc::SSLAdapter* Create(class rtc::Socket*);

    // NOLINTEND
};

}; // namespace rtc
