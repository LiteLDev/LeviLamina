#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/AsyncSocketAdapter.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncSocketAdapter; }
namespace rtc { class Socket; }
// clang-format on

namespace rtc {

class BufferedReadAdapter : public ::rtc::AsyncSocketAdapter {
public:
    // prevent constructor by default
    BufferedReadAdapter& operator=(BufferedReadAdapter const&);
    BufferedReadAdapter(BufferedReadAdapter const&);
    BufferedReadAdapter();

public:
    // NOLINTBEGIN
    // symbol: ?OnReadEvent@BufferedReadAdapter@rtc@@MEAAXPEAVSocket@2@@Z
    MCVAPI void OnReadEvent(class rtc::Socket*);

    // symbol: ?Recv@BufferedReadAdapter@rtc@@UEAAHPEAX_KPEA_J@Z
    MCVAPI int Recv(void*, uint64, int64*);

    // symbol: ?Send@BufferedReadAdapter@rtc@@UEAAHPEBX_K@Z
    MCVAPI int Send(void const*, uint64);

    // symbol: ??1BufferedReadAdapter@rtc@@UEAA@XZ
    MCVAPI ~BufferedReadAdapter();

    // symbol: ??0BufferedReadAdapter@rtc@@QEAA@PEAVSocket@1@_K@Z
    MCAPI BufferedReadAdapter(class rtc::Socket*, uint64);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?BufferInput@BufferedReadAdapter@rtc@@IEAAX_N@Z
    MCAPI void BufferInput(bool);

    // NOLINTEND
};

}; // namespace rtc
