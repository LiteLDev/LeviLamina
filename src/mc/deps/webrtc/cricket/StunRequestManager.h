#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace cricket {

class StunRequestManager {
public:
    // prevent constructor by default
    StunRequestManager& operator=(StunRequestManager const&);
    StunRequestManager(StunRequestManager const&);
    StunRequestManager();

public:
    // NOLINTBEGIN
    // symbol: ?CheckResponse@StunRequestManager@cricket@@QEAA_NPEAVStunMessage@2@@Z
    MCAPI bool CheckResponse(class cricket::StunMessage*);

    // symbol: ?CheckResponse@StunRequestManager@cricket@@QEAA_NPEBD_K@Z
    MCAPI bool CheckResponse(char const*, uint64);

    // symbol: ?Clear@StunRequestManager@cricket@@QEAAXXZ
    MCAPI void Clear();

    // symbol: ?OnRequestTimedOut@StunRequestManager@cricket@@QEAAXPEAVStunRequest@2@@Z
    MCAPI void OnRequestTimedOut(class cricket::StunRequest*);

    // symbol: ?Send@StunRequestManager@cricket@@QEAAXPEAVStunRequest@2@@Z
    MCAPI void Send(class cricket::StunRequest*);

    // symbol: ?SendDelayed@StunRequestManager@cricket@@QEAAXPEAVStunRequest@2@H@Z
    MCAPI void SendDelayed(class cricket::StunRequest*, int);

    // symbol: ?SendPacket@StunRequestManager@cricket@@QEAAXPEBX_KPEAVStunRequest@2@@Z
    MCAPI void SendPacket(void const*, uint64, class cricket::StunRequest*);

    // symbol:
    // ??0StunRequestManager@cricket@@QEAA@PEAVTaskQueueBase@webrtc@@V?$function@$$A6AXPEBX_KPEAVStunRequest@cricket@@@Z@std@@@Z
    MCAPI
    StunRequestManager(class webrtc::TaskQueueBase*, std::function<void(void const*, uint64, class cricket::StunRequest*)>);

    // symbol: ??1StunRequestManager@cricket@@QEAA@XZ
    MCAPI ~StunRequestManager();

    // NOLINTEND
};

}; // namespace cricket
