#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct ThreadInit; }
namespace rtc { class SocketServer; }
namespace rtc { class Thread; }
// clang-format on

namespace NetherNet {

class RtcThreadManager {
public:
    // prevent constructor by default
    RtcThreadManager& operator=(RtcThreadManager const&);
    RtcThreadManager(RtcThreadManager const&);

public:
    // NOLINTBEGIN
    // symbol: ?GetRtcThread@RtcThreadManager@NetherNet@@QEBAPEAVThread@rtc@@XZ
    MCAPI class rtc::Thread* GetRtcThread() const;

    // symbol:
    // ?Initialize@RtcThreadManager@NetherNet@@QEAAXPEBDAEBUThreadInit@2@$$QEAV?$unique_ptr@VSocketServer@rtc@@U?$default_delete@VSocketServer@rtc@@@std@@@std@@@Z
    MCAPI void Initialize(char const*, struct NetherNet::ThreadInit const&, std::unique_ptr<class rtc::SocketServer>&&);

    // symbol: ??0RtcThreadManager@NetherNet@@QEAA@XZ
    MCAPI RtcThreadManager();

    // symbol: ?Shutdown@RtcThreadManager@NetherNet@@QEAAXXZ
    MCAPI void Shutdown();

    // symbol: ??1RtcThreadManager@NetherNet@@QEAA@XZ
    MCAPI ~RtcThreadManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?LoadRtcThread@RtcThreadManager@NetherNet@@AEBA?AV?$shared_ptr@VThread@rtc@@@std@@XZ
    MCAPI std::shared_ptr<class rtc::Thread> LoadRtcThread() const;

    // NOLINTEND
};

}; // namespace NetherNet
