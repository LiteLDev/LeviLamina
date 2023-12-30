#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/AsyncSocketAdapter.h"
#include "mc/network/nethernet/ErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncSocketAdapter; }
namespace rtc { class Socket; }
// clang-format on

namespace NetherNet {

class AesAdapter : public ::rtc::AsyncSocketAdapter {
public:
    // prevent constructor by default
    AesAdapter& operator=(AesAdapter const&);
    AesAdapter(AesAdapter const&);
    AesAdapter();

public:
    // NOLINTBEGIN
    // symbol: ??1AesAdapter@NetherNet@@UEAA@XZ
    MCVAPI ~AesAdapter();

    // symbol: ??0AesAdapter@NetherNet@@QEAA@V?$unique_ptr@VSocket@rtc@@U?$default_delete@VSocket@rtc@@@std@@@std@@@Z
    MCAPI explicit AesAdapter(std::unique_ptr<class rtc::Socket>);

    // symbol:
    // ?Create@AesAdapter@NetherNet@@SA?AU?$ErrorOr@V?$unique_ptr@VAesAdapter@NetherNet@@U?$default_delete@VAesAdapter@NetherNet@@@std@@@std@@Verror_code@2@@2@$$QEAV?$unique_ptr@VSocket@rtc@@U?$default_delete@VSocket@rtc@@@std@@@std@@@Z
    MCAPI static struct NetherNet::ErrorOr<std::unique_ptr<class NetherNet::AesAdapter>, std::error_code>
    Create(std::unique_ptr<class rtc::Socket>&&);

    // NOLINTEND
};

}; // namespace NetherNet
